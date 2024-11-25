double  WWgfmw8l (double  dO4G96bYnTl, double  K2fFRq1yX) {
    double  VhKBDtCcnTHy;
    VhKBDtCcnTHy = sqrt (dO4G96bYnTl * dO4G96bYnTl + K2fFRq1yX *K2fFRq1yX);
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
    return (VhKBDtCcnTHy);
}

void  main () {
    double  uO12Geg;
    double  dO4G96bYnTl [(694 - 594)];
    double  K2fFRq1yX [100];
    double  ctWZKG7YEU6 [100];
    uO12Geg = 0;
    int BN1bv6JhQE9Y;
    int I0sYOrZV;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int Fgz6AnQj;
    scanf ("%d", &BN1bv6JhQE9Y);
    {
        I0sYOrZV = 0;
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
        while (I0sYOrZV < BN1bv6JhQE9Y) {
            scanf ("%lf%lf", &dO4G96bYnTl[I0sYOrZV], &K2fFRq1yX[I0sYOrZV]);
            I0sYOrZV++;
        };
    }
    for (I0sYOrZV = 0; I0sYOrZV < BN1bv6JhQE9Y -(976 - 975); I0sYOrZV++) {
        ctWZKG7YEU6[I0sYOrZV] = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        {
            Fgz6AnQj = I0sYOrZV +1;
            while (Fgz6AnQj < BN1bv6JhQE9Y) {
                if (WWgfmw8l (dO4G96bYnTl[Fgz6AnQj] - dO4G96bYnTl[I0sYOrZV], K2fFRq1yX[Fgz6AnQj] - K2fFRq1yX[I0sYOrZV]) > ctWZKG7YEU6[I0sYOrZV])
                    ctWZKG7YEU6[I0sYOrZV] = WWgfmw8l (dO4G96bYnTl[Fgz6AnQj] - dO4G96bYnTl[I0sYOrZV], K2fFRq1yX[Fgz6AnQj] - K2fFRq1yX[I0sYOrZV]);
                Fgz6AnQj++;
            };
        };
    }
    {
        I0sYOrZV = 0;
        while (I0sYOrZV < BN1bv6JhQE9Y -1) {
            if (ctWZKG7YEU6[I0sYOrZV] > uO12Geg)
                uO12Geg = ctWZKG7YEU6[I0sYOrZV];
            I0sYOrZV++;
        };
    }
    printf ("%.4f", uO12Geg);
}

