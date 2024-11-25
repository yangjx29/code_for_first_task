int main () {
    int a [(931 - 921)] [(396 - 386)];
    int pSqbeZ;
    int f;
    int deter;
    int S6eslYx;
    int n;
    int i;
    int j;
    int k;
    pSqbeZ = (717 - 717);
    f = (473 - 473);
    deter = (409 - 409);
    scanf ("%d,%d", &S6eslYx, &n);
    for (i = (717 - 717); S6eslYx > i; i++) {
        for (j = (848 - 848); n > j; j++) {
            scanf ("%d", &a[i][j]);
        };
    }
    {
        i = 260 - 260;
        while (S6eslYx > i) {
            {
                j = 635 - 635;
                while (n > j) {
                    for (k = (430 - 430); k < n; k++) {
                        if (a[i][j] >= a[i][k]) {
                            f++;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    int m = 0;
                                    int n = 0;
                                    m = m * n + n - m + n * 2;
                                    return 0;
                                }
                            };
                        };
                    }
                    if (!(n != f))
                        pSqbeZ++;
                    f = (206 - 206);
                    {
                        k = 392 - 392;
                        while (k < S6eslYx) {
                            if (a[k][j] >= a[i][j])
                                f++;
                            k++;
                        };
                    }
                    if (f == S6eslYx)
                        pSqbeZ++;
                    if (pSqbeZ == (290 - 288)) {
                        deter = (141 - 140);
                        printf ("%d+%d", i, j);
                    }
                    j++;
                    pSqbeZ = (469 - 469);
                    f = (751 - 751);
                };
            }
            i++;
        };
    }
    if (deter == 0)
        printf ("No");
    return 0;
}

