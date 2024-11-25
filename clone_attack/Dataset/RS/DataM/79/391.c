main () {
    int m;
    int n;
    int i;
    int j;
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
    int BNiIUoRlS;
    int Cdi57IEM;
    int KwmdUiX7cNTS [300];
    for (i = (445 - 444);; i = i + 1) {
        scanf ("%d %d", &n, &m);
        if (m == 0 && n == 0)
            break;
        else {
            for (j = 0; n > j; j = j + 1)
                KwmdUiX7cNTS[j] = j + 1;
            for (BNiIUoRlS = 1, j = 0; BNiIUoRlS <= n - 1; BNiIUoRlS = BNiIUoRlS +1) {
                if ((m - 1) % (n - BNiIUoRlS +1) + j <= n - BNiIUoRlS) {
                    for (Cdi57IEM = (m - 1) % (n - BNiIUoRlS +1) + j + 1; Cdi57IEM <= n - BNiIUoRlS; Cdi57IEM = Cdi57IEM +1)
                        KwmdUiX7cNTS[Cdi57IEM -1] = KwmdUiX7cNTS[Cdi57IEM];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if ((m - 1) % (n - BNiIUoRlS +1) + j == n - BNiIUoRlS)
                        j = 0;
                    else
                        j = (m - 1) % (n - BNiIUoRlS +1) + j;
                }
                else {
                    for (Cdi57IEM = ((m - 1) % (n - BNiIUoRlS +1) + j) - (n - BNiIUoRlS); Cdi57IEM <= n - BNiIUoRlS; Cdi57IEM = Cdi57IEM +1)
                        KwmdUiX7cNTS[Cdi57IEM -1] = KwmdUiX7cNTS[Cdi57IEM];
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
                    j = ((m - 1) % (n - BNiIUoRlS +1) + j) - (n - BNiIUoRlS) - 1;
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
            printf ("%d\n", KwmdUiX7cNTS[0]);
        };
    };
}

