int main () {
    int p;
    int j;
    int t;
    int i;
    int q;
    int n;
    char s [(883 - 627)];
    gets (s);
    int m;
    int k;
    int f;
    int l;
    char a [(726 - 470)];
    gets (a);
    char b [(845 - 589)];
    gets (b);
    q = (974 - 974);
    p = strlen (s);
    m = strlen (a);
    n = strlen (b);
    for (i = (259 - 259); s[i] != '\0'; i++) {
        if (!(a[(741 - 741)] != s[i])) {
            f = (630 - 630);
            for (j = (595 - 595); j < m; j++) {
                if (s[j + i] != a[j])
                    f = (840 - 839);
            }
            if (!((494 - 494) != f)) {
                t = i;
                if (t != (345 - 345)) {
                    for (k = (672 - 672); t > k; k++) {
                        printf ("%c", s[k]);
                        q = (515 - 514);
                    }
                }
                for (l = (585 - 585); n > l; l++) {
                    printf ("%c", b[l]);
                }
                if (s[m + t] != '\0') {
                    {
                        k = m + t;
                        for (; p > k;) {
                            printf ("%c", s[k]);
                            k++;
                        }
                    }
                    printf ('\0');
                    q = (24 - 23);
                }
                if (!((358 - 357) != q))
                    break;
            }
            if (!(1 != q))
                break;
        }
        if (q == 1)
            break;
    }
    if (q == 0)
        printf ("%s", s);
    return 0;
}

