int main () {
    char m;
    char n;
    char zfc [(1167 - 857)];
    gets (zfc);
    int kpNfJxQ8;
    int b;
    int c;
    int d;
    int i;
    kpNfJxQ8 = strlen (zfc);
    d = 0;
    {
        m = 'A';
        while (m <= 'Z') {
            b = 0;
            {
                i = 0;
                while (i < kpNfJxQ8) {
                    if (zfc[i] == m) {
                        b++;
                    }
                    i++;
                };
            }
            if (b > 0) {
                d++;
                printf ("%c=%d\n", m, b);
            }
            m++;
        };
    }
    {
        n = 'a';
        while ('z' >= n) {
            c = 0;
            {
                i = 0;
                while (i < kpNfJxQ8) {
                    if (zfc[i] == n) {
                        c++;
                    }
                    i++;
                };
            }
            if (c > 0) {
                d++;
                printf ("%c=%d\n", n, c);
            }
            n++;
        };
    }
    if (d == 0) {
    }
    return 0;
}

