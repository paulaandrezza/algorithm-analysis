#include <stdio.h>

#include "commonFunctions.c"
#include "tests.c"

int main()
{
  FILE *csvFile;
  csvFile = fopen("test_data.csv", "w");
  fprintf(csvFile, "Array Type,Algorithm,Dataset Size,Time Spent (seconds),Operations\n");
  fclose(csvFile);

  int LENGTH;
  LENGTH = 100000;
  int originalArray[LENGTH];

  randomArray(originalArray, LENGTH);
  runTests(originalArray, "Random");

  invertedArray(originalArray, LENGTH);
  runTests(originalArray, "Inverted");

  return 0;
}
