int main () {
    int xGxmPco20;
    int j;
    int GT0mhOb7YZei [100];
    int IUMKiG;
    int LNDcFi;
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
    int pg3A5Rf (int, int);
    scanf ("%d", &IUMKiG);
    {
        xGxmPco20 = 1;
        while (IUMKiG >= xGxmPco20) {
            scanf ("%d", &GT0mhOb7YZei[xGxmPco20]);
            xGxmPco20 = xGxmPco20 + 1;
        };
    }
    {
        xGxmPco20 = 1;
        while (xGxmPco20 <= IUMKiG) {
            printf ("%d\n", pg3A5Rf (2, GT0mhOb7YZei[xGxmPco20]));
            xGxmPco20 = xGxmPco20 + 1;
        };
    }
    return 0;
}

int pg3A5Rf (int jPG1QT5, int IUMKiG) {
    int es2GPMtCLx0;
    int yBRqShLU6I;
    int xGxmPco20;
    es2GPMtCLx0 = 1;
    if (!(2 != IUMKiG))
        return (es2GPMtCLx0);
    else {
        if (IUMKiG == (92 - 89))
            return (es2GPMtCLx0);
        else {
            yBRqShLU6I = (int) sqrt (IUMKiG);
            for (xGxmPco20 = jPG1QT5; xGxmPco20 <= yBRqShLU6I; xGxmPco20 = xGxmPco20 + 1)
                if (IUMKiG % xGxmPco20 == 0)
                    es2GPMtCLx0 = es2GPMtCLx0 + pg3A5Rf (xGxmPco20, IUMKiG / xGxmPco20);
            return (es2GPMtCLx0);
        };
    };
}

