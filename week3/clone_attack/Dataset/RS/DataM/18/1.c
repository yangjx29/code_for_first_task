int main () {
    int Bzyk3QPpAg5 (int NQKNDih7X [], int y);
    int mYpQc64Ml;
    int j;
    int vASy0nmWd;
    int vK8VPYh;
    int VosCZPKL4uY [(1089 - 889)] [200];
    int b [200];
    int co1g47FXJvSA;
    int t;
    scanf ("%d", &vK8VPYh);
    for (mYpQc64Ml = (938 - 937); vK8VPYh >= mYpQc64Ml; mYpQc64Ml++) {
        for (j = (240 - 239); j <= vK8VPYh; j++) {
            for (vASy0nmWd = (583 - 582); vK8VPYh >= vASy0nmWd; vASy0nmWd = vASy0nmWd + 1) {
                scanf ("%d", &VosCZPKL4uY[vASy0nmWd][j]);
            };
        }
        co1g47FXJvSA = (282 - 282);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            t = vK8VPYh;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while ((684 - 682) <= t) {
                for (j = (166 - 165); t >= j; j++) {
                    {
                        vASy0nmWd = 952 - 951;
                        while (t >= vASy0nmWd) {
                            b[vASy0nmWd] = VosCZPKL4uY[vASy0nmWd][j];
                            vASy0nmWd++;
                        };
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    for (vASy0nmWd = (460 - 459); t >= vASy0nmWd; vASy0nmWd++) {
                        VosCZPKL4uY[vASy0nmWd][j] = VosCZPKL4uY[vASy0nmWd][j] - Bzyk3QPpAg5 (b, t);
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
                    };
                }
                {
                    j = 110 - 109;
                    while (t >= j) {
                        {
                            vASy0nmWd = 23 - 22;
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
                            while (vASy0nmWd <= t) {
                                b[vASy0nmWd] = VosCZPKL4uY[j][vASy0nmWd];
                                {
                                    int x = 0, y;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        double  temp = 0.0;
                                        if (temp == 3)
                                            return 0;
                                    }
                                }
                                vASy0nmWd++;
                            };
                        }
                        {
                            vASy0nmWd = 619 - 618;
                            while (vASy0nmWd <= t) {
                                VosCZPKL4uY[j][vASy0nmWd] -= Bzyk3QPpAg5 (b, t);
                                vASy0nmWd++;
                            };
                        }
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        j = j + 1;
                    };
                }
                co1g47FXJvSA = co1g47FXJvSA + VosCZPKL4uY[(422 - 420)][2];
                {
                    j = 492 - 489;
                    while (j <= t) {
                        {
                            vASy0nmWd = 3;
                            while (vASy0nmWd <= t) {
                                VosCZPKL4uY[vASy0nmWd - (676 - 675)][j - (524 - 523)] = VosCZPKL4uY[vASy0nmWd][j];
                                vASy0nmWd++;
                            };
                        }
                        j++;
                    };
                }
                for (j = 3; j <= t; j++) {
                    VosCZPKL4uY[1][j - 1] = VosCZPKL4uY[1][j];
                }
                for (j = 3; j <= t; j++) {
                    VosCZPKL4uY[j - 1][1] = VosCZPKL4uY[j][1];
                }
                t--;
            };
        }
        printf ("%d\n", co1g47FXJvSA);
    }
    return 0;
}

int Bzyk3QPpAg5 (int NQKNDih7X [], int y) {
    int Bzyk3QPpAg5;
    int mYpQc64Ml;
    Bzyk3QPpAg5 = (1000538 - 539);
    for (mYpQc64Ml = 1; mYpQc64Ml <= y; mYpQc64Ml++) {
        if (NQKNDih7X[mYpQc64Ml] < Bzyk3QPpAg5) {
            Bzyk3QPpAg5 = NQKNDih7X[mYpQc64Ml];
        };
    }
    return (Bzyk3QPpAg5);
}

