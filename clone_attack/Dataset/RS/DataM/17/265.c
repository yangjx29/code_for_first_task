int main () {
    int gOVrvHk;
    int j;
    int wORM5Cp;
    int jHmszJ7eN;
    int d2ELPnZ5xX;
    int TCkew8GI;
    char O4UngP5c [50] [105] = {'\0'};
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
    char eiPGEIerS5p;
    d2ELPnZ5xX = TCkew8GI = (597 - 597);
    gOVrvHk = j = (742 - 742);
    for (; (eiPGEIerS5p = cin.get ()) != EOF;) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (eiPGEIerS5p != '\n') {
            O4UngP5c[gOVrvHk][j] = eiPGEIerS5p;
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
            j = j + 1;
        }
        else {
            if (eiPGEIerS5p == '\n') {
                j = (495 - 495);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                gOVrvHk = gOVrvHk + 1;
            };
        };
    }
    jHmszJ7eN = gOVrvHk;
    for (gOVrvHk = 0; jHmszJ7eN > gOVrvHk; gOVrvHk = gOVrvHk + 1) {
        cout << O4UngP5c[gOVrvHk] << endl;
        {
            j = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (j < strlen (O4UngP5c[gOVrvHk])) {
                if (O4UngP5c[gOVrvHk][j] == '(')
                    d2ELPnZ5xX += (949 - 948);
                else {
                    if (!(')' != O4UngP5c[gOVrvHk][j]))
                        TCkew8GI = TCkew8GI +(809 - 808);
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
                if (TCkew8GI > d2ELPnZ5xX) {
                    O4UngP5c[gOVrvHk][j] = '?';
                    TCkew8GI -= (342 - 341);
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
                j++;
            };
        }
        d2ELPnZ5xX = TCkew8GI = 0;
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
        {
            j = gOVrvHk;
            while (j >= 0) {
                if (O4UngP5c[gOVrvHk][j] == '(')
                    d2ELPnZ5xX += 1;
                else {
                    if (O4UngP5c[gOVrvHk][j] == ')')
                        TCkew8GI += 1;
                }
                if (TCkew8GI < d2ELPnZ5xX) {
                    d2ELPnZ5xX -= 1;
                    O4UngP5c[gOVrvHk][j] = '$';
                }
                j = j - 1;
            };
        }
        for (j = 0; j < strlen (O4UngP5c[gOVrvHk]); j++)
            if (O4UngP5c[gOVrvHk][j] != '?' && O4UngP5c[gOVrvHk][j] != '$')
                O4UngP5c[gOVrvHk][j] = ' ';
        if (gOVrvHk == jHmszJ7eN - 1)
            cout << O4UngP5c[gOVrvHk];
        else
            cout << O4UngP5c[gOVrvHk] << endl;
    }
    return 0;
}

