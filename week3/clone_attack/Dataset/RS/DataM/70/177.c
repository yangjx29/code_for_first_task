void  main () {
    int n;
    int y3taOR;
    int j;
    double  a [(308 - 208)], b [(492 - 392)], c, d, max = (547 - 547), e;
    scanf ("%d", &n);
    for (y3taOR = (915 - 915); n > y3taOR; y3taOR = y3taOR + 1)
        scanf ("%lf%lf", &a[y3taOR], &b[y3taOR]);
    {
        y3taOR = 691 - 691;
        while (n > y3taOR) {
            for (j = (114 - 114); n > j; j = j + 1) {
                c = (a[y3taOR] - a[j]) * (a[y3taOR] - a[j]) + (b[y3taOR] - b[j]) * (b[y3taOR] - b[j]);
                e = fabs (c);
                d = sqrt (e);
                if (d > max)
                    max = d;
            }
            y3taOR++;
        };
    }
    printf ("%.4f\n", max);
}

