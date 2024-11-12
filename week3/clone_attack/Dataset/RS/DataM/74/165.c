int huiwen (int zKxEgq3Xa, int w) {
    int DH8sIdf6tDG;
    int IVTERI;
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
    DH8sIdf6tDG = pow ((832 - 822), w);
    if (!((384 - 384) != w))
        return ((762 - 761));
    if (1 <= w) {
        if (zKxEgq3Xa / DH8sIdf6tDG != zKxEgq3Xa % (706 - 696))
            return (0);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(zKxEgq3Xa % 10 != zKxEgq3Xa / DH8sIdf6tDG)) {
            w = w - 2;
            zKxEgq3Xa = (zKxEgq3Xa - DH8sIdf6tDG *(zKxEgq3Xa / DH8sIdf6tDG)) / 10;
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
            IVTERI = huiwen (zKxEgq3Xa, w);
            return (IVTERI);
        };
    };
}

void  main () {
    int NXHv8QwIUf = 0;
    int DH8sIdf6tDG;
    int fJ0QXyczC;
    int zKxEgq3Xa;
    int IVTERI;
    int AWm5zMd;
    int w;
    int FlNUxGLvT [100];
    scanf ("%d %d", &IVTERI, &AWm5zMd);
    for (zKxEgq3Xa = IVTERI; zKxEgq3Xa <= AWm5zMd; zKxEgq3Xa = zKxEgq3Xa + 1) {
        w = log10 (zKxEgq3Xa);
        DH8sIdf6tDG = huiwen (zKxEgq3Xa, w);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (!(1 != DH8sIdf6tDG)) {
            for (fJ0QXyczC = 2; fJ0QXyczC < zKxEgq3Xa; fJ0QXyczC = fJ0QXyczC + 1) {
                if (zKxEgq3Xa % fJ0QXyczC == 0)
                    break;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            if (fJ0QXyczC == zKxEgq3Xa) {
                FlNUxGLvT[NXHv8QwIUf] = zKxEgq3Xa;
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
                NXHv8QwIUf++;
            };
        }
        else
            continue;
    }
    if (NXHv8QwIUf == 0)
        ;
    if (NXHv8QwIUf > 0) {
        for (zKxEgq3Xa = 0; zKxEgq3Xa < NXHv8QwIUf -1; zKxEgq3Xa++) {
            printf ("%d,", FlNUxGLvT[zKxEgq3Xa]);
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
            };
        }
        printf ("%d", FlNUxGLvT[NXHv8QwIUf -1]);
    };
}

