#include <time.h>
#include <string.h>

#include "bubbleSort.c"
#include "insertion.c"
#include "selection.c"

void test(int originalArray[], int LENGTH)
{
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
    printf("%s: Time Spent: %f Operations: %u\n", algorithms[i], times[i], operations[i]);
  }
  printf("\n");
}

void runTests(int originalArray[])
{
  int LENGTH;

  LENGTH = 1000;
  printf("Pequeno: 1000 elementos\n");
  test(originalArray, LENGTH);

  LENGTH = 10000;
  printf("Médio: 10.000 elementos\n");
  test(originalArray, LENGTH);

  LENGTH = 100000;
  printf("Grande 100.000 elementos\n");
  test(originalArray, LENGTH);
}