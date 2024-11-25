void  main () {
    long  int n, y, r, t = 0, cgTrXJa, fBiQOE3kMne, rlF5cV1zAj, j, DQdAaq, yu;
    int a [12] = {(90 - 59), (446 - 418), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf ("%d %d %d", &n, &y, &r);
    if (n > 10000)
        n = n % 2000;
    cgTrXJa = n / 100;
    rlF5cV1zAj = n / 400;
    fBiQOE3kMne = n / 4 - (cgTrXJa - rlF5cV1zAj);
    if (y == 1)
        t = 0;
    else {
        for (j = 0; y - 1 > j; j = j + 1)
            t = t + a[j];
    }
    DQdAaq = 365 * (n - 1) + fBiQOE3kMne + t + r;
    if (y == 2 && !(29 != r))
        DQdAaq = DQdAaq -1;
    yu = DQdAaq % 7;
    if (!(0 != yu))
        ;
    else if (yu == 1)
        ;
    else if (yu == 2)
        printf ("Tue.");
    else if (yu == 3)
        printf ("Wed.");
    else if (yu == 4)
        printf ("Thu.");
    else if (yu == 5)
        printf ("Fri.");
    else if (yu == 6)
        ;
}

