int main () {
    double  KaX7jG9 [100];
    double  Zpfxh40K [100] = {0};
    double  D7PXnh [100] = {0};
    double  TcfEtvwVk;
    double  t;
    double  j5yMgiPF;
    int naGZdI;
    int h1;
    int n;
    int i;
    int BJ6CGL;
    int ykVPQTvF;
    int EWMCTmKBk;
    int m;
    int agW6DQJ;
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
    int R015sSTZ;
    naGZdI = 0;
    h1 = 0;
    char VYdyh1 [100] [100];
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%s%lf", VYdyh1[i], &KaX7jG9[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (i = 0; n > i; i = i + 1) {
        for (BJ6CGL = 0; (50 - 49) >= BJ6CGL; BJ6CGL = BJ6CGL +1) {
            if (!('m' != VYdyh1[i][BJ6CGL])) {
                Zpfxh40K[naGZdI] = KaX7jG9[i];
                naGZdI++;
            };
        };
    }
    for (ykVPQTvF = 1; ykVPQTvF <= naGZdI; ykVPQTvF++) {
        for (EWMCTmKBk = 0; EWMCTmKBk < naGZdI - ykVPQTvF; EWMCTmKBk++) {
            if (Zpfxh40K[EWMCTmKBk] > Zpfxh40K[EWMCTmKBk +1]) {
                TcfEtvwVk = Zpfxh40K[EWMCTmKBk];
                Zpfxh40K[EWMCTmKBk] = Zpfxh40K[EWMCTmKBk +1];
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
                Zpfxh40K[EWMCTmKBk +1] = TcfEtvwVk;
            };
        };
    }
    for (i = 0; i < n; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (BJ6CGL = 0; 1 >= BJ6CGL; BJ6CGL++) {
            if (!('f' != VYdyh1[i][BJ6CGL])) {
                D7PXnh[h1] = KaX7jG9[i];
                h1 = h1 + 1;
            };
        };
    }
    for (BJ6CGL = 0; naGZdI > BJ6CGL; BJ6CGL++) {
        printf ("%.2lf ", Zpfxh40K[BJ6CGL]);
    }
    for (agW6DQJ = 1; agW6DQJ <= h1; agW6DQJ++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        for (R015sSTZ = 0; R015sSTZ < h1 - agW6DQJ; R015sSTZ++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (D7PXnh[R015sSTZ] < D7PXnh[R015sSTZ +1]) {
                t = D7PXnh[R015sSTZ];
                D7PXnh[R015sSTZ] = D7PXnh[R015sSTZ +1];
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
                D7PXnh[R015sSTZ +1] = t;
            };
        };
    }
    for (i = 0; i < h1 - 1; i++) {
        printf ("%.2lf ", D7PXnh[i]);
    }
    for (i = 0; i < h1; i++) {
        if (i == h1 - 1) {
            printf ("%.2lf", D7PXnh[i]);
        };
    }
    return 0;
}

