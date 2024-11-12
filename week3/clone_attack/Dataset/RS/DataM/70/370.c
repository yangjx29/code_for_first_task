void  main () {
    int i, PnKMuYZy, C6iyfMntN8X;
    double  x [100], y [100], Ol1O4dGo, fqMy1K6xPu;
    scanf ("%d", &C6iyfMntN8X);
    scanf ("%lf %lf", &x[0], &y[0]);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%lf %lf", &x[1], &y[1]);
    Ol1O4dGo = pow (x[0] - x[1], 2.0) + pow (y[0] - y[1], 2.0);
    {
        i = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (C6iyfMntN8X > i) {
            scanf ("%lf %lf", &x[i], &y[i]);
            {
                PnKMuYZy = 0;
                while (i > PnKMuYZy) {
                    if ((fqMy1K6xPu = pow (x[i] - x[PnKMuYZy], 2.0) + pow (y[i] - y[PnKMuYZy], 2.0)) > Ol1O4dGo)
                        Ol1O4dGo = fqMy1K6xPu;
                    PnKMuYZy = PnKMuYZy +1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            i = i + 1;
        };
    }
    printf ("%.4f\n", sqrt (Ol1O4dGo));
}

