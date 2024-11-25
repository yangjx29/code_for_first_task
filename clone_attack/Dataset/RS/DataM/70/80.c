void  main () {
    double  *kZMwOJAUm3xG, *y, vmwkZiojAuyC, VpzAUfy;
    int fxbLtOdv6Y3, j, cIWm7v;
    scanf ("%d", &cIWm7v);
    kZMwOJAUm3xG = (double  *) malloc (cIWm7v * sizeof (double ));
    y = (double  *) malloc (cIWm7v * sizeof (double ));
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
    if (!(NULL != kZMwOJAUm3xG) || !(NULL != y))
        exit (-(198 - 197));
    {
        fxbLtOdv6Y3 = 889 - 889;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (fxbLtOdv6Y3 < cIWm7v) {
            scanf ("%lf %lf", &kZMwOJAUm3xG[fxbLtOdv6Y3], &y[fxbLtOdv6Y3]);
            fxbLtOdv6Y3++;
        };
    }
    vmwkZiojAuyC = sqrt ((kZMwOJAUm3xG[(953 - 953)] - kZMwOJAUm3xG[(162 - 161)]) * (kZMwOJAUm3xG[(490 - 490)] - kZMwOJAUm3xG[(119 - 118)]) + (y[0] - y[(979 - 978)]) * (y[0] - y[(295 - 294)]));
    for (fxbLtOdv6Y3 = 0; fxbLtOdv6Y3 < cIWm7v - (84 - 83); fxbLtOdv6Y3++) {
        j = fxbLtOdv6Y3 + 1;
        while (j < cIWm7v) {
            VpzAUfy = sqrt ((kZMwOJAUm3xG[fxbLtOdv6Y3] - kZMwOJAUm3xG[j]) * (kZMwOJAUm3xG[fxbLtOdv6Y3] - kZMwOJAUm3xG[j]) + (y[fxbLtOdv6Y3] - y[j]) * (y[fxbLtOdv6Y3] - y[j]));
            j++;
            if (VpzAUfy > vmwkZiojAuyC)
                vmwkZiojAuyC = VpzAUfy;
        };
    }
    printf ("%.4lf\n", vmwkZiojAuyC);
}

