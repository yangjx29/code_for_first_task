int main () {
    int r7rbVKD3ie [(392 - 192)];
    int OCdilY [100];
    int mJHAhms8R;
    char Zfp3nAh [100] [100];
    int pvduY3FWt5P7 [200] [200];
    int ysHV6RN9p = 0, p, OVHNfur, W3dBPvE7wSy;
    int roEdfbM [200];
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
    scanf ("%d", &mJHAhms8R);
    {
        OVHNfur = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (200 > OVHNfur) {
            r7rbVKD3ie[OVHNfur] = 0;
            roEdfbM[OVHNfur] = 0;
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
            OVHNfur = OVHNfur +1;
        };
    }
    {
        OVHNfur = 0;
        while (mJHAhms8R > OVHNfur) {
            scanf ("%d %s", &OCdilY[OVHNfur], Zfp3nAh[OVHNfur]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            OVHNfur = OVHNfur +1;
        };
    }
    for (OVHNfur = 0; OVHNfur < mJHAhms8R; OVHNfur++) {
        W3dBPvE7wSy = 0;
        while (!('\0' == (Zfp3nAh[OVHNfur][W3dBPvE7wSy]))) {
            r7rbVKD3ie[(Zfp3nAh[OVHNfur][W3dBPvE7wSy])] = r7rbVKD3ie[(Zfp3nAh[OVHNfur][W3dBPvE7wSy])] + 1;
            pvduY3FWt5P7[(Zfp3nAh[OVHNfur][W3dBPvE7wSy])][(roEdfbM[(Zfp3nAh[OVHNfur][W3dBPvE7wSy])])] = OCdilY[OVHNfur];
            roEdfbM[(Zfp3nAh[OVHNfur][W3dBPvE7wSy])] = roEdfbM[(Zfp3nAh[OVHNfur][W3dBPvE7wSy])] + 1;
            W3dBPvE7wSy = W3dBPvE7wSy +1;
        };
    }
    {
        OVHNfur = 65;
        while ((297 - 207) >= OVHNfur) {
            if (r7rbVKD3ie[OVHNfur] > ysHV6RN9p) {
                ysHV6RN9p = r7rbVKD3ie[OVHNfur];
                p = OVHNfur;
            }
            OVHNfur = OVHNfur +1;
        };
    }
    printf ("%c\n", p);
    printf ("%d\n", r7rbVKD3ie[p]);
    {
        OVHNfur = 0;
        while (OVHNfur < roEdfbM[p]) {
            printf ("%d\n", pvduY3FWt5P7[p][OVHNfur]);
            OVHNfur = OVHNfur +1;
        };
    }
    return 0;
}

