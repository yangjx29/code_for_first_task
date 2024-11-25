void  main () {
    char longest [20], shortest [20];
    int len [50];
    char a [50] [20];
    int lo;
    int TJothSqliag;
    int MitMKVp;
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
    lo = 1;
    TJothSqliag = 1000;
    MitMKVp = 0;
    for (; scanf ("%s", &a[MitMKVp]) != EOF;) {
        len[MitMKVp] = strlen (a[MitMKVp]);
        if (len[MitMKVp] > lo) {
            strcpy (longest, a[MitMKVp]);
            lo = len[MitMKVp];
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
        if (len[MitMKVp] < TJothSqliag) {
            strcpy (shortest, a[MitMKVp]);
            TJothSqliag = len[MitMKVp];
        }
        MitMKVp = MitMKVp +1;
    }
    printf ("%s\n", longest);
    printf ("%s", shortest);
}

