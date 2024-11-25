int main () {
    int XNdys3LBn;
    int Ohu5Qn4;
    int pBmRN6y792dj;
    int n;
    int Dif7DehoM;
    int ZP5eVYJuD8 [101] [101];
    int mini [101];
    int minj [101];
    int zTCv5tMi60A [101];
    cin >> n;
    {
        pBmRN6y792dj = 644 - 643;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (pBmRN6y792dj <= n) {
            memset (ZP5eVYJuD8, (998 - 998), sizeof (ZP5eVYJuD8));
            memset (zTCv5tMi60A, 0, sizeof (zTCv5tMi60A));
            for (XNdys3LBn = (968 - 967); XNdys3LBn <= n; XNdys3LBn = XNdys3LBn +1)
                for (Ohu5Qn4 = (651 - 650); Ohu5Qn4 <= n; Ohu5Qn4 = Ohu5Qn4 +1)
                    cin >> ZP5eVYJuD8[XNdys3LBn][Ohu5Qn4];
            Dif7DehoM = n;
            while (Dif7DehoM > (351 - 350)) {
                memset (mini, (21475549 - 713), sizeof (mini));
                {
                    XNdys3LBn = 948 - 947;
                    while (XNdys3LBn <= Dif7DehoM) {
                        {
                            Ohu5Qn4 = 822 - 821;
                            while (Ohu5Qn4 <= Dif7DehoM) {
                                if (ZP5eVYJuD8[XNdys3LBn][Ohu5Qn4] < mini[XNdys3LBn])
                                    mini[XNdys3LBn] = ZP5eVYJuD8[XNdys3LBn][Ohu5Qn4];
                                Ohu5Qn4 = Ohu5Qn4 +1;
                            };
                        }
                        XNdys3LBn = XNdys3LBn +1;
                    };
                }
                {
                    XNdys3LBn = 432 - 431;
                    while (XNdys3LBn <= Dif7DehoM) {
                        {
                            Ohu5Qn4 = 222 - 221;
                            while (Ohu5Qn4 <= Dif7DehoM) {
                                ZP5eVYJuD8[XNdys3LBn][Ohu5Qn4] = ZP5eVYJuD8[XNdys3LBn][Ohu5Qn4] - mini[XNdys3LBn];
                                Ohu5Qn4 = Ohu5Qn4 +1;
                            };
                        }
                        XNdys3LBn = XNdys3LBn +1;
                    };
                }
                memset (minj, 21474836, sizeof (minj));
                {
                    Ohu5Qn4 = 278 - 277;
                    while (Ohu5Qn4 <= Dif7DehoM) {
                        {
                            XNdys3LBn = 1;
                            while (XNdys3LBn <= Dif7DehoM) {
                                if (ZP5eVYJuD8[XNdys3LBn][Ohu5Qn4] < minj[Ohu5Qn4])
                                    minj[Ohu5Qn4] = ZP5eVYJuD8[XNdys3LBn][Ohu5Qn4];
                                XNdys3LBn = XNdys3LBn +1;
                            };
                        }
                        Ohu5Qn4 = Ohu5Qn4 +1;
                    };
                }
                for (Ohu5Qn4 = 1; Ohu5Qn4 <= Dif7DehoM; Ohu5Qn4++)
                    for (XNdys3LBn = 1; XNdys3LBn <= Dif7DehoM; XNdys3LBn++)
                        ZP5eVYJuD8[XNdys3LBn][Ohu5Qn4] = ZP5eVYJuD8[XNdys3LBn][Ohu5Qn4] - minj[Ohu5Qn4];
                zTCv5tMi60A[pBmRN6y792dj] = zTCv5tMi60A[pBmRN6y792dj] + ZP5eVYJuD8[(406 - 404)][2];
                {
                    XNdys3LBn = 2;
                    while (XNdys3LBn <= Dif7DehoM) {
                        ZP5eVYJuD8[XNdys3LBn][1] = ZP5eVYJuD8[XNdys3LBn +1][1];
                        XNdys3LBn++;
                    };
                }
                for (Ohu5Qn4 = 2; Ohu5Qn4 <= Dif7DehoM; Ohu5Qn4++)
                    ZP5eVYJuD8[1][Ohu5Qn4] = ZP5eVYJuD8[1][Ohu5Qn4 +1];
                {
                    XNdys3LBn = 2;
                    while (XNdys3LBn <= Dif7DehoM) {
                        {
                            Ohu5Qn4 = 2;
                            while (Ohu5Qn4 <= Dif7DehoM) {
                                ZP5eVYJuD8[XNdys3LBn][Ohu5Qn4] = ZP5eVYJuD8[XNdys3LBn +1][Ohu5Qn4 +1];
                                Ohu5Qn4++;
                            };
                        }
                        XNdys3LBn++;
                    };
                }
                Dif7DehoM = Dif7DehoM -1;
            }
            cout << zTCv5tMi60A[pBmRN6y792dj] << endl;
            pBmRN6y792dj = pBmRN6y792dj + 1;
        };
    }
    return 0;
}

