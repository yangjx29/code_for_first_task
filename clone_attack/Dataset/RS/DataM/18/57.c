int main () {
    int nYoASbqZ6G0;
    int YSsNR4b2;
    int zoNx0p;
    int bfSJZ3;
    int zWXJw4sT0R1S;
    int VEu8oNwZOk;
    int qhvOTrKWlos;
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
    int a [101] [101];
    scanf ("%d", &zWXJw4sT0R1S);
    for (bfSJZ3 = 0; bfSJZ3 < zWXJw4sT0R1S; bfSJZ3++) {
        VEu8oNwZOk = 0;
        for (nYoASbqZ6G0 = 0; nYoASbqZ6G0 < zWXJw4sT0R1S; nYoASbqZ6G0 = nYoASbqZ6G0 + 1)
            for (YSsNR4b2 = 0; YSsNR4b2 < zWXJw4sT0R1S; YSsNR4b2++)
                scanf ("%d", &a[nYoASbqZ6G0][YSsNR4b2]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (zoNx0p = zWXJw4sT0R1S; zoNx0p > 1; zoNx0p = zoNx0p - 1) {
            for (nYoASbqZ6G0 = 0; zoNx0p > nYoASbqZ6G0; nYoASbqZ6G0 = nYoASbqZ6G0 + 1) {
                qhvOTrKWlos = a[nYoASbqZ6G0][0];
                {
                    YSsNR4b2 = 0;
                    while (zoNx0p > YSsNR4b2) {
                        if (a[nYoASbqZ6G0][YSsNR4b2] < qhvOTrKWlos)
                            qhvOTrKWlos = a[nYoASbqZ6G0][YSsNR4b2];
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
                        YSsNR4b2 = YSsNR4b2 +1;
                    };
                }
                for (YSsNR4b2 = 0; YSsNR4b2 < zoNx0p; YSsNR4b2++)
                    a[nYoASbqZ6G0][YSsNR4b2] = a[nYoASbqZ6G0][YSsNR4b2] - qhvOTrKWlos;
            }
            {
                YSsNR4b2 = 0;
                while (YSsNR4b2 < zoNx0p) {
                    qhvOTrKWlos = a[0][YSsNR4b2];
                    for (nYoASbqZ6G0 = 0; nYoASbqZ6G0 < zoNx0p; nYoASbqZ6G0 = nYoASbqZ6G0 + 1) {
                        if (a[nYoASbqZ6G0][YSsNR4b2] < qhvOTrKWlos)
                            qhvOTrKWlos = a[nYoASbqZ6G0][YSsNR4b2];
                    }
                    for (nYoASbqZ6G0 = 0; nYoASbqZ6G0 < zoNx0p; nYoASbqZ6G0++)
                        a[nYoASbqZ6G0][YSsNR4b2] = a[nYoASbqZ6G0][YSsNR4b2] - qhvOTrKWlos;
                    YSsNR4b2++;
                };
            }
            VEu8oNwZOk = VEu8oNwZOk +a[1][1];
            for (nYoASbqZ6G0 = 2; nYoASbqZ6G0 < zoNx0p; nYoASbqZ6G0++)
                for (YSsNR4b2 = 0; YSsNR4b2 < zoNx0p; YSsNR4b2++)
                    a[nYoASbqZ6G0 - 1][YSsNR4b2] = a[nYoASbqZ6G0][YSsNR4b2];
            for (YSsNR4b2 = 2; YSsNR4b2 < zoNx0p; YSsNR4b2++)
                for (nYoASbqZ6G0 = 0; nYoASbqZ6G0 < zoNx0p - 1; nYoASbqZ6G0++)
                    a[nYoASbqZ6G0][YSsNR4b2 -1] = a[nYoASbqZ6G0][YSsNR4b2];
        }
        printf ("%d\n", VEu8oNwZOk);
    }
    return 0;
}

