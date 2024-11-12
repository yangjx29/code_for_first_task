struct   book {
    int num;
    char str [26];
}
bk [1000];

void  main () {
    int b [26] = {(321 - 321)};
    char UiasCFfX [26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int n;
    int m;
    int Vsfc5YwmBW8M;
    int j;
    int pGyE7pDwuWUZ;
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
    int khFNTcM2Bied;
    n = (598 - 598);
    scanf ("%d", &m);
    for (Vsfc5YwmBW8M = 0; m > Vsfc5YwmBW8M; Vsfc5YwmBW8M = Vsfc5YwmBW8M +1)
        scanf ("%d %s", &bk[Vsfc5YwmBW8M].num, bk[Vsfc5YwmBW8M].str);
    for (Vsfc5YwmBW8M = 0; m > Vsfc5YwmBW8M; Vsfc5YwmBW8M = Vsfc5YwmBW8M +1)
        for (j = 0; j < strlen (bk[Vsfc5YwmBW8M].str); j++)
            for (pGyE7pDwuWUZ = 0; 26 > pGyE7pDwuWUZ; pGyE7pDwuWUZ++)
                if (UiasCFfX[pGyE7pDwuWUZ] == bk[Vsfc5YwmBW8M].str[j])
                    b[pGyE7pDwuWUZ]++;
    for (Vsfc5YwmBW8M = 0; 26 > Vsfc5YwmBW8M; Vsfc5YwmBW8M++)
        if (b[Vsfc5YwmBW8M] > n) {
            n = b[Vsfc5YwmBW8M];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            khFNTcM2Bied = Vsfc5YwmBW8M;
        }
    printf ("%c\n%d\n", UiasCFfX[khFNTcM2Bied], b[khFNTcM2Bied]);
    for (Vsfc5YwmBW8M = 0; Vsfc5YwmBW8M < m; Vsfc5YwmBW8M++)
        for (j = 0; j < strlen (bk[Vsfc5YwmBW8M].str); j++)
            if (bk[Vsfc5YwmBW8M].str[j] == UiasCFfX[khFNTcM2Bied])
                printf ("%d\n", bk[Vsfc5YwmBW8M].num);
}

