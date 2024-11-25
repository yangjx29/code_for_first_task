struct   aGz6UbiF8 {
    int ML9CgVqW;
    char author [27];
}
aGz6UbiF8 [1000];

void  main () {
    int max;
    int most;
    int len [1000];
    int aD1BT0Cg6 [26] = {(32 - 32)};
    char s [26];
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
    int U0Kurpzx3, xZyzvcF, j, SZR47YS9;
    most = 0;
    scanf ("%d", &U0Kurpzx3);
    {
        xZyzvcF = 660 - 660;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (xZyzvcF < U0Kurpzx3) {
            scanf ("%d %s", &aGz6UbiF8[xZyzvcF].ML9CgVqW, aGz6UbiF8[xZyzvcF].author);
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
            xZyzvcF = xZyzvcF + 1;
        };
    }
    {
        xZyzvcF = 523 - 523;
        while (26 > xZyzvcF) {
            s[xZyzvcF] = 'A' + xZyzvcF;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            xZyzvcF++;
        };
    }
    {
        xZyzvcF = 0;
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
        while (xZyzvcF < U0Kurpzx3) {
            len[xZyzvcF] = strlen (aGz6UbiF8[xZyzvcF].author);
            {
                j = 0;
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
                while (j < len[xZyzvcF]) {
                    {
                        SZR47YS9 = 0;
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
                        while (SZR47YS9 < 26) {
                            if (aGz6UbiF8[xZyzvcF].author[j] == s[SZR47YS9])
                                aD1BT0Cg6[SZR47YS9]++;
                            SZR47YS9++;
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
                    j = j + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            xZyzvcF++;
        };
    }
    max = aD1BT0Cg6[0];
    {
        xZyzvcF = 0;
        while (26 > xZyzvcF) {
            if (aD1BT0Cg6[xZyzvcF] > max) {
                max = aD1BT0Cg6[xZyzvcF];
                most = xZyzvcF;
            }
            xZyzvcF++;
        };
    }
    printf ("%c\n%d\n", s[most], max);
    {
        xZyzvcF = 0;
        while (xZyzvcF < U0Kurpzx3) {
            len[xZyzvcF] = strlen (aGz6UbiF8[xZyzvcF].author);
            for (j = 0; j < len[xZyzvcF]; j++) {
                if (aGz6UbiF8[xZyzvcF].author[j] == s[most])
                    printf ("%d\n", aGz6UbiF8[xZyzvcF].ML9CgVqW);
            }
            xZyzvcF++;
        };
    };
}

