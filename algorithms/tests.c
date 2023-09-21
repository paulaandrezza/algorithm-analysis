#include <time.h>
#include <string.h>
#include <stdio.h>

#include "bubbleSort.c"
#include "insertion.c"
#include "selection.c"

void test(int originalArray[], int LENGTH, char arrayType[])
{
  FILE *csvFile;
  csvFile = fopen("test_data.csv", "a");

  clock_t start, end;
  int testArray[LENGTH], i;
  double times[3];
  unsigned int operations[3];
  char algorithms[3][15];

  strcpy(algorithms[0], "bubbleSort");
  strcpy(algorithms[1], "insertion");
  strcpy(algorithms[2], "selection");

  copyArray(originalArray, testArray, LENGTH);
  start = clock();
  operations[0] = bubbleSort(testArray, LENGTH);
  end = clock();
  times[0] = ((double)end - start) / CLOCKS_PER_SEC;

  copyArray(originalArray, testArray, LENGTH);
  start = clock();
  operations[1] = insertion(testArray, LENGTH);
  end = clock();
  times[1] = ((double)end - start) / CLOCKS_PER_SEC;

  copyArray(originalArray, testArray, LENGTH);
  start = clock();
  operations[2] = selection(testArray, LENGTH);
  end = clock();
  times[2] = ((double)end - start) / CLOCKS_PER_SEC;

  for (i = 0; i < 3; i++)
  {
    fprintf(csvFile, "%s,%s,%d,%f,%u\n", arrayType, algorithms[i], LENGTH, times[i], operations[i]);
  }

  fclose(csvFile);
}

void runTests(int originalArray[], char arrayType[])
{
  int LENGTH;

  LENGTH = 1000;
  test(originalArray, LENGTH, arrayType);

  LENGTH = 10000;
  test(originalArray, LENGTH, arrayType);

  LENGTH = 100000;
  test(originalArray, LENGTH, arrayType);
}