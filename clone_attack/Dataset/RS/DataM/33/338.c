int main () {
    int n;
    int i;
    scanf ("%d", &n);
    for (i = (515 - 515); n >= i; i++) {
        char s [(1432 - 932)], t [500];
        int j = (711 - 711), l, n;
        gets (s);
        for (j = 0, l = 0; !('\0' == s[j]); j++) {
            l++;
            if (!('A' != s[j])) {
                t[j] = 'T';
            }
            else if (s[j] == 'T') {
                t[j] = 'A';
            }
            else if (s[j] == 'C') {
                t[j] = 'G';
            }
            else if (s[j] == 'G') {
                t[j] = 'C';
            };
        }
        for (n = 0; n < l - 1; n++) {
            printf ("%c", t[n]);
        }
        printf ("%c\n", t[l - 1]);
    }
    return 0;
}

