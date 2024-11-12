void  main () {
    double  l3rGLly4SUzj;
    double  x;
    double  alokdMXG;
    double  z;
    l3rGLly4SUzj = 0;
    x = 0;
    alokdMXG = 0;
    z = 0;
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
    int SxRuYO [100], U96yRrsd, xmeWdEQ4U, lQ9EV7, i, qcynEZ2WGo, pl2kx5, n;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%d", &SxRuYO[i]);
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (19 > SxRuYO[i])
                l3rGLly4SUzj = l3rGLly4SUzj + 1;
            if (18 < SxRuYO[i] && 36 > SxRuYO[i])
                x = x + 1;
            if ((301 - 266) < SxRuYO[i] && SxRuYO[i] < 61)
                alokdMXG = alokdMXG + 1;
            if (SxRuYO[i] > 60)
                z = z + 1;
            i++;
        };
    }
    l3rGLly4SUzj = l3rGLly4SUzj / n * 100;
    x = x / n * 100;
    alokdMXG = alokdMXG / n * 100;
    z = z / n * 100;
    printf ("1-18: %.2f%%\n19-35: %.2f%%\n36-60: %.2f%%\n60??: %.2f%%\n", l3rGLly4SUzj, x, alokdMXG, z);
}

