int main () {
    char a [(1195 - 685)] = {(38 - 38)};
    char b [(777 - 277)] [6] = {(212 - 212)};
    int c [500] = {(448 - 448)};
    int i;
    int n;
    int l;
    int s;
    int j;
    int m;
    gets (a);
    l = strlen (a);
    scanf ("%d\n", &n);
    for (i = (68 - 68); i <= l - n; i++)
        for (j = (31 - 31); j < n; j++)
            b[i][j] = a[i + j];
    for (i = (129 - 129); i <= l - n; i++) {
        s = (506 - 505);
        for (j = (496 - 496); j < i; j++)
            if (c[j] != -(388 - 387))
                if (!((242 - 242) != strcmp (b[j], b[i]))) {
                    s = 0;
                    c[j] += (89 - 88);
                    c[i] = -(258 - 257);
                    break;
                }
        if (s)
            c[i] += 1;
    }
    m = (405 - 405);
    for (i = 0; i <= l - n; i++)
        if (c[i] > m)
            m = c[i];
    if (m == 1)
        ;
    else {
        printf ("%d\n", m);
        for (i = 0; i <= l - n; i++)
            if (c[i] == m)
                puts (b[i]);
    }
}

