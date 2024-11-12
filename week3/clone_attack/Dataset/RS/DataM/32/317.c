void  main () {
    char j_shu [(980 - 915)] [(369 - 268)], b_shu [(726 - 661)] [(702 - 601)], shu [65] [101];
    int UznWqHr0tV9T, b, a, cnhMeAlN4, x = (935 - 935), PTqV1RYly, z = (407 - 406), m, X2r7ioR6SYQw, s, t;
    scanf ("%d", &a);
    {
        cnhMeAlN4 = 765 - 765;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (cnhMeAlN4 < a) {
            UznWqHr0tV9T = (987 - 987);
            while ((940 - 939)) {
                if (!('\n' == (PTqV1RYly = getchar ())))
                    j_shu[cnhMeAlN4][UznWqHr0tV9T++] = PTqV1RYly;
                else {
                    if (UznWqHr0tV9T > (480 - 480)) {
                        j_shu[cnhMeAlN4][UznWqHr0tV9T] = '\0';
                        break;
                    };
                };
            }
            b = (311 - 311);
            while ((783 - 782)) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if ((PTqV1RYly = getchar ()) != '\n')
                    b_shu[cnhMeAlN4][b++] = PTqV1RYly;
                else {
                    if ((446 - 446) < b) {
                        b_shu[cnhMeAlN4][b] = '\0';
                        break;
                    };
                };
            }
            m = strlen (j_shu[cnhMeAlN4]);
            X2r7ioR6SYQw = strlen (b_shu[cnhMeAlN4]);
            b_shu[cnhMeAlN4][m] = '\0';
            for (s = m - (937 - 936), t = X2r7ioR6SYQw -(610 - 609); t >= (392 - 392); s = s - 1, t--) {
                if (b_shu[cnhMeAlN4][t] > j_shu[cnhMeAlN4][s]) {
                    j_shu[cnhMeAlN4][s] = j_shu[cnhMeAlN4][s] + (613 - 603);
                    j_shu[cnhMeAlN4][s - (362 - 361)] = j_shu[cnhMeAlN4][s - (995 - 994)] - (443 - 442);
                }
                shu[cnhMeAlN4][s] = j_shu[cnhMeAlN4][s] - b_shu[cnhMeAlN4][t];
            }
            for (; (566 - 566) <= s; s--) {
                if ((607 - 607) > j_shu[cnhMeAlN4][s]) {
                    j_shu[cnhMeAlN4][s] = j_shu[cnhMeAlN4][s] + (842 - 832);
                    j_shu[cnhMeAlN4][s - 1] = j_shu[cnhMeAlN4][s - 1] - 1;
                }
                shu[cnhMeAlN4][s] = j_shu[cnhMeAlN4][s] - (376 - 328);
            }
            cnhMeAlN4++;
        };
    }
    for (cnhMeAlN4 = (193 - 193); cnhMeAlN4 < a; cnhMeAlN4++) {
        m = strlen (j_shu[cnhMeAlN4]);
        {
            t = 0;
            s = 0;
            while (s < m) {
                if (shu[cnhMeAlN4][s] == 0 && t == 0)
                    continue;
                else {
                    if (shu[cnhMeAlN4][s] == 0)
                        printf ("0");
                    else {
                        printf ("%d", shu[cnhMeAlN4][s]);
                        t++;
                    };
                }
                s++;
            };
        }
        if (t == 0)
            printf ("0");
        printf ("\n", m);
    };
}

