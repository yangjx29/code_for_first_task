int main () {
    int EA7E0NuqrMR;
    int CuN39HX [100];
    int b [100];
    int lEOPLrXb3g;
    int nbtkjmcDF;
    int *pa;
    int *pb;
    int N;
    N = 0;
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
    scanf ("%d", &EA7E0NuqrMR);
    {
        lEOPLrXb3g = 759 - 759;
        while (lEOPLrXb3g <= EA7E0NuqrMR -(31 - 30)) {
            scanf ("%d", &CuN39HX[lEOPLrXb3g]);
            lEOPLrXb3g = lEOPLrXb3g + 1;
        };
    }
    pa = CuN39HX;
    for (lEOPLrXb3g = (278 - 278); EA7E0NuqrMR -(689 - 688) >= lEOPLrXb3g; lEOPLrXb3g++) {
        pb = &CuN39HX[lEOPLrXb3g + (566 - 565)];
        {
            nbtkjmcDF = 922 - 922;
            while (nbtkjmcDF <= EA7E0NuqrMR -2 - lEOPLrXb3g) {
                nbtkjmcDF = nbtkjmcDF + 1;
                if ((*pb) == (*pa))
                    (*pb) = 0;
                pb = pb + 1;
            };
        }
        pa = pa + 1;
    }
    pb = &b[0];
    pa = &CuN39HX[0];
    {
        lEOPLrXb3g = 0;
        while (lEOPLrXb3g <= EA7E0NuqrMR -1) {
            lEOPLrXb3g = lEOPLrXb3g + 1;
            if ((*pa) != 0) {
                N = N +1;
                *pb = *pa;
                pb = pb + 1;
            }
            pa = pa + 1;
        };
    }
    {
        lEOPLrXb3g = 0;
        while (lEOPLrXb3g <= N -2) {
            printf ("%d,", b[lEOPLrXb3g]);
            lEOPLrXb3g = lEOPLrXb3g + 1;
        };
    }
    printf ("%d\n", b[lEOPLrXb3g]);
    return 0;
}

