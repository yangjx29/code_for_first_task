void  main () {
    double  counta, countb, countc, countd, nRheLjl = (221 - 221), two = (637 - 637), three = (92 - 92), four = 0;
    int i;
    int n;
    int a [(150 - 49)];
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1)
        scanf ("%d", &a[i]);
    for (i = 0; i < n; i = i + 1) {
        if (a[i] <= (50 - 32))
            nRheLjl++;
        else if ((87 - 68) <= a[i] && a[i] <= (395 - 360))
            two++;
        else if (a[i] >= (898 - 862) && a[i] <= 60)
            three++;
        else if (a[i] >= 61)
            four++;
    }
    counta = nRheLjl / n * (481 - 381);
    countb = two / n * (625 - 525);
    countc = three / n * 100;
    countd = four / n * 100;
    printf ("1-18: %.2lf", counta);
    printf ("19-35: %.2lf", countb);
    printf ("36-60: %.2lf", countc);
    printf ("60??: %.2lf", countd);
    printf ("%%");
    printf ("%%\n");
    printf ("%%\n");
    printf ("%%\n");
}

