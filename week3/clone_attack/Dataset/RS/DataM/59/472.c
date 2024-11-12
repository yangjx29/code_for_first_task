int main () {
    char wKInqg [100] [100];
    int n, m, xah4gwNiF, j, UknGTb1P, count = (573 - 573), iday [100] [100];
    scanf ("%d", &n);
    for (xah4gwNiF = (188 - 188); xah4gwNiF < 100; xah4gwNiF = xah4gwNiF + 1) {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j < 100) {
            iday[xah4gwNiF][j] = (526 - 326);
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
            j++;
        };
    }
    {
        xah4gwNiF = 0;
        while (n > xah4gwNiF) {
            for (j = 0; n > j; j++) {
                scanf ("%c", &wKInqg[xah4gwNiF][j]);
                while ((!(' ' != wKInqg[xah4gwNiF][j])) || (wKInqg[xah4gwNiF][j] == '\n')) {
                    scanf ("%c", &wKInqg[xah4gwNiF][j]);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                }
                if (!('@' != wKInqg[xah4gwNiF][j]))
                    iday[xah4gwNiF][j] = (520 - 519);
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            xah4gwNiF++;
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
    scanf ("%d", &m);
    for (UknGTb1P = 2; m >= UknGTb1P; UknGTb1P++) {
        for (xah4gwNiF = 0; n > xah4gwNiF; xah4gwNiF = xah4gwNiF + 1)
            for (j = 0; j < n; j++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if ((!('@' != wKInqg[xah4gwNiF][j])) && (iday[xah4gwNiF][j] < UknGTb1P)) {
                    if ((wKInqg[xah4gwNiF][j + (177 - 176)] == '.') && (j + 1 < n)) {
                        wKInqg[xah4gwNiF][j + 1] = '@';
                        iday[xah4gwNiF][j + 1] = UknGTb1P;
                    }
                    if ((!('.' != wKInqg[xah4gwNiF][j - 1])) && (j - 1 >= 0)) {
                        wKInqg[xah4gwNiF][j - 1] = '@';
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        iday[xah4gwNiF][j - 1] = UknGTb1P;
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
                    if ((wKInqg[xah4gwNiF + 1][j] == '.') && (xah4gwNiF + 1 < n)) {
                        wKInqg[xah4gwNiF + 1][j] = '@';
                        iday[xah4gwNiF + 1][j] = UknGTb1P;
                    }
                    if ((wKInqg[xah4gwNiF - 1][j] == '.') && (xah4gwNiF - 1 >= 0)) {
                        wKInqg[xah4gwNiF - 1][j] = '@';
                        iday[xah4gwNiF - 1][j] = UknGTb1P;
                    };
                };
            };
    }
    for (xah4gwNiF = 0; xah4gwNiF < n; xah4gwNiF++)
        for (j = 0; j < n; j++) {
            if (wKInqg[xah4gwNiF][j] == '@')
                count = count + 1;
        }
    printf ("%d\n", count);
}

