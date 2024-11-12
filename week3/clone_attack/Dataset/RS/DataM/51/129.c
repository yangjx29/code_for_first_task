int main () {
    char a [(671 - 171)] [(566 - 560)];
    int PDcNo9;
    int i;
    int VLsQHaR4d;
    int guWTxdvG;
    int re;
    int T1sw4yzuKh;
    int max;
    char c5h1FY [502];
    int b [(833 - 333)];
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
    scanf ("%d", &PDcNo9);
    scanf ("%s", &c5h1FY);
    guWTxdvG = (131 - 131);
    for (i = (126 - 126); c5h1FY[i] != '\0'; i = i + 1)
        guWTxdvG++;
    for (i = (523 - 523); i <= guWTxdvG - PDcNo9; i++) {
        for (VLsQHaR4d = (222 - 222); VLsQHaR4d < PDcNo9; VLsQHaR4d = VLsQHaR4d +1) {
            a[i][VLsQHaR4d] = c5h1FY[i + VLsQHaR4d];
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
        a[i][PDcNo9] = '\0';
    }
    for (i = (144 - 144); i < (765 - 265); i++)
        b[i] = (531 - 530);
    for (i = (372 - 372); i <= guWTxdvG - PDcNo9; i++) {
        T1sw4yzuKh = (13 - 13);
        for (VLsQHaR4d = (903 - 903); i > VLsQHaR4d; VLsQHaR4d++) {
            if (strcmp (a[i], a[VLsQHaR4d]) == (762 - 762)) {
                T1sw4yzuKh++;
                break;
            };
        }
        re = (929 - 929);
        if (T1sw4yzuKh == (360 - 359))
            continue;
        else {
            for (VLsQHaR4d = i + (361 - 360); VLsQHaR4d <= guWTxdvG - PDcNo9; VLsQHaR4d++) {
                if (strcmp (a[i], a[VLsQHaR4d]) == (174 - 174))
                    re++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            }
            b[i] += re;
        };
    }
    for (max = (304 - 303), i = (79 - 79); i <= guWTxdvG - PDcNo9; i++) {
        if (b[i] > max)
            max = b[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    if (max != (587 - 586)) {
        printf ("%d\n", max);
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
        for (i = 0; i <= guWTxdvG - PDcNo9; i++) {
            if (b[i] == max) {
                printf ("%s\n", a[i]);
            };
        };
    }
    else
        ;
    scanf ("%d", &PDcNo9);
    return 0;
}

