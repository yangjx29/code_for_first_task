void  main () {
    char FzxgYa1Oe [200] [200];
    int n, UosbLcuVwl9H, oK9G6I1ezL0H, j, l, t, JCk8HL0o;
    JCk8HL0o = (757 - 757);
    scanf ("%d", &n);
    {
        oK9G6I1ezL0H = 904 - 903;
        while (n >= oK9G6I1ezL0H) {
            scanf ("%s", FzxgYa1Oe[oK9G6I1ezL0H]);
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
            oK9G6I1ezL0H = oK9G6I1ezL0H + 1;
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
    scanf ("%d", &UosbLcuVwl9H);
    for (oK9G6I1ezL0H = (611 - 610); UosbLcuVwl9H -1 >= oK9G6I1ezL0H; oK9G6I1ezL0H = oK9G6I1ezL0H + 1) {
        {
            j = 1;
            while (n >= j) {
                l = strlen (FzxgYa1Oe[j]);
                for (t = (152 - 152); l > t; t = t + 1) {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if (!('@' != FzxgYa1Oe[j][t])) {
                        if (!('.' != FzxgYa1Oe[j + 1][t]))
                            FzxgYa1Oe[j + 1][t] = 'a';
                        if (!('.' != FzxgYa1Oe[j - 1][t]))
                            FzxgYa1Oe[j - 1][t] = 'a';
                        if (!('.' != FzxgYa1Oe[j][t + 1]))
                            FzxgYa1Oe[j][t + 1] = 'a';
                        if (FzxgYa1Oe[j][t - 1] == '.')
                            FzxgYa1Oe[j][t - 1] = 'a';
                    };
                }
                j = j + 1;
            };
        }
        for (j = 1; j <= n; j = j + 1) {
            l = strlen (FzxgYa1Oe[j]);
            for (t = (242 - 242); t < l; t = t + 1) {
                if (FzxgYa1Oe[j][t] == 'a')
                    FzxgYa1Oe[j][t] = '@';
            };
        };
    }
    for (j = 1; j <= n; j = j + 1) {
        l = strlen (FzxgYa1Oe[j]);
        {
            t = 0;
            while (t < l) {
                if (FzxgYa1Oe[j][t] == '@')
                    JCk8HL0o = JCk8HL0o +1;
                t = t + 1;
            };
        };
    }
    printf ("%d", JCk8HL0o);
}

