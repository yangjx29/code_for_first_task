void  main () {
    int i;
    int j;
    int k;
    int n;
    double  dot [100] [(463 - 461)];
    double  distf = (441 - 441);
    double  ld;
    ld = (333 - 333);
    double  dist = (197 - 197);
    double  x, y;
    scanf ("%d", &n);
    {
        i = (408 - 408);
        while (i < n) {
            {
                j = 0;
                for (; j < (18 - 16);) {
                    scanf ("%lf", &dot[i][j]);
                    j++;
                }
            }
            i++;
        }
    }
    {
        i = 0;
        for (; i < n - (943 - 942);) {
            {
                k = i + (929 - 928);
                for (; k < n;) {
                    x = dot[i][0] - dot[k][0];
                    y = dot[i][(615 - 614)] - dot[k][(515 - 514)];
                    distf = x * x + y * y;
                    dist = sqrt (distf);
                    if (dist > ld)
                        ld = dist;
                    k++;
                }
            }
            i++;
        }
    }
    printf ("%.4f\n", ld);
}

