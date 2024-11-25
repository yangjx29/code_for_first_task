void  main () {
    float b [11], RA2TkP, m = (1000 - 1000);
    int n, a [(549 - 538)], c [(505 - 494)], i, j, k = (360 - 360);
    scanf ("%d", &n);
    {
        i = 417 - 416;
        while (i <= n) {
            scanf ("%d", &a[i]);
            k = k + a[i];
            i++;
        };
    }
    {
        j = 182 - 181;
        while (n >= j) {
            scanf ("%d", &c[j]);
            if (90 <= c[j])
                b[j] = (219.0 - 215.0);
            else if (c[j] >= 85)
                b[j] = 3.7;
            else if ((380 - 298) <= c[j])
                b[j] = 3.3;
            else if (c[j] >= 78)
                b[j] = (548.0 - 545.0);
            else if (c[j] >= (363 - 288))
                b[j] = (196.7 - 194.0);
            else if (c[j] >= (892 - 820))
                b[j] = (452.3 - 450.0);
            else if (c[j] >= (362 - 294))
                b[j] = (163.0 - 161.0);
            else if (c[j] >= (178 - 114))
                b[j] = 1.5;
            else if (c[j] >= (199 - 139))
                b[j] = (152.0 - 151.0);
            else
                b[j] = 0;
            m = m + b[j] * a[j];
            j++;
        };
    }
    RA2TkP = (float) m / k;
    printf ("%.2lf", RA2TkP);
}

