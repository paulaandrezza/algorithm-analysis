unsigned int bubbleSort(int v[], int LENGHT)
{
  int i, j, aux;
  unsigned int operations = 0;

  for (i = 1; i <= LENGHT - 1; i++)
    for (j = 0; j < LENGHT - 1; j++)
      if (v[j] > v[j + 1])
      {
        aux = v[j];
        v[j] = v[j + 1];
        v[j + 1] = aux;
        operations++;
      }

  return operations;
}