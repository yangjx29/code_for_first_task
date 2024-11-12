int main () {
    char K0DqoKbkzMt [4] = {'z', 'q', 's', 'l'};
    int LB2IwoOKaz7, q, YAh1Zko, tRQ4A1, Bu9Ijizw3, i, j4aY0QE9uRBK;
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
        LB2IwoOKaz7 = 325 - 324;
        while (5 >= LB2IwoOKaz7) {
            for (q = 1; q <= 5; q = q + 1) {
                YAh1Zko = 1;
                while (YAh1Zko <= 5) {
                    for (tRQ4A1 = 1; 5 >= tRQ4A1; tRQ4A1 = tRQ4A1 + 1) {
                        if ((!(YAh1Zko +tRQ4A1 != LB2IwoOKaz7 +q)) && (LB2IwoOKaz7 +tRQ4A1 > YAh1Zko +q) && (LB2IwoOKaz7 +YAh1Zko < q)) {
                            int CybQXf [4] = {LB2IwoOKaz7, q, YAh1Zko, tRQ4A1};
                            {
                                j4aY0QE9uRBK = 2;
                                while (j4aY0QE9uRBK <= 4) {
                                    {
                                        i = 0;
                                        while (i <= 4 - j4aY0QE9uRBK) {
                                            if (CybQXf[i] < CybQXf[i + 1]) {
                                                Bu9Ijizw3 = CybQXf[i];
                                                CybQXf[i] = CybQXf[i + 1];
                                                CybQXf[i + 1] = Bu9Ijizw3;
                                                Bu9Ijizw3 = K0DqoKbkzMt[i];
                                                K0DqoKbkzMt[i] = K0DqoKbkzMt[i + 1];
                                                K0DqoKbkzMt[i + 1] = Bu9Ijizw3;
                                            }
                                            i++;
                                        };
                                    }
                                    j4aY0QE9uRBK++;
                                };
                            }
                            for (i = 0; i <= 3; i++) {
                                cout << K0DqoKbkzMt[i] << " " << 10 * CybQXf[i] << endl;
                            };
                        };
                    }
                    YAh1Zko++;
                };
            }
            LB2IwoOKaz7 = LB2IwoOKaz7 +1;
        };
    }
    return 0;
}

