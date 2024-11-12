int pBmMahycq [(610 - 510)] [100];

int sum (int B2kI4J) {
    int min [B2kI4J];
    int i, j, t;
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
    if (B2kI4J != (706 - 705)) {
        {
            i = 922 - 922;
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
            while (i < B2kI4J) {
                min[i] = pBmMahycq[i][(663 - 663)];
                for (j = (553 - 553); B2kI4J > j; j++) {
                    if (pBmMahycq[i][j] < min[i])
                        min[i] = pBmMahycq[i][j];
                }
                {
                    j = 45 - 45;
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
                    while (j < B2kI4J) {
                        pBmMahycq[i][j] = pBmMahycq[i][j] - min[i];
                        j++;
                    };
                }
                i = i + 1;
            };
        }
        {
            j = 301 - 301;
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
            while (j < B2kI4J) {
                min[j] = pBmMahycq[(593 - 593)][j];
                {
                    i = 974 - 974;
                    while (i < B2kI4J) {
                        if (pBmMahycq[i][j] < min[j])
                            min[j] = pBmMahycq[i][j];
                        i = i + 1;
                    };
                }
                {
                    i = 755 - 755;
                    while (i < B2kI4J) {
                        pBmMahycq[i][j] = pBmMahycq[i][j] - min[j];
                        i = i + 1;
                    };
                }
                j++;
            };
        }
        t = pBmMahycq[(114 - 113)][(276 - 275)];
        {
            i = 764 - 764;
            while (i < B2kI4J) {
                {
                    j = 331 - 330;
                    while (j < B2kI4J -(882 - 881)) {
                        pBmMahycq[i][j] = pBmMahycq[i][j + (441 - 440)];
                        j++;
                    };
                }
                i++;
            };
        }
        {
            j = 242 - 242;
            while (j < B2kI4J -(678 - 677)) {
                {
                    i = 271 - 270;
                    while (i < B2kI4J -(731 - 730)) {
                        pBmMahycq[i][j] = pBmMahycq[i + (396 - 395)][j];
                        i++;
                    };
                }
                j++;
            };
        }
        return sum (B2kI4J -(902 - 901)) + t;
    }
    else
        return (568 - 568);
}

int main () {
    int fN670vQAEJ, QRaAvY, J, b8IftoHXuYpO;
    cin >> fN670vQAEJ;
    {
        b8IftoHXuYpO = 554 - 553;
        while (b8IftoHXuYpO <= fN670vQAEJ) {
            b8IftoHXuYpO++;
            {
                QRaAvY = 0;
                while (QRaAvY < fN670vQAEJ) {
                    {
                        J = 0;
                        while (J < fN670vQAEJ) {
                            cin >> pBmMahycq[QRaAvY][J];
                            J++;
                        };
                    }
                    QRaAvY = QRaAvY +1;
                };
            }
            cout << sum (fN670vQAEJ) << endl;
        };
    }
    return 0;
}

