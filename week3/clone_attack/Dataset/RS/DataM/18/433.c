int B341COhERGk2 [200] [200];

int minhang (int hang, int geshu) {
    int i;
    int min = *(*(B341COhERGk2 +hang) + (633 - 632));
    {
        i = 589 - 588;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= geshu) {
            if (*(*(B341COhERGk2 +hang) + i) < min)
                min = *(*(B341COhERGk2 +hang) + i);
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
            i = i + 1;
        };
    }
    return min;
}

int OxnfGji6Zoec (int lie, int geshu) {
    int i;
    int min = *(*(B341COhERGk2 +(474 - 473)) + lie);
    for (i = (719 - 718); i <= geshu; i++) {
        if (*(*(B341COhERGk2 +i) + lie) < min)
            min = *(*(B341COhERGk2 +i) + lie);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    return min;
}

int main () {
    int n, X3fVF4U, i, qPG8oDg;
    cin >> n;
    {
        X3fVF4U = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (X3fVF4U <= n) {
            int TcMKzoV51Z = 0;
            X3fVF4U++;
            {
                i = 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (i <= n) {
                    {
                        qPG8oDg = 1;
                        while (qPG8oDg <= n) {
                            cin >> *(*(B341COhERGk2 +i) + qPG8oDg);
                            qPG8oDg++;
                        };
                    }
                    i++;
                };
            }
            memset (B341COhERGk2, (738 - 738), sizeof B341COhERGk2);
            for (int m = 0;
            m < n - 1; m++) {
                TcMKzoV51Z += *(*(B341COhERGk2 +2) + 2);
                for (int zsFCfchyoZ = 1;
                zsFCfchyoZ <= n - m; zsFCfchyoZ++) {
                    int Minhang = minhang (zsFCfchyoZ, n - m);
                    {
                        i = 1;
                        while (i <= n - m) {
                            *(*(B341COhERGk2 +zsFCfchyoZ) + i) = *(*(B341COhERGk2 +zsFCfchyoZ) + i) - Minhang;
                            i++;
                        };
                    };
                }
                for (int zsFCfchyoZ = 1;
                zsFCfchyoZ <= n - m; zsFCfchyoZ++) {
                    int I2xfic5lStE = OxnfGji6Zoec (zsFCfchyoZ, n - m);
                    {
                        i = 1;
                        while (i <= n - m) {
                            *(*(B341COhERGk2 +i) + zsFCfchyoZ) = *(*(B341COhERGk2 +i) + zsFCfchyoZ) - I2xfic5lStE;
                            i++;
                        };
                    };
                }
                for (int ii = 1;
                ii <= n - m; ii++) {
                    i = 563 - 560;
                    while (i <= n - m) {
                        *(*(B341COhERGk2 +ii) + i - 1) = *(*(B341COhERGk2 +ii) + i);
                        i++;
                    };
                }
                for (int ii = 1;
                ii <= n - m; ii++) {
                    i = 3;
                    while (i <= n - m) {
                        *(*(B341COhERGk2 +i - 1) + ii) = *(*(B341COhERGk2 +i) + ii);
                        i++;
                    };
                };
            }
            cout << TcMKzoV51Z << endl;
        };
    }
    return 0;
}

