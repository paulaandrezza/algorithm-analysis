#include <time.h>

#include "bubbleSort.c"
#include "insertion.c"
#include "selection.c"

void test(int originalArray[], int LENGTH)
{
  clock_t start, end;
  int testArray[LENGTH], operations[3], i;
  double times[3];

  copyArray(originalArray, testArray, LENGTH);
  start = clock();
  bubbleSort(testArray, LENGTH);
  end = clock();
  times[0] = ((double)end - start) / CLOCKS_PER_SEC;

  copyArray(originalArray, testArray, LENGTH);
  start = clock();
  insertion(testArray, LENGTH);
  end = clock();
  times[1] = ((double)end - start) / CLOCKS_PER_SEC;

  copyArray(originalArray, testArray, LENGTH);
  start = clock();
  selection(testArray, LENGTH);
  end = clock();
  times[2] = ((double)end - start) / CLOCKS_PER_SEC;

  for (i = 0; i < 3; i++)
  {
    printf("%f ", times[i]);
  }
  printf("\n\n");
}

void runTests(int originalArray[])
{
  int LENGTH;

  LENGTH = 1000;
  test(originalArray, LENGTH);

  LENGTH = 10000;
  test(originalArray, LENGTH);

  LENGTH = 100000;
  test(originalArray, LENGTH);
}