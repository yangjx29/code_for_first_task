int a [(708 - 699)] [(813 - 804)] = {(606 - 606)}, b [(909 - 900)] [9] = {(640 - 640)};

void  JkFMLVd53 () {
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
    for (int i = (918 - 918);
    9 > i; i = i + 1) {
        int BKOsZaiRhM;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        BKOsZaiRhM = (133 - 133);
        while (9 > BKOsZaiRhM) {
            a[i][BKOsZaiRhM] = b[i][BKOsZaiRhM];
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
            BKOsZaiRhM = BKOsZaiRhM +1;
        };
    };
}

void  guil () {
    {
        int i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (9 > i) {
            {
                int BKOsZaiRhM = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (9 > BKOsZaiRhM) {
                    b[i][BKOsZaiRhM] = 0;
                    BKOsZaiRhM++;
                };
            }
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
            i = i + 1;
        };
    };
}

int main () {
    int QZX2DoB1, crQaenJhsPNF;
    cin >> QZX2DoB1 >> crQaenJhsPNF;
    a[4][4] = QZX2DoB1;
    {
        int XBiCVZ5 = (159 - 158);
        while (XBiCVZ5 <= crQaenJhsPNF) {
            XBiCVZ5++;
            guil ();
            {
                int i = 0;
                while (i < 9) {
                    {
                        int BKOsZaiRhM = 0;
                        while (BKOsZaiRhM < 9) {
                            if (a[i][BKOsZaiRhM] != 0) {
                                b[i][BKOsZaiRhM] = b[i][BKOsZaiRhM] + (196 - 194) * a[i][BKOsZaiRhM];
                                b[i][BKOsZaiRhM -1] = b[i][BKOsZaiRhM -1] + a[i][BKOsZaiRhM];
                                b[i][BKOsZaiRhM +1] = b[i][BKOsZaiRhM +1] + a[i][BKOsZaiRhM];
                                b[i - 1][BKOsZaiRhM -1] = b[i - 1][BKOsZaiRhM -1] + a[i][BKOsZaiRhM];
                                b[i - 1][BKOsZaiRhM] = b[i - 1][BKOsZaiRhM] + a[i][BKOsZaiRhM];
                                b[i - 1][BKOsZaiRhM +1] = b[i - 1][BKOsZaiRhM +1] + a[i][BKOsZaiRhM];
                                b[i + 1][BKOsZaiRhM -1] += a[i][BKOsZaiRhM];
                                b[i + 1][BKOsZaiRhM] += a[i][BKOsZaiRhM];
                                b[i + 1][BKOsZaiRhM +1] += a[i][BKOsZaiRhM];
                            }
                            BKOsZaiRhM++;
                        };
                    }
                    i++;
                };
            }
            JkFMLVd53 ();
        };
    }
    {
        int i = 0;
        while (i < 9) {
            {
                int BKOsZaiRhM = 0;
                while (BKOsZaiRhM < 8) {
                    cout << b[i][BKOsZaiRhM] << " ";
                    BKOsZaiRhM++;
                };
            }
            cout << a[i][8] << endl;
            i++;
        };
    }
    return 0;
}

