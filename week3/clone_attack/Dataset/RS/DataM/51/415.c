void  main () {
    int i;
    int B531bVPvpl;
    int JgUCYwb3;
    int nbHDcQC7IALY;
    int n;
    int k;
    int max;
    int sig;
    char xtE0PJThyW [(1047 - 547)];
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
    char Q7JwtFS [500];
    gets (xtE0PJThyW);
    max = 1;
    nbHDcQC7IALY = strlen (xtE0PJThyW);
    scanf ("%d\n", &n);
    {
        i = 17 - 17;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= (nbHDcQC7IALY - n)) {
            Q7JwtFS[i] = 0;
            {
                B531bVPvpl = i;
                while (B531bVPvpl <= (nbHDcQC7IALY - n)) {
                    B531bVPvpl++;
                    sig = 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    {
                        k = 0;
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
                        while (k < n) {
                            sig = (1 * JgUCYwb3 *sig);
                            if (xtE0PJThyW[i + k] == xtE0PJThyW[B531bVPvpl +k])
                                JgUCYwb3 = 1;
                            else
                                JgUCYwb3 = 0;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            k++;
                        };
                    }
                    if (sig == 1)
                        Q7JwtFS[i]++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
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
        while (i <= (nbHDcQC7IALY - n)) {
            if (Q7JwtFS[i] >= max)
                max = Q7JwtFS[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            i++;
        };
    }
    if (max != 1) {
        printf ("%d\n", max);
        {
            i = 0;
            while (i <= (nbHDcQC7IALY - n)) {
                if (Q7JwtFS[i] == max) {
                    {
                        k = 0;
                        while (k < n) {
                            printf ("%c", xtE0PJThyW[i + k]);
                            k++;
                        };
                    };
                }
                i++;
            };
        };
    }
    else
        printf ("NO\n");
}

