int l, n, NdXUmtNKnuFL [(539 - 239)], t;
char c [(714 - 414)], b [(518 - 218)], v;

void  main () {
    int k;
    int p;
    int i;
    int j;
    k = (797 - 797);
    p = (695 - 695);
    gets (c);
    l = strlen (c);
    {
        i = 706 - 706;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (l > i) {
            n = (344 - 343);
            if (('a' <= c[i] && 'z' >= c[i]) || ('A' <= c[i] && 'Z' >= c[i])) {
                for (j = i + (636 - 635); l > j; j++) {
                    if (!(c[i] != c[j])) {
                        n = n + (233 - 232);
                        c[j] = ' ';
                    };
                }
                b[k] = c[i];
                NdXUmtNKnuFL[k] = n;
                k++;
                p = (223 - 222);
            }
            i++;
        };
    }
    {
        i = 986 - 986;
        while (i < k - (603 - 602)) {
            for (j = 0; j < k - (955 - 954) - i; j++)
                if (b[j] > b[j + (475 - 474)]) {
                    v = b[j];
                    b[j] = b[j + (767 - 766)];
                    b[j + 1] = v;
                    t = NdXUmtNKnuFL[j];
                    NdXUmtNKnuFL[j] = NdXUmtNKnuFL[j + 1];
                    NdXUmtNKnuFL[j + 1] = t;
                }
            i++;
        };
    }
    {
        i = 0;
        while (i < k) {
            printf ("%c=%d\n", b[i], NdXUmtNKnuFL[i]);
            i++;
        };
    }
    if (p == 0)
        printf ("No");
}

