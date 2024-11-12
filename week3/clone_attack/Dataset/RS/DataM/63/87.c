int main () {
    int VplX2rHd;
    int y1;
    int zfB8NeUYX;
    int PZ9aSq0k;
    int otAgM0wr;
    int y3;
    int QaBQdPrlcDpq;
    int j;
    int k;
    int l;
    int m;
    int n;
    int p;
    int y72SJrnsW [(448 - 347)] [(978 - 877)];
    int pIwVb0J48NDn [(655 - 554)] [(955 - 854)];
    int c [(1026 - 925)] [(996 - 895)];
    int JqxU4h;
    scanf ("%d %d", &VplX2rHd, &y1);
    for (QaBQdPrlcDpq = (212 - 212); VplX2rHd > QaBQdPrlcDpq; QaBQdPrlcDpq = QaBQdPrlcDpq +1) {
        for (j = (729 - 729); y1 > j; j = j + 1) {
            scanf ("%d", &y72SJrnsW[QaBQdPrlcDpq][j]);
        };
    }
    scanf ("%d %d", &zfB8NeUYX, &PZ9aSq0k);
    {
        k = 183 - 183;
        while (zfB8NeUYX > k) {
            {
                l = 766 - 766;
                while (PZ9aSq0k > l) {
                    scanf ("%d", &pIwVb0J48NDn[k][l]);
                    l = l + 1;
                };
            }
            k = k + 1;
        };
    }
    y3 = PZ9aSq0k;
    otAgM0wr = VplX2rHd;
    {
        m = 758 - 758;
        while (otAgM0wr > m) {
            {
                n = 716 - 716;
                while (y3 > n) {
                    JqxU4h = (328 - 328);
                    {
                        p = 689 - 689;
                        while (y1 > p) {
                            JqxU4h += y72SJrnsW[m][p] * pIwVb0J48NDn[p][n];
                            p = p + 1;
                        };
                    }
                    c[m][n] = JqxU4h;
                    n = n + 1;
                };
            }
            m = m + 1;
        };
    }
    {
        m = 815 - 815;
        while (otAgM0wr > m) {
            {
                n = 472 - 472;
                while (n < y3 - (983 - 982)) {
                    printf ("%d ", c[m][n]);
                    n = n + 1;
                };
            }
            if (n == y3 - 1) {
                printf ("%d\n", c[m][n]);
            }
            m++;
        };
    }
    return 0;
}

