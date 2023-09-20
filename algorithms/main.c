#include "commonFunctions.c"
#include "tests.c"

int main()
{
  int LENGTH;
  LENGTH = 100000;
  int originalArray[LENGTH];

  printf("Random Array\n");
  randomArray(originalArray, LENGTH);
  runTests(originalArray);

  printf("Inverted Array\n");
  invertedArray(originalArray, LENGTH);
  runTests(originalArray);

  return 0;
}
