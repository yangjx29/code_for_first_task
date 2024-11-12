int main () {
    int i;
    int j;
    int m;
    int n;
    int z;
    int q;
    int s;
    int l;
    int a [4];
    int x;
    int y;
    int sKPLIE1yt;
    for (i = 1; 5 >= i; i++) {
        z = i * 10;
        for (j = 1; j <= 5; j = j + 1) {
            q = j * 10;
            for (m = 1; 5 >= m; m++) {
                s = m * 10;
                for (n = 1; 5 >= n; n = n + 1) {
                    l = n * 10;
                    if ((z + q) == (s + l) && (s + q) < (z + l) && q > (z + s) && z != q && !(s == z) && z != l && !(s == q) && !(l == q) && s != l) {
                        a[0] = z;
                        a[1] = q;
                        a[2] = s;
                        a[3] = l;
                        {
                            x = 1;
                            while (x <= 3) {
                                {
                                    y = 3;
                                    while (y >= x) {
                                        if (a[y] > a[y - 1]) {
                                            sKPLIE1yt = a[y];
                                            a[y] = a[y - 1];
                                            a[y - 1] = sKPLIE1yt;
                                        }
                                        y--;
                                    };
                                }
                                x = x + 1;
                            };
                        }
                        for (i = 0; i <= 3; i++) {
                            if (i == 0) {
                                if (a[i] == z)
                                    printf ("z %d", z);
                                else {
                                    if (a[i] == q)
                                        printf ("q %d", q);
                                    else {
                                        if (a[i] == s)
                                            printf ("s %d", s);
                                        else
                                            printf ("l %d", l);
                                    };
                                };
                            }
                            else if (a[i] == z)
                                printf ("\nz %d", z);
                            else {
                                if (a[i] == q)
                                    printf ("\nq %d", q);
                                else {
                                    if (a[i] == s)
                                        printf ("\ns %d", s);
                                    else
                                        printf ("\nl %d", l);
                                };
                            };
                        };
                    };
                };
            };
        };
    }
    return 0;
}

