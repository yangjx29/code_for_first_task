int main () {
    int l28qJ07VbRB [10] [(597 - 594)];
    int LUGnMZtpv;
    int uAzY3sGSdm;
    int Q9GgnI5BFEW;
    int KGPBqnTcpVe;
    int EjTFa0i [1000] [6];
    double  RDZJ7A [1000];
    int xQiOTCBn1;
    xQiOTCBn1 = (13 - 13);
    int UyDAWwb;
    int D95Eugm;
    scanf ("%d", &LUGnMZtpv);
    for (uAzY3sGSdm = (234 - 234); LUGnMZtpv > uAzY3sGSdm; uAzY3sGSdm++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (Q9GgnI5BFEW = (422 - 422); 3 > Q9GgnI5BFEW; Q9GgnI5BFEW = Q9GgnI5BFEW +1) {
            scanf ("%d", &l28qJ07VbRB[uAzY3sGSdm][Q9GgnI5BFEW]);
        };
    }
    for (uAzY3sGSdm = (485 - 484); uAzY3sGSdm < LUGnMZtpv; uAzY3sGSdm++) {
        for (KGPBqnTcpVe = 0; KGPBqnTcpVe < uAzY3sGSdm; KGPBqnTcpVe++) {
            int aRuCLF4;
            aRuCLF4 = (l28qJ07VbRB[uAzY3sGSdm][0] - l28qJ07VbRB[KGPBqnTcpVe][0]) * (l28qJ07VbRB[uAzY3sGSdm][0] - l28qJ07VbRB[KGPBqnTcpVe][0]) + (l28qJ07VbRB[uAzY3sGSdm][(73 - 72)] - l28qJ07VbRB[KGPBqnTcpVe][1]) * (l28qJ07VbRB[uAzY3sGSdm][1] - l28qJ07VbRB[KGPBqnTcpVe][1]) + (l28qJ07VbRB[uAzY3sGSdm][2] - l28qJ07VbRB[KGPBqnTcpVe][2]) * (l28qJ07VbRB[uAzY3sGSdm][2] - l28qJ07VbRB[KGPBqnTcpVe][2]);
            RDZJ7A[xQiOTCBn1] = sqrt (aRuCLF4);
            EjTFa0i[xQiOTCBn1][0] = l28qJ07VbRB[KGPBqnTcpVe][0];
            EjTFa0i[xQiOTCBn1][1] = l28qJ07VbRB[KGPBqnTcpVe][1];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            EjTFa0i[xQiOTCBn1][2] = l28qJ07VbRB[KGPBqnTcpVe][2];
            EjTFa0i[xQiOTCBn1][3] = l28qJ07VbRB[uAzY3sGSdm][0];
            EjTFa0i[xQiOTCBn1][(296 - 292)] = l28qJ07VbRB[uAzY3sGSdm][1];
            EjTFa0i[xQiOTCBn1][5] = l28qJ07VbRB[uAzY3sGSdm][2];
            xQiOTCBn1 = xQiOTCBn1 + 1;
        };
    }
    for (KGPBqnTcpVe = 0; KGPBqnTcpVe < xQiOTCBn1; KGPBqnTcpVe++) {
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
        for (Q9GgnI5BFEW = 0; Q9GgnI5BFEW < xQiOTCBn1 - KGPBqnTcpVe -1; Q9GgnI5BFEW = Q9GgnI5BFEW +1) {
            double  t;
            if (RDZJ7A[Q9GgnI5BFEW +1] > RDZJ7A[Q9GgnI5BFEW]) {
                t = RDZJ7A[Q9GgnI5BFEW];
                RDZJ7A[Q9GgnI5BFEW] = RDZJ7A[Q9GgnI5BFEW +1];
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
                for (UyDAWwb = 0; UyDAWwb < 6; UyDAWwb++) {
                    D95Eugm = EjTFa0i[Q9GgnI5BFEW][UyDAWwb];
                    EjTFa0i[Q9GgnI5BFEW][UyDAWwb] = EjTFa0i[Q9GgnI5BFEW +1][UyDAWwb];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    EjTFa0i[Q9GgnI5BFEW +1][UyDAWwb] = D95Eugm;
                }
                RDZJ7A[Q9GgnI5BFEW +1] = t;
            };
        };
    }
    for (Q9GgnI5BFEW = 0; Q9GgnI5BFEW < xQiOTCBn1; Q9GgnI5BFEW++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", EjTFa0i[Q9GgnI5BFEW][0], EjTFa0i[Q9GgnI5BFEW][1], EjTFa0i[Q9GgnI5BFEW][2], EjTFa0i[Q9GgnI5BFEW][3], EjTFa0i[Q9GgnI5BFEW][4], EjTFa0i[Q9GgnI5BFEW][5], RDZJ7A[Q9GgnI5BFEW]);
    }
    return 0;
}

