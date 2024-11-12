char a [(797 - 647)];
int l, j;

void  left (int LQTdtc1Mj) {
    int jj;
    if (LQTdtc1Mj == l - 1) {
        a[LQTdtc1Mj] = '$';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return;
    }
    {
        jj = LQTdtc1Mj +1;
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
        while (jj < l) {
            if (a[jj] == ')') {
                a[jj] = ' ';
                a[LQTdtc1Mj] = ' ';
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            }
            else {
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
                if (a[jj] == '(') {
                    left (jj);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                };
            }
            jj++;
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
    if (jj == l) {
        a[LQTdtc1Mj] = '$';
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
    return;
}

void  hZvNl0JuOnQz (int LQTdtc1Mj) {
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (LQTdtc1Mj == l) {
        {
            int ii = 0;
            while (l > ii) {
                if (a[ii] == '(') {
                    a[ii] = '$';
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    };
                }
                if (!(')' != a[ii])) {
                    a[ii] = '?';
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                ii++;
            };
        }
        return;
    }
    else {
        if (LQTdtc1Mj == l - 1 && a[LQTdtc1Mj] == '(') {
            a[LQTdtc1Mj] = '$';
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
        if ((a[LQTdtc1Mj] >= 'a' && a[LQTdtc1Mj] <= 'z') || (a[LQTdtc1Mj] >= 'A' && a[LQTdtc1Mj] <= 'Z')) {
            a[LQTdtc1Mj] = ' ';
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
        else {
            if (a[LQTdtc1Mj] == '(') {
                left (LQTdtc1Mj);
            };
        }
        hZvNl0JuOnQz (LQTdtc1Mj +1);
    };
}

int main () {
    while (cin >> a) {
        l = strlen (a);
        {
            int vvbeXj = 0;
            while (vvbeXj < l) {
                cout << a[vvbeXj];
                vvbeXj = vvbeXj + 1;
            };
        }
        hZvNl0JuOnQz (0);
        cout << endl;
        {
            int vvbeXj = 0;
            while (vvbeXj < l) {
                cout << a[vvbeXj];
                vvbeXj++;
            };
        }
        cout << endl;
    }
    return 0;
}

