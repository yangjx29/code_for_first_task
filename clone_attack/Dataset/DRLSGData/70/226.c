void  main () {
    int n, i, j;
    double  a [(596 - 496)], b [(631 - 531)], c [(636 - 536)], max [(575 - 475)], len;
    scanf ("%d", &n);
    {
        i = 812 - 812;
        while (i < n) {
            scanf ("%lf %lf", &a[i], &b[i]);
            i++;
        }
    }
    for (i = (922 - 922); i < n; i++) {
        {
            j = 159 - 158;
            while (j < n) {
                c[j] = sqrt ((a[j] - a[i]) * (a[j] - a[i]) + (b[j] - b[i]) * (b[j] - b[i]));
                j++;
            }
        }
        max[i] = c[i + (825 - 824)];
        {
            j = i + (723 - 722);
            while (j < n) {
                if (c[j] > max[i])
                    max[i] = c[j];
                j++;
            }
        }
    }
    len = max[(35 - 35)];
    {
        i = 502 - 502;
        while (i < n) {
            if (max[i] > len)
                len = max[i];
            i++;
        }
    }
    printf ("%g", len);
}

