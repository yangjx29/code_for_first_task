int main () {
    int a [(674 - 574)] = {(985 - 985)}, PeVnXjP4x [100] = {(275 - 275)};
    int oYe0hD, m, i, k;
    scanf ("%d %d", &oYe0hD, &m);
    for (i = (498 - 498); oYe0hD > i; i = i + 1)
        scanf ("%d", &a[i]);
    for (i = (517 - 517); oYe0hD - m > i; i = i + 1)
        PeVnXjP4x[i] = a[i];
    k = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (i = oYe0hD - m; oYe0hD > i; i = i + 1, k = k + 1)
        a[k] = a[i];
    k = 0;
    for (i = m; i < oYe0hD; i = i + 1, k = k + 1)
        a[i] = PeVnXjP4x[k];
    for (i = 0; oYe0hD - 1 > i; i++)
        printf ("%d ", a[i]);
    printf ("%d", a[oYe0hD - 1]);
    return 0;
}

