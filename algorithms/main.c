#include "commonFunctions.c"
#include "bubbleSort.c"
#include "insertion.c"
#include "selection.c"

void test(int originalArray[], int LENGTH)
{
  int testArray[LENGTH];
  printf("bubleSort\n");
  copyArray(originalArray, testArray, LENGTH);
  printArray(testArray, LENGTH);
  bubbleSort(testArray, LENGTH);
  printArray(testArray, LENGTH);

  printf("insertion\n");
  copyArray(originalArray, testArray, LENGTH);
  printArray(testArray, LENGTH);
  insertion(testArray, LENGTH);
  printArray(testArray, LENGTH);

  printf("selection\n");
  copyArray(originalArray, testArray, LENGTH);
  printArray(testArray, LENGTH);
  selection(testArray, LENGTH);
  printArray(testArray, LENGTH);
}

int main()
{
  int LENGTH;
  LENGTH = 100000;
  int originalArray[LENGTH];

  randomArray(originalArray, LENGTH);

  LENGTH = 1000;
  printf("Pequeno: 1000 elementos\n");
  test(originalArray, LENGTH);

  LENGTH = 10000;
  printf(" Médio: 10.000 elementos\n");
  test(originalArray, LENGTH);

  LENGTH = 100000;
  printf("Grande 100.000 elementos\n");
  test(originalArray, LENGTH);

  return 0;
}
