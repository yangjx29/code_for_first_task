main () {
    double  wvYVEpy34 [(489 - 389)] [3];
    double  AJtIh6ZTr, F25mykHY1bdw;
    int k;
    scanf ("%d", &k);
    {
        int i = (264 - 264);
        while (k > i) {
            scanf ("%lf %lf", &wvYVEpy34[i][(667 - 667)], &wvYVEpy34[i][(825 - 824)]);
            i++;
        };
    }
    {
        int i = (459 - 459);
        while (i < k) {
            F25mykHY1bdw = (653 - 653);
            {
                int j = i + (860 - 859);
                while (j < k) {
                    AJtIh6ZTr = (wvYVEpy34[i][(512 - 512)] - wvYVEpy34[j][(334 - 334)]) * (wvYVEpy34[i][(787 - 787)] - wvYVEpy34[j][(592 - 592)]) + (wvYVEpy34[i][(926 - 925)] - wvYVEpy34[j][(88 - 87)]) * (wvYVEpy34[i][1] - wvYVEpy34[j][1]);
                    j++;
                    if (AJtIh6ZTr > F25mykHY1bdw)
                        F25mykHY1bdw = AJtIh6ZTr;
                };
            }
            wvYVEpy34[i][(801 - 799)] = F25mykHY1bdw;
            i++;
            F25mykHY1bdw = 0;
        };
    }
    {
        int i = 0;
        while (i < k) {
            if (wvYVEpy34[i][2] > F25mykHY1bdw)
                F25mykHY1bdw = wvYVEpy34[i][2];
            i++;
        };
    }
    printf ("%.4f", sqrt (F25mykHY1bdw));
}

