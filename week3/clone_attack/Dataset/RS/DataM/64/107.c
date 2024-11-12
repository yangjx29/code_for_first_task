int main () {
    int n, pTDFhEHiqt7g = 0;
    double  j [100];
    double  G4KYWZp5eFO;
    int opjI7wa [100];
    int y [100];
    int z [100];
    int pom9PSwr6 [100];
    int y1 [100];
    int RzuUXNEsxV [100];
    int zmVko0 [100];
    int WcQayfM1F [100];
    int yYg7nGNb [100];
    scanf ("%d", &n);
    {
        int b = 0;
        while (n > b) {
            scanf ("%d%d%d", &opjI7wa[b], &y[b], &z[b]);
            b = b + 1;
        };
    }
    for (int p = 0;
    n > p; p = p + 1) {
        for (int l = p + 1;
        n > l; l++) {
            G4KYWZp5eFO = ((opjI7wa[p] - opjI7wa[l]) * (opjI7wa[p] - opjI7wa[l]) + (y[p] - y[l]) * (y[p] - y[l]) + (z[p] - z[l]) * (z[p] - z[l])) * 1.0;
            j[pTDFhEHiqt7g] = sqrt (G4KYWZp5eFO);
            pom9PSwr6[pTDFhEHiqt7g] = opjI7wa[p];
            y1[pTDFhEHiqt7g] = y[p];
            RzuUXNEsxV[pTDFhEHiqt7g] = z[p];
            zmVko0[pTDFhEHiqt7g] = opjI7wa[l];
            WcQayfM1F[pTDFhEHiqt7g] = y[l];
            yYg7nGNb[pTDFhEHiqt7g] = z[l];
            pTDFhEHiqt7g++;
        };
    }
    for (int a = 1;
    n * (n - 1) / 2 >= a; a = a + 1) {
        double  e;
        for (int i = 0;
        i < n * (n - 1) / 2 - a; i = i + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (j[i + 1] > j[i]) {
                int Bp2C4AqaOc;
                e = j[i + 1];
                j[i + 1] = j[i];
                j[i] = e;
                Bp2C4AqaOc = pom9PSwr6[i + 1];
                pom9PSwr6[i + 1] = pom9PSwr6[i];
                pom9PSwr6[i] = Bp2C4AqaOc;
                Bp2C4AqaOc = y1[i + 1];
                y1[i + 1] = y1[i];
                y1[i] = Bp2C4AqaOc;
                Bp2C4AqaOc = RzuUXNEsxV[i + 1];
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
                RzuUXNEsxV[i + 1] = RzuUXNEsxV[i];
                RzuUXNEsxV[i] = Bp2C4AqaOc;
                Bp2C4AqaOc = zmVko0[i + 1];
                zmVko0[i + 1] = zmVko0[i];
                zmVko0[i] = Bp2C4AqaOc;
                Bp2C4AqaOc = WcQayfM1F[i + 1];
                WcQayfM1F[i + 1] = WcQayfM1F[i];
                WcQayfM1F[i] = Bp2C4AqaOc;
                Bp2C4AqaOc = yYg7nGNb[i + 1];
                yYg7nGNb[i + 1] = yYg7nGNb[i];
                yYg7nGNb[i] = Bp2C4AqaOc;
            };
        };
    }
    {
        int i = 0;
        while (i < n * (n - 1) / 2) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", pom9PSwr6[i], y1[i], RzuUXNEsxV[i], zmVko0[i], WcQayfM1F[i], yYg7nGNb[i], j[i]);
            i = i + 1;
        };
    }
    return 0;
}

