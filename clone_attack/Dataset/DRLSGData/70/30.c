void  main () {
    double  Yzmh6KcbAZ [(508 - 488)] [(974 - 954)], HZuqGnI1lM;
    int i, j, n;
    float a [20] [(796 - 794)];
    scanf ("%d", &n);
    {
        i = 325 - 325;
        while (i < n) {
            for (j = (165 - 165); j < (978 - 976); j++)
                scanf ("%f", &a[i][j]);
            i++;
        }
    }
    {
        i = 523 - 523;
        while (i < n) {
            for (j = (96 - 96); j < n; j++)
                Yzmh6KcbAZ[i][j] = sqrt ((a[i][(781 - 781)] - a[j][(758 - 758)]) * (a[i][0] - a[j][0]) + (a[i][(519 - 518)] - a[j][(93 - 92)]) * (a[i][(659 - 658)] - a[j][1]));
            i++;
        }
    }
    HZuqGnI1lM = Yzmh6KcbAZ[0][0];
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (Yzmh6KcbAZ[i][j] >= HZuqGnI1lM)
                HZuqGnI1lM = Yzmh6KcbAZ[i][j];
    printf ("%.4lf\n", HZuqGnI1lM);
}

