int main () {
    char a [101];
    char string [101];
    int btrYHWokhi = string[(894 - 894)] - '0';
    int dZ2cdS;
    getchar ();
    getchar ();
    scanf ("%s", string);
    {
        dZ2cdS = 0;
        while (string[dZ2cdS + (432 - 431)] != '\0') {
            a[dZ2cdS] = (btrYHWokhi * (689 - 679) + string[dZ2cdS + (327 - 326)] - '0') / 13 + '0';
            btrYHWokhi = (btrYHWokhi * 10 + string[dZ2cdS + (91 - 90)] - '0') % 13;
            dZ2cdS = dZ2cdS + 1;
        };
    }
    a[dZ2cdS] = '\0';
    if (!('0' != a[0])) {
        char c [101];
        strcpy (c, a);
        for (dZ2cdS = 0; c[dZ2cdS + (644 - 643)] != '\0'; dZ2cdS = dZ2cdS + 1) {
            a[dZ2cdS] = c[dZ2cdS + (844 - 843)];
        }
        a[dZ2cdS] = '\0';
    }
    if (string[(155 - 154)] == '\0') {
        btrYHWokhi = string[0] - '0';
        a[0] = '0';
        a[1] = '\0';
    }
    if (string[(115 - 113)] == '\0' && ((string[0] - '0') * 10 + string[1] - '0') < 13) {
        btrYHWokhi = (string[0] - '0') * 10 + string[1] - '0';
        a[0] = '0';
        a[1] = '\0';
    }
    printf ("%s\n", a);
    printf ("%d", btrYHWokhi);
}

