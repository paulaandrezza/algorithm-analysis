void insertion(int v[], int LENGHT)
{
  int i, j, x;
  for (i = 1; i <= LENGHT; i++)
  {
    x = v[i];
    for (j = i - 1; j >= 0 && v[j] > x; --j)
      v[j + 1] = v[j];
    v[j + 1] = x;
  }
}