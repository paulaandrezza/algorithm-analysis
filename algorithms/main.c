#include "commonFunctions.c"
#include "tests.c"

int main()
{
  int LENGTH;
  LENGTH = 100000;
  int originalArray[LENGTH];

  randomArray(originalArray, LENGTH);
  runTests(originalArray);

  invertedArray(originalArray, LENGTH);
  runTests(originalArray);

  return 0;
}
