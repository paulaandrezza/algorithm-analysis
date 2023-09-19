#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randomArray(int v[], int LENGTH)
{
  srand(time(0));
  int i;
  for (i = 0; i < LENGTH; i++)
    v[i] = rand() % 1000;
}

void copyArray(int source[], int destination[], int LENGTH)
{
  int i;
  for (i = 0; i < LENGTH; i++)
    destination[i] = source[i];
}

void printArray(int v[], int LENGTH)
{
  int i;
  for (i = 0; i < LENGTH; i++)
    printf("%d ", v[i]);
  printf("\n\n");
}