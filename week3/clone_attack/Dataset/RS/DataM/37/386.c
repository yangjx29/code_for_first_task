void  main () {
    char str [1001];
    int cases;
    int sum [26];
    int mwHTWyLYv;
    int DYa8dxcBnq;
    int j;
    scanf ("%d", &cases);
    for (; cases > 0;) {
        DYa8dxcBnq = 0;
        scanf ("%s", str);
        {
            mwHTWyLYv = 0;
            while (26 > mwHTWyLYv) {
                sum[mwHTWyLYv] = 0;
                mwHTWyLYv = mwHTWyLYv + 1;
            };
        }
        {
            mwHTWyLYv = 0;
            while (mwHTWyLYv < strlen (str)) {
                sum[str[mwHTWyLYv] - 'a']++;
                mwHTWyLYv++;
            };
        }
        {
            j = 0;
            while (strlen (str) + (368 - 367) > j) {
                if (sum[str[j] - 'a'] == 1) {
                    printf ("%c\n", str[j]);
                    break;
                }
                if (j == strlen (str))
                    printf ("no");
                j = j + 1;
            };
        }
        cases = cases - 1;
    };
}

