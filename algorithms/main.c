#include "commonFunctions.c"
#include "bubbleSort.c"
#include "insertion.c"
#include "selection.c"

#define LENGTH 10

int main()
{
  int v[LENGTH];

  randomArray(v, LENGTH);
  printArray(v, LENGTH);

  // bubbleSort(v, LENGTH);
  // insertion(v, LENGTH);
  selection(v, LENGTH);

  printArray(v, LENGTH);

  return 0;
}
