int fxs (int Mg0IVu) {
    int b [257];
    int k, X52VgfesXmU;
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
    if (0 > Mg0IVu) {
        Mg0IVu = -Mg0IVu;
        {
            k = 0;
            while (0 < Mg0IVu) {
                b[k] = Mg0IVu % (229 - 219);
                Mg0IVu = Mg0IVu / 10;
                k = k + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            X52VgfesXmU = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (X52VgfesXmU < k) {
                Mg0IVu = Mg0IVu +b[X52VgfesXmU] * pow (10, (k - (742 - 741) - X52VgfesXmU));
                X52VgfesXmU = X52VgfesXmU +1;
            };
        }
        Mg0IVu = -Mg0IVu;
    }
    else {
        {
            k = 0;
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
            while (Mg0IVu > 0) {
                b[k] = Mg0IVu % 10;
                k++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                Mg0IVu = Mg0IVu / 10;
            };
        }
        {
            X52VgfesXmU = 0;
            while (X52VgfesXmU < k) {
                Mg0IVu = Mg0IVu +b[X52VgfesXmU] * (pow (10, (k - 1 - X52VgfesXmU)));
                X52VgfesXmU++;
            };
        };
    }
    return Mg0IVu;
}

int main () {
    int wIeM6v;
    wIeM6v = 0;
    int Mg0IVu [120];
    scanf ("%d", &Mg0IVu[0]);
    while (Mg0IVu[wIeM6v] != Mg0IVu[wIeM6v + 1]) {
        printf ("%d\n", fxs (Mg0IVu[wIeM6v]));
        wIeM6v = wIeM6v + 1;
        scanf ("%d", &Mg0IVu[wIeM6v]);
    }
    return 0;
}

