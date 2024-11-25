int main () {
    int eoK0ATu;
    int OBx2SAC;
    int MAh92ZxXNWs;
    int WoxMqKL;
    int jAzlRYFu7M;
    int W9wRV2CGv [100] [100];
    int mKHXkh;
    int HepY1i84ECD [100];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &OBx2SAC);
    for (eoK0ATu = (355 - 355); eoK0ATu < OBx2SAC; eoK0ATu = eoK0ATu + 1) {
        HepY1i84ECD[eoK0ATu] = (444 - 444);
    }
    for (eoK0ATu = 0; eoK0ATu < OBx2SAC; eoK0ATu = eoK0ATu + 1) {
        scanf ("%d %d", &jAzlRYFu7M, &mKHXkh);
        {
            MAh92ZxXNWs = 0;
            while (jAzlRYFu7M > MAh92ZxXNWs) {
                {
                    WoxMqKL = 0;
                    while (WoxMqKL < mKHXkh) {
                        scanf ("%d", &W9wRV2CGv[MAh92ZxXNWs][WoxMqKL]);
                        WoxMqKL++;
                    };
                }
                MAh92ZxXNWs++;
            };
        }
        if (jAzlRYFu7M == 1 && mKHXkh == 1) {
            HepY1i84ECD[eoK0ATu] = HepY1i84ECD[eoK0ATu] + W9wRV2CGv[0][0];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            };
        }
        else {
            for (WoxMqKL = 0; WoxMqKL < mKHXkh; WoxMqKL++) {
                HepY1i84ECD[eoK0ATu] = HepY1i84ECD[eoK0ATu] + W9wRV2CGv[0][WoxMqKL] + W9wRV2CGv[jAzlRYFu7M - 1][WoxMqKL];
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
            for (MAh92ZxXNWs = 1; MAh92ZxXNWs < (jAzlRYFu7M - 1); MAh92ZxXNWs++) {
                HepY1i84ECD[eoK0ATu] = HepY1i84ECD[eoK0ATu] + W9wRV2CGv[MAh92ZxXNWs][0] + W9wRV2CGv[MAh92ZxXNWs][mKHXkh - 1];
            };
        };
    }
    {
        eoK0ATu = 0;
        while (eoK0ATu < OBx2SAC) {
            printf ("%d\n", HepY1i84ECD[eoK0ATu]);
            eoK0ATu++;
        };
    }
    scanf ("%d", &OBx2SAC);
    return 0;
}

