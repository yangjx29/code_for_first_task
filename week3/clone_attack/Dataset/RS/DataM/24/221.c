void  main () {
    int i, j, k, n, m;
    char *p;
    char str [(351 - 251)] [(140 - 40)] = {(579 - 579)};
    char string [1000] = {(185 - 185)};
    char num [100] = {(814 - 814)};
    gets (string);
    n = (910 - 910);
    p = num;
    k = (777 - 777);
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
        i = 386 - 386;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (!('\0' == string[n])) {
            k = k + 1;
            {
                j = 147 - 147;
                while (!('\0' == string[n]) && !(' ' == string[n])) {
                    str[i][j] = string[n];
                    j = j + 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    n = n + 1;
                };
            }
            n = n + 1;
            str[i][j] = '\0';
            i = i + 1;
        };
    }
    m = strlen (str[0]);
    p = str[0];
    for (i = 0; k > i; i = i + 1)
        if (m < strlen (str[i])) {
            m = strlen (str[i]);
            p = str[i];
        }
    m = strlen (str[0]);
    printf ("%s\n", p);
    p = str[0];
    for (i = 0; i < k; i++)
        if (m > strlen (str[i])) {
            m = strlen (str[i]);
            p = str[i];
        }
    printf ("%s", p);
}

