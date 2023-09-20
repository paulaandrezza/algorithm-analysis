unsigned int selection(int v[], int LENGHT)
{
  int i, j, min, x;
  unsigned int operations = 0;

  for (i = 0; i < LENGHT - 1; ++i)
  {
    min = i;
    for (j = i + 1; j < LENGHT; ++j)
      if (v[j] < v[min])
      {
        min = j;
        operations++;
      }
    x = v[i];
    v[i] = v[min];
    v[min] = x;
  }

  return operations;
}