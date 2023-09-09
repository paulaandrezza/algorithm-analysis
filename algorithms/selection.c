void selection(int v[], int LENGHT)
{
  int i, j, min, x;

  for (i = 0; i < LENGHT - 1; ++i)
  {
    min = i;
    for (j = i + 1; j < LENGHT; ++j)
      if (v[j] < v[min])
        min = j;
    x = v[i];
    v[i] = v[min];
    v[min] = x;
  }
}