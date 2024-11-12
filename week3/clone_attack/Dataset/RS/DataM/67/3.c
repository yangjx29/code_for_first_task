int main () {
    int n, LwtGcb9ag, j [(542 - 442)];
    double  a [(1058 - 958)], b [100], x, t47N2dY [100];
    scanf ("%d", &n);
    scanf ("%lf %lf", &a[(629 - 629)], &b[(23 - 23)]);
    x = b[(744 - 744)] / a[0];
    {
        LwtGcb9ag = 352 - 351;
        while (n > LwtGcb9ag) {
            scanf ("%lf %lf", &a[LwtGcb9ag], &b[LwtGcb9ag]);
            t47N2dY[LwtGcb9ag] = b[LwtGcb9ag] / a[LwtGcb9ag];
            if ((324.05 - 324.0) < x - t47N2dY[LwtGcb9ag])
                j[LwtGcb9ag] = 1;
            else {
                if (0.05 < t47N2dY[LwtGcb9ag] - x)
                    j[LwtGcb9ag] = 2;
                else
                    j[LwtGcb9ag] = 0;
            }
            LwtGcb9ag = LwtGcb9ag +1;
        };
    }
    for (LwtGcb9ag = 1; LwtGcb9ag < n; LwtGcb9ag = LwtGcb9ag +1) {
        if (j[LwtGcb9ag] == 1)
            ;
        if (j[LwtGcb9ag] == 2)
            ;
        if (j[LwtGcb9ag] == 0)
            printf ("same\n");
    }
    return 0;
}

