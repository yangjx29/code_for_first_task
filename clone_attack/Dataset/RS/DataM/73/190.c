int main () {
    int u9BJfIEMz7l [(225 - 220)] [(170 - 165)], OzPJdE [(772 - 767)], y0JNmho1KcQ [(213 - 208)], d [(589 - 584)];
    int i, QiykzY, pMFhEJBvC9Lt, BcSjEX = (340 - 340);
    {
        i = 981 - 981;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (5 > i) {
            {
                QiykzY = 0;
                while (5 > QiykzY) {
                    scanf ("%d", &u9BJfIEMz7l[i][QiykzY]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    QiykzY = QiykzY +1;
                };
            }
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
    {
        i = 0;
        while (i < 5) {
            OzPJdE[i] = u9BJfIEMz7l[i][0];
            {
                QiykzY = 0;
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
                while (QiykzY < 5) {
                    if (u9BJfIEMz7l[i][QiykzY] >= OzPJdE[i]) {
                        OzPJdE[i] = u9BJfIEMz7l[i][QiykzY];
                        d[i] = QiykzY;
                    }
                    QiykzY = QiykzY +1;
                };
            }
            i = i + 1;
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
    {
        QiykzY = 0;
        while (QiykzY < 5) {
            y0JNmho1KcQ[QiykzY] = u9BJfIEMz7l[0][QiykzY];
            {
                i = 0;
                while (i < 5) {
                    if (u9BJfIEMz7l[i][QiykzY] <= y0JNmho1KcQ[QiykzY]) {
                        y0JNmho1KcQ[QiykzY] = u9BJfIEMz7l[i][QiykzY];
                    }
                    i = i + 1;
                };
            }
            QiykzY = QiykzY +1;
        };
    }
    {
        i = 0;
        while (i < 5) {
            pMFhEJBvC9Lt = d[i];
            if (OzPJdE[i] == y0JNmho1KcQ[pMFhEJBvC9Lt]) {
                printf ("%d %d %d", i + 1, pMFhEJBvC9Lt + 1, OzPJdE[i]);
                BcSjEX = BcSjEX +1;
            }
            i++;
        };
    }
    if (BcSjEX == 0) {
        printf ("not found");
    }
    return 0;
}

