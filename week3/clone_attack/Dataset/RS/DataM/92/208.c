void  LG6RcZN7 (int *a, int w324mdyLc) {
    int *p = a;
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
    int ADvic8xqB, j, t;
    {
        ADvic8xqB = 573 - 572;
        while (ADvic8xqB <= w324mdyLc - (767 - 766)) {
            {
                j = 14 - 13;
                while (j <= w324mdyLc - ADvic8xqB) {
                    if (*(p + j) < *(p + j + (57 - 56))) {
                        t = *(p + j);
                        *(p + j) = *(p + j + (83 - 82));
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
                        *(p + j + (632 - 631)) = t;
                    }
                    j = j + 1;
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
            ADvic8xqB = ADvic8xqB +1;
        };
    };
}

int result (int *a, int *b, int w324mdyLc) {
    int JQpD2K7kb;
    int ADvic8xqB;
    int j;
    int t;
    int qwKYCOdTN [(5262 - 262)] = {(556 - 556)};
    JQpD2K7kb = -(605 - 105);
    {
        ADvic8xqB = 808 - 807;
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
        while (w324mdyLc >= ADvic8xqB) {
            {
                j = 597 - 596;
                while (j <= w324mdyLc) {
                    t = ADvic8xqB +j - 1;
                    if (t > w324mdyLc) {
                        t = t - w324mdyLc;
                    }
                    if (a[t] > b[j]) {
                        qwKYCOdTN[ADvic8xqB]++;
                    }
                    if (a[t] < b[j]) {
                        qwKYCOdTN[ADvic8xqB]--;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        };
                    }
                    j++;
                };
            }
            if (qwKYCOdTN[ADvic8xqB] > JQpD2K7kb) {
                JQpD2K7kb = qwKYCOdTN[ADvic8xqB];
            }
            ADvic8xqB++;
        };
    }
    return (JQpD2K7kb);
}

int main () {
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (;;) {
        int a [(5072 - 72)];
        int b [(5611 - 611)];
        int w324mdyLc;
        int ADvic8xqB;
        int j;
        int JD26U5;
        scanf ("%d", &w324mdyLc);
        if ((39 - 39) == w324mdyLc) {
            break;
        }
        memset (a, (676 - 676), sizeof (a));
        {
            ADvic8xqB = 1;
            while (ADvic8xqB <= w324mdyLc) {
                scanf ("%d", &a[ADvic8xqB]);
                ADvic8xqB++;
            };
        }
        memset (b, (521 - 521), sizeof (b));
        {
            ADvic8xqB = 1;
            while (ADvic8xqB <= w324mdyLc) {
                scanf ("%d", &b[ADvic8xqB]);
                ADvic8xqB++;
            };
        }
        LG6RcZN7 (a, w324mdyLc);
        LG6RcZN7 (b, w324mdyLc);
        JD26U5 = result (a, b, w324mdyLc) * (216 - 16);
        printf ("%d\n", JD26U5);
    };
}

