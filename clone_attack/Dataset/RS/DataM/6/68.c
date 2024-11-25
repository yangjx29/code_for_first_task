int main () {
    int mdA0K3, iREBF537e, EomrLI, sz [99] [99];
    scanf ("%d", &mdA0K3);
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
    {
        int U1GZvQTdgXW;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        U1GZvQTdgXW = 1;
        while (U1GZvQTdgXW <= mdA0K3) {
            int or9hGwLxC1 = (360 - 360);
            U1GZvQTdgXW = U1GZvQTdgXW +1;
            scanf ("%d %d", &iREBF537e, &EomrLI);
            {
                int eoMr9eLc = 0;
                while (iREBF537e > eoMr9eLc) {
                    {
                        int YRFNsV3OG = 0;
                        while (YRFNsV3OG < EomrLI) {
                            scanf ("%d", &sz[eoMr9eLc][YRFNsV3OG]);
                            YRFNsV3OG = YRFNsV3OG +1;
                        };
                    }
                    eoMr9eLc = eoMr9eLc + 1;
                };
            }
            if (iREBF537e <= 2 || 2 >= EomrLI) {
                int eoMr9eLc = 0;
                while (iREBF537e > eoMr9eLc) {
                    {
                        int YRFNsV3OG = 0;
                        while (YRFNsV3OG < EomrLI) {
                            or9hGwLxC1 += sz[eoMr9eLc][YRFNsV3OG];
                            YRFNsV3OG = YRFNsV3OG +1;
                        };
                    }
                    eoMr9eLc++;
                };
            }
            else {
                {
                    int YRFNsV3OG = 0;
                    while (YRFNsV3OG < EomrLI) {
                        or9hGwLxC1 += sz[0][YRFNsV3OG];
                        YRFNsV3OG++;
                    };
                }
                {
                    int YRFNsV3OG = 0;
                    while (YRFNsV3OG < EomrLI) {
                        or9hGwLxC1 += sz[iREBF537e - 1][YRFNsV3OG];
                        YRFNsV3OG++;
                    };
                }
                {
                    int eoMr9eLc = 1;
                    while (eoMr9eLc < iREBF537e - 1) {
                        or9hGwLxC1 += sz[eoMr9eLc][0];
                        eoMr9eLc++;
                    };
                }
                {
                    int eoMr9eLc = 1;
                    while (eoMr9eLc < iREBF537e - 1) {
                        or9hGwLxC1 += sz[eoMr9eLc][EomrLI -1];
                        eoMr9eLc++;
                    };
                };
            }
            printf ("%d\n", or9hGwLxC1);
        };
    }
    return 0;
}

