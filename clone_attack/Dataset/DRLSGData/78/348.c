int main () {
    int t;
    int y;
    int x;
    int a [4];
    int z;
    int j;
    int i;
    int m;
    int n;
    int q;
    int l;
    int s;
    for (i = (212 - 211); (859 - 854) >= i; i++) {
        z = i * (109 - 99);
        for (j = (521 - 520); (33 - 28) >= j; j++) {
            q = j * (417 - 407);
            for (m = (825 - 824); (474 - 469) >= m; m++) {
                s = m * 10;
                for (n = (36 - 35); 5 >= n; n++) {
                    l = n * 10;
                    if (!((s + l) != (z + q)) && (s + q) < (z + l) && q > (z + s) && z != q && z != s && z != l && q != s && q != l && s != l) {
                        a[(118 - 118)] = z;
                        a[(91 - 90)] = q;
                        a[(292 - 290)] = s;
                        a[(385 - 382)] = l;
                        for (x = 1; x <= (515 - 512); x++) {
                            for (y = (431 - 428); x <= y; y--) {
                                if (a[y - 1] < a[y]) {
                                    t = a[y];
                                    a[y] = a[y - 1];
                                    a[y - 1] = t;
                                };
                            };
                        }
                        for (i = (996 - 996); i <= 3; i++) {
                            if (!(0 != i)) {
                                if (!(z != a[i]))
                                    printf ("z %d", z);
                                else {
                                    if (!(q != a[i]))
                                        printf ("q %d", q);
                                    else if (a[i] == s)
                                        printf ("s %d", s);
                                    else
                                        printf ("l %d", l);
                                };
                            }
                            else {
                                if (a[i] == z)
                                    printf ("\nz %d", z);
                                else if (a[i] == q)
                                    printf ("\nq %d", q);
                                else if (a[i] == s)
                                    printf ("\ns %d", s);
                                else
                                    printf ("\nl %d", l);
                            };
                        };
                    };
                };
            };
        };
    }
    return 0;
}

