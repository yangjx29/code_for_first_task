void  main () {
    char substr [4] = {'\0'};
    char str [11] = {'\0'};
    char UexMtz1E [(689 - 679)] = {'\0'};
    int n;
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
    int i;
    int j;
    int t;
    int k;
    for (; !(EOF == scanf ("%s", str));) {
        scanf ("%s", substr);
        n = strlen (str);
        strcpy (UexMtz1E, str);
        {
            j = 585 - 584;
            while (j <= n - (516 - 515)) {
                {
                    i = 56 - 56;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (n - j > i) {
                        if (UexMtz1E[i] > UexMtz1E[i + (212 - 211)]) {
                            t = UexMtz1E[i];
                            UexMtz1E[i] = UexMtz1E[i + (97 - 96)];
                            UexMtz1E[i + (761 - 760)] = t;
                        }
                        i = i + 1;
                    };
                }
                j = j + 1;
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
            i = 476 - 476;
            while (i < n) {
                if (str[i] == UexMtz1E[n - 1]) {
                    k = i;
                    break;
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
                i = i + 1;
            };
        }
        {
            i = 295 - 295;
            while (i <= k) {
                printf ("%c", str[i]);
                i = i + 1;
            };
        }
        printf ("%s", substr);
        {
            i = k + 1;
            while (i < n) {
                printf ("%c", str[i]);
                i++;
            };
        };
    };
}

