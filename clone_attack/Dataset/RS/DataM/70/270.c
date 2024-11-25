void  main () {
    int XTW3jfIKaH;
    int pnVehNyc;
    int j;
    double  a [(1082 - 982)] [(151 - 149)];
    double  max;
    double  eJkmBw32;
    scanf ("%d", &XTW3jfIKaH);
    for (pnVehNyc = (723 - 723); XTW3jfIKaH > pnVehNyc; pnVehNyc++)
        for (j = (560 - 560); (284 - 282) > j; j = j + 1)
            scanf ("%lf", &a[pnVehNyc][j]);
    max = (a[(776 - 776)][(82 - 82)] - a[(400 - 399)][(889 - 889)]) * (a[(180 - 180)][(357 - 357)] - a[(994 - 993)][0]) + (a[0][(512 - 511)] - a[(513 - 512)][(614 - 613)]) * (a[0][(507 - 506)] - a[(72 - 71)][(488 - 487)]);
    for (pnVehNyc = 0; XTW3jfIKaH > pnVehNyc; pnVehNyc++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = pnVehNyc + 1; XTW3jfIKaH > j; j++) {
            eJkmBw32 = (a[pnVehNyc][0] - a[j][0]) * (a[pnVehNyc][0] - a[j][0]) + (a[pnVehNyc][1] - a[j][1]) * (a[pnVehNyc][1] - a[j][1]);
            if (eJkmBw32 > max)
                max = eJkmBw32;
        };
    }
    max = sqrt (max);
    printf ("%.4lf\n", max);
}

