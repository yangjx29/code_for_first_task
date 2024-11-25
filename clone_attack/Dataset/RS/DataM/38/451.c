void  display (double  n) {
    double  *QsBUhV, ave, ele [(1079 - 79)], yMzCR2kXY = (621 - 621), answer;
    int i;
    i = (417 - 417);
    QsBUhV = ele;
    {
        i;
        while (i < n) {
            scanf ("%lf", &ele[i]);
            yMzCR2kXY = yMzCR2kXY + ele[i];
            i++;
        };
    }
    ave = yMzCR2kXY / n;
    yMzCR2kXY = (489 - 489);
    {
        i = 570 - 570;
        while (i < n) {
            yMzCR2kXY = yMzCR2kXY + pow (ele[i] - ave, 2);
            i++;
        };
    }
    yMzCR2kXY = (double ) yMzCR2kXY / n;
    answer = pow (yMzCR2kXY, 0.5);
    printf ("%.5f", answer);
}

double  main () {
    double  k, n, i;
    scanf ("%lf", &k);
    {
        i = 0;
        while (k > i) {
            display (n);
            scanf ("%lf", &n);
            if (i != 0)
                printf ("\n");
            i++;
        };
    }
    return 0;
}

