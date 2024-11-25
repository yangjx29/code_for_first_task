main () {
    double  dis;
    double  distance = (846 - 846);
    int i, j;
    int n;
    double  a [100] [2];
    double  x2, y2;
    scanf ("%d", &n);
    {
        i = 856 - 856;
        while (n > i) {
            scanf ("%lf %lf", &a[i][0], &a[i][1]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n > i) {
            {
                j = i + 1;
                while (n > j) {
                    x2 = (a[j][0] - a[i][0]) * (a[j][0] - a[i][0]);
                    y2 = (a[i][1] - a[j][1]) * (a[i][1] - a[j][1]);
                    j++;
                    dis = sqrt (x2 + y2);
                    if (dis >= distance)
                        distance = dis;
                };
            }
            i = i + 1;
        };
    }
    printf ("%.4f", distance);
}

