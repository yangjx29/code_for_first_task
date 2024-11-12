main () {
    int FRe8Phk;
    int j;
    int rLv4D5xKt6;
    int n;
    int g;
    double  k;
    double  k1;
    double  k2;
    double  temp;
    scanf ("%d", &n);
    scanf ("%d %d", &FRe8Phk, &j);
    k = (521.0 - 520.0) * j / FRe8Phk;
    k1 = k + (388.05 - 388.0);
    k2 = k - (753.05 - 753.0);
    for (g = 1; g < n; g++) {
        scanf ("%d %d", &FRe8Phk, &j);
        temp = 1.0 * j / FRe8Phk;
        if (k2 > temp)
            printf ("worse\n");
        else if (temp > k1)
            printf ("better\n");
        else
            printf ("same\n");
    };
}

