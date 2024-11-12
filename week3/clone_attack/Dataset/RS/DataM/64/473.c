int main () {
    int xJL03sOEo1;
    int pIYWbm;
    int fP4Lrp7XH19f;
    int y4uADkFGvtc;
    int NLhDukU3y9H;
    int s;
    int ygEybf;
    xJL03sOEo1 = (76 - 76);
    int lMecSAjktF [10];
    int HijQoHdp2R5X [10];
    int vV3bQig0Tv [10];
    float d [(124 - 24)];
    float gRrLOXswB7KQ;
    float x [(511 - 411)] [3];
    float y [100] [3];
    cin >> y4uADkFGvtc;
    {
        pIYWbm = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (pIYWbm < y4uADkFGvtc) {
            cin >> lMecSAjktF[pIYWbm] >> HijQoHdp2R5X[pIYWbm] >> vV3bQig0Tv[pIYWbm];
            pIYWbm++;
        };
    }
    {
        pIYWbm = 0;
        while (pIYWbm < y4uADkFGvtc - (314 - 313)) {
            {
                fP4Lrp7XH19f = 381 - 380;
                while (y4uADkFGvtc > fP4Lrp7XH19f) {
                    x[xJL03sOEo1][0] = lMecSAjktF[pIYWbm];
                    x[xJL03sOEo1][1] = HijQoHdp2R5X[pIYWbm];
                    x[xJL03sOEo1][(914 - 912)] = vV3bQig0Tv[pIYWbm];
                    y[xJL03sOEo1][0] = lMecSAjktF[fP4Lrp7XH19f];
                    y[xJL03sOEo1][1] = HijQoHdp2R5X[fP4Lrp7XH19f];
                    y[xJL03sOEo1][2] = vV3bQig0Tv[fP4Lrp7XH19f];
                    fP4Lrp7XH19f++;
                    d[xJL03sOEo1] = sqrt ((x[xJL03sOEo1][0] - y[xJL03sOEo1][0]) * (x[xJL03sOEo1][0] - y[xJL03sOEo1][0]) + (x[xJL03sOEo1][1] - y[xJL03sOEo1][1]) * (x[xJL03sOEo1][1] - y[xJL03sOEo1][1]) + (x[xJL03sOEo1][2] - y[xJL03sOEo1][2]) * (x[xJL03sOEo1][2] - y[xJL03sOEo1][2]));
                    xJL03sOEo1++;
                };
            }
            pIYWbm++;
        };
    }
    {
        fP4Lrp7XH19f = 0;
        while (fP4Lrp7XH19f < xJL03sOEo1 - 1) {
            {
                pIYWbm = 0;
                while (xJL03sOEo1 - 1 - fP4Lrp7XH19f > pIYWbm) {
                    if (d[pIYWbm + 1] > d[pIYWbm]) {
                        gRrLOXswB7KQ = d[pIYWbm];
                        d[pIYWbm] = d[pIYWbm + 1];
                        d[pIYWbm + 1] = gRrLOXswB7KQ;
                        {
                            NLhDukU3y9H = 0;
                            while (NLhDukU3y9H < 3) {
                                s = x[pIYWbm][NLhDukU3y9H];
                                x[pIYWbm][NLhDukU3y9H] = x[pIYWbm + 1][NLhDukU3y9H];
                                x[pIYWbm + 1][NLhDukU3y9H] = s;
                                ygEybf = y[pIYWbm][NLhDukU3y9H];
                                y[pIYWbm][NLhDukU3y9H] = y[pIYWbm + 1][NLhDukU3y9H];
                                y[pIYWbm + 1][NLhDukU3y9H] = ygEybf;
                                NLhDukU3y9H++;
                            };
                        };
                    }
                    pIYWbm++;
                };
            }
            fP4Lrp7XH19f++;
        };
    }
    {
        pIYWbm = 0;
        while (pIYWbm < xJL03sOEo1) {
            cout << fixed << setprecision (0) << "(" << x[pIYWbm][0] << "," << x[pIYWbm][1] << "," << x[pIYWbm][2] << ")-(" << y[pIYWbm][0] << "," << y[pIYWbm][1] << "," << y[pIYWbm][2] << ")=" << fixed << setprecision (2) << d[pIYWbm] << endl;
            pIYWbm++;
        };
    }
    return 0;
}

