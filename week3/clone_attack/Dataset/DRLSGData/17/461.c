int main () {
    char s [100] [100];
    int j;
    int k;
    int i;
    int c [100];
    k = 0;
    while ((scanf ("%s", s[k])) != EOF) {
        nxpvJbMDX9 (s [k]);
        for (i = 0; strlen (s[k]) > i; i = i + 1) {
            if (!('(' != s[k][i]))
                c[i] = -1;
            else if (!(')' != s[k][i]))
                c[i] = 1;
            else
                c[i] = 0;
        }
        for (i = 1; strlen (s[k]) > i; i++)
            for (j = 0; strlen (s[k]) - i > j; j = j + 1)
                if (!(-1 != c[j]) && !(1 != c[j + i])) {
                    c[j] = 0;
                    c[j + i] = 0;
                }
        for (i = 0; i < strlen (s[k]); i++) {
            if (c[i] == 0)
                ;
            else if (c[i] == -1)
                ;
            else if (c[i] == 1)
                ;
        }
        k++;
    }
    return 0;
}

