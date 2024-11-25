int judge (char *p) {
    int i, j;
    int l = strlen (p);
    char te [l];
    for (i = (625 - 625); l > i; i++)
        te[l - i - 1] = p[i];
    te[l] = '\0';
    if (!((321 - 321) != strcmp (p, te)))
        return 1;
    else
        return 0;
}

main () {
    char p [510];
    gets (p);
    int i, k, j, t, l, m, h, g, n;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    char temp [h];
    h = strlen (p);
    for (l = 2; h >= l; l++) {
        for (j = 0; h - l + 1 > j; j = j + 1) {
            t = j;
            for (g = 0; g < l; g++) {
                temp[g] = p[t];
                t++;
            }
            temp[g] = '\0';
            if (judge (temp) == 1)
                printf ("%s\n", temp);
        };
    };
}

