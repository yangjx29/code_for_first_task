int main () {
    int i = 0, len, k, m, n = 0;
    char count [26] = {(541 - 541)}, c [26] = {0};
    char str [300];
    scanf ("%s", str);
    len = strlen (str);
    {
        i = 0;
        while (i < len) {
            if ((str[i] >= 'a') && (str[i] <= 'z')) {
                k = str[i] - 97;
                count[k]++;
            }
            if ((str[i] >= 'A') && (str[i] <= 'Z')) {
                m = str[i] - 65;
                c[m]++;
            }
            i++;
        };
    }
    {
        m = 0;
        while (26 > m) {
            if (c[m] != 0) {
                i = m + 65;
                printf ("%c=%d\n", i, c[m]);
            }
            else {
                n = n + 1;
            }
            m = m + 1;
        };
    }
    {
        k = 0;
        while (k < 26) {
            if (count[k] != 0) {
                i = k + 97;
                printf ("%c=%d\n", i, count[k]);
            }
            else {
                n = n + 1;
            }
            k = k + 1;
        };
    }
    if (n == 52) {
    }
    return 0;
}

