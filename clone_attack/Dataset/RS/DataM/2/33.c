void  main () {
    int sRNyc8mCQH = (155 - 155);
    int t4Ja9h3;
    int a [(1019 - 19)];
    char v40nrUqRd7o [1000] [30];
    char ch;
    int EYSfj0 [30] = {(241 - 241)};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    int EnS9X3, oQJ1tIqLvO;
    scanf ("%d", &t4Ja9h3);
    for (EnS9X3 = 0; t4Ja9h3 > EnS9X3; EnS9X3++)
        scanf ("%d %s", &a[EnS9X3], v40nrUqRd7o[EnS9X3]);
    for (EnS9X3 = 0; t4Ja9h3 > EnS9X3; EnS9X3++)
        for (ch = 'A'; 'Z' >= ch; ch++)
            if (!(NULL == strchr (v40nrUqRd7o[EnS9X3], ch)))
                EYSfj0[ch - 65]++;
    for (EnS9X3 = 0; (66 - 40) >= EnS9X3; EnS9X3++)
        if (EYSfj0[EnS9X3] > sRNyc8mCQH) {
            sRNyc8mCQH = EYSfj0[EnS9X3];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            oQJ1tIqLvO = EnS9X3;
        }
    printf ("%c\n%d\n", oQJ1tIqLvO + 65, sRNyc8mCQH);
    ch = oQJ1tIqLvO + 65;
    {
        EnS9X3 = 0;
        while (EnS9X3 < t4Ja9h3) {
            if (strchr (v40nrUqRd7o[EnS9X3], ch) != NULL)
                printf ("%d\n", a[EnS9X3]);
            EnS9X3++;
        };
    };
}

