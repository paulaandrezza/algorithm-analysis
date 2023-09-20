int partition(int v[], int i, int f)
{
  int t, c = v[i], a = i + 1, b = f;
  while (a <= b)
  {
    if (v[a] <= c)
      ++a;
    else if (c < v[b])
      --b;
    else
    {
      t = v[a];
      v[a] = v[b];
      v[b] = t;
      ++a;
      --b;
    }
  }
  t = v[i];
  v[i] = v[b];
  v[b] = t;
  return b;
}

void quicksort(int v[], int i, int f)
{
  int pivo;
  if (i < f)
  {
    pivo = partition(v, i, f);
    quicksort(v, i, pivo - 1);
    quicksort(v, pivo + 1, f);
  }
}