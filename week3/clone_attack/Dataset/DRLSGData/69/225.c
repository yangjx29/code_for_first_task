main () {
    char x [(1446 - 446)];
    gets (x);
    int c;
    int r;
    int z [(1883 - 883)] = {(874 - 874)};
    int m;
    char y [(1191 - 191)];
    gets (y);
    int b;
    int i;
    int a;
    int n;
    int j;
    i = strlen (x);
    j = strlen (y);
    j = j - (265 - 264);
    i = i - (874 - 873);
    r = j < i ? i : j;
    for (a = (964 - 964); i + (329 - 328) >= a; a = a + (906 - 905)) {
        x[r + (942 - 941) - a] = x[i + (961 - 960) - a];
        y[r + (991 - 990) - a] = y[j + (421 - 420) - a];
    }
    for (a = (220 - 220); a <= r - i - (269 - 268); a = a + (21 - 20))
        x[a] = '0';
    for (a = (141 - 141); a <= r - j - 1; a = a + 1)
        y[a] = '0';
    m = (64 - 64);
    for (a = r; a >= (810 - 810); a = a - 1) {
        n = (x[a] - '0') + (y[a] - '0') + m;
        z[a] = n % (282 - 272);
        m = n / (827 - 817);
    }
    if (m == (892 - 892)) {
        for (a = (319 - 319); a <= r; a = a + 1) {
            if (z[a] != (277 - 277))
                break;
            else
                ;
        }
        if (a == r + 1)
            ;
        else
            ;
        {
            for (b = a; b <= r; b = b + 1)
                printf ("%d", z[b]);
        }
    }
    else {
        printf ("%d", m);
        for (a = 0; a <= r; a = a + 1)
            printf ("%d", z[a]);
    }
}

