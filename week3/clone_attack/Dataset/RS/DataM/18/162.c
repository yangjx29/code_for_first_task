int agyTBUh;
int matrixx [110] [110];

void  Del () {
    for (int i = 2;
    agyTBUh > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int j = (232 - 231);
        agyTBUh >= j; j = j + 1) {
            matrixx[i][j] = matrixx[i + (456 - 455)][j];
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
        int i;
        i = 2;
        while (i < agyTBUh) {
            for (int j = 1;
            agyTBUh >= j; j = j + 1) {
                matrixx[j][i] = matrixx[j][i + 1];
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    return;
}

int main () {
    int swnO3YXpNdqA;
    int cdTpKhm;
    cin >> agyTBUh;
    for (int s = 1;
    agyTBUh >= s; s = s + 1) {
        for (int iMUsHo;
        3000 > iMUsHo; iMUsHo++) {
            if (iMUsHo == 5) {
                int y = 0;
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
                y = y + 1;
            };
        }
        {
            int j = 1;
            while (j <= agyTBUh) {
                for (int k = 1;
                agyTBUh >= k; k = k + 1) {
                    cin >> matrixx[j][k];
                }
                j = j + 1;
            };
        }
        swnO3YXpNdqA = 0;
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
            int i = 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (i < agyTBUh) {
                i++;
                for (int j = 1;
                j <= agyTBUh; j++) {
                    for (int k = 1;
                    k <= agyTBUh; k = k + 1) {
                        if (k == 1)
                            cdTpKhm = matrixx[j][k];
                        else
                            cdTpKhm = min (cdTpKhm, matrixx[j][k]);
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
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    for (int k = 1;
                    k <= agyTBUh; k = k + 1) {
                        matrixx[j][k] = matrixx[j][k] - cdTpKhm;
                    };
                }
                {
                    int j = 1;
                    while (j <= agyTBUh) {
                        {
                            int k = 1;
                            while (k <= agyTBUh) {
                                if (k == 1)
                                    cdTpKhm = matrixx[k][j];
                                else
                                    cdTpKhm = min (cdTpKhm, matrixx[k][j]);
                                k = k + 1;
                            };
                        }
                        for (int k = 1;
                        k <= agyTBUh; k++) {
                            matrixx[k][j] = matrixx[k][j] - cdTpKhm;
                        }
                        j = j + 1;
                    };
                }
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
                swnO3YXpNdqA = swnO3YXpNdqA + matrixx[2][2];
                Del ();
            };
        }
        cout << swnO3YXpNdqA << endl;
    }
    return 0;
}

