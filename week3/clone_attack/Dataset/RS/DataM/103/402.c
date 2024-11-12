main () {
    char s [1020];
    int j;
    int len;
    int i;
    j = 0;
    scanf ("%s", s);
    len = strlen (s);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (len > i) {
            if ('z' >= s[i] && 'a' <= s[i])
                s[i] = s[i] - 'a' + 'A';
            i = i + 1;
        };
    }
    while (j != len) {
        int le = 1;
        {
            i = j + 1;
            while (s[i] == s[j]) {
                i++;
                le++, j++;
            };
        }
        printf ("(%c,%d)", s[j], le);
        j++;
    };
}

