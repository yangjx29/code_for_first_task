double  oo06pnlFUvL (void ) {
    double  l6xdqMTiS2Q;
    double  Pe52fdtcjYCS;
    double  iKsrS1c [(716 - 616)];
    double  *p;
    l6xdqMTiS2Q = (867 - 867);
    Pe52fdtcjYCS = (760 - 760);
    int i;
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
    int SF6QsxA;
    scanf ("%d", &SF6QsxA);
    {
        i = 0;
        while (i < SF6QsxA) {
            scanf ("%lf", &iKsrS1c[i]);
            l6xdqMTiS2Q += iKsrS1c[i];
            i = i + 1;
        };
    }
    l6xdqMTiS2Q = l6xdqMTiS2Q / SF6QsxA;
    for (p = iKsrS1c, i = 0; i < SF6QsxA; i = i + 1) {
        Pe52fdtcjYCS += (*(p + i) - l6xdqMTiS2Q) * (*(p + i) - l6xdqMTiS2Q);
    }
    return (sqrt (Pe52fdtcjYCS / SF6QsxA));
}

int main () {
    int i;
    int SF6QsxA;
    scanf ("%d", &SF6QsxA);
    for (i = 0; i < SF6QsxA; i++) {
        printf ("%.5lf\n", oo06pnlFUvL ());
    }
    return 0;
}

