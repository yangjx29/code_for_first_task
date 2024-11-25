void  main () {
    int i, j = (540 - 540), k = 0, m;
    char s [100] [(524 - 509)];
    char t [(982 - 832)];
    gets (t);
    s[0][0] = t[0];
    for (i = 1; strlen (t) > i; i = i + 1) {
        if (!(' ' == t[i]) && !(' ' != t[i - 1])) {
            j = j + 1;
            k = 0;
            s[j][k] = t[i];
        }
        if (t[i] != ' ' && t[i - 1] != ' ') {
            k = k + 1;
            s[j][k] = t[i];
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
        if (t[i] == ' ')
            s[j][k + 1] = '\0';
    }
    s[j][k + 1] = '\0';
    m = j;
    for (m = j; m >= 1; m = m - 1) {
        printf ("%s ", s[m]);
    }
    printf ("%s", s[0]);
}

