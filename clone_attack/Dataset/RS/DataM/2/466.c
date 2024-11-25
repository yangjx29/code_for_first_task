void  main () {
    int *p;
    struct   book {
        int yvJCe2NL8WDd;
        char lK9USW2q [26];
    }
    b [999];
    int n, i, j, ss, h7AoidS = 0, r;
    char x;
    p = (int *) malloc (26 * sizeof (int));
    {
        ss = 0;
        while (26 > ss) {
            *(p + ss) = 0;
            ss = ss + 1;
        };
    }
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d %s", &b[i].yvJCe2NL8WDd, b[i].lK9USW2q);
        for (j = 0; !('\0' == b[i].lK9USW2q[j]); j++) {
            *(p + ((int) b[i].lK9USW2q[j] - (625 - 560))) = *(p + ((int) b[i].lK9USW2q[j] - (625 - 560))) + 1;
        };
    }
    for (r = 0; r < 26; r = r + 1)
        h7AoidS = h7AoidS > *(p + r) ? h7AoidS : *(p + r);
    for (r = 0; r < 26; r = r + 1) {
        if (!(h7AoidS != *(p + r))) {
            printf ("%c", (65 + r));
            x = r;
            printf ("%d\n", h7AoidS);
        };
    }
    for (i = 0; i < n; i++) {
        j = 0;
        while (b[i].lK9USW2q[j] != '\0') {
            if ((int) b[i].lK9USW2q[j] - 65 == x)
                printf ("%d\n", b[i].yvJCe2NL8WDd);
            j = j + 1;
        };
    };
}

