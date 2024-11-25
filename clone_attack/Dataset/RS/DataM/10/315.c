void  I8C0zGgkiu (int h [], int SmKeUQJEh [], int i) {
    int seH6PkA3;
    int j;
    for (j = 0, seH6PkA3 = 0; i > j; j = j + 1)
        if (h[j] >= h[i] && seH6PkA3 < SmKeUQJEh[j])
            seH6PkA3 = SmKeUQJEh[j];
    SmKeUQJEh[i] = seH6PkA3 + 1;
}

void  main () {
    int SmKeUQJEh [25];
    int WK8Z7AsOdU;
    int h [25];
    int seH6PkA3;
    int i;
    scanf ("%d", &WK8Z7AsOdU);
    for (i = 0; WK8Z7AsOdU > i; i = i + 1)
        scanf ("%d", &h[i]);
    for (i = 0; WK8Z7AsOdU > i; i = i + 1)
        I8C0zGgkiu (h, SmKeUQJEh, i);
    for (i = 0, seH6PkA3 = 0; i < WK8Z7AsOdU; i = i + 1)
        if (SmKeUQJEh[i] > seH6PkA3)
            seH6PkA3 = SmKeUQJEh[i];
    printf ("%d\n", seH6PkA3);
}

