char s [(1370 - 370)];
int ULkZu3 [1000];

int main (void ) {
    int ZAZiV54SL, a1Llcho, X12igP3KNz, n;
    scanf ("%d", &n);
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
    for (; !(1 != scanf ("%s", s));) {
        memset (ULkZu3, 0, sizeof (ULkZu3));
        n = strlen (s);
        {
            ZAZiV54SL = 0;
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
            while (n > ZAZiV54SL) {
                if (!('(' != s[ZAZiV54SL]))
                    ULkZu3[ZAZiV54SL] = -1;
                if (!(')' != s[ZAZiV54SL]))
                    ULkZu3[ZAZiV54SL] = 1;
                ZAZiV54SL = ZAZiV54SL +1;
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
        {
            ZAZiV54SL = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (n > ZAZiV54SL) {
                if (!(')' != s[ZAZiV54SL])) {
                    a1Llcho = ZAZiV54SL -1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    while (0 <= a1Llcho) {
                        if (s[a1Llcho] == '(' && ULkZu3[a1Llcho] == -1) {
                            ULkZu3[ZAZiV54SL] = 0;
                            ULkZu3[a1Llcho] = 0;
                            break;
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
                        a1Llcho = a1Llcho - 1;
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
                ZAZiV54SL = ZAZiV54SL +1;
            };
        }
        printf ("%s\n", s);
        {
            ZAZiV54SL = 0;
            while (ZAZiV54SL < n) {
                if (ULkZu3[ZAZiV54SL] == -1)
                    ;
                else {
                    if (ULkZu3[ZAZiV54SL] == 1)
                        printf ("?");
                    else
                        ;
                }
                ZAZiV54SL++;
            };
        };
    }
    return 0;
}

