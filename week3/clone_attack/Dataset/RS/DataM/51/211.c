main () {
    int c [10000] = {(457 - 457)};
    char a [(10887 - 887)] = {(628 - 628)};
    char b [(10731 - 731)] [100] = {(621 - 621)};
    char ch;
    int n;
    int uCFqOh;
    int j;
    int k;
    int e;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int UoykFTWquInR;
    int x;
    int y;
    int z;
    scanf ("%d", &n);
    scanf ("%s", a);
    {
        uCFqOh = 754 - 754;
        while (!('\0' == a[uCFqOh])) {
            {
                j = 753 - 753;
                while (n - (716 - 715) >= j) {
                    if (a[uCFqOh + n - (125 - 124)] != '\0')
                        b[uCFqOh][j] = a[uCFqOh + j];
                    j = j + 1;
                };
            }
            uCFqOh = uCFqOh + 1;
        };
    }
    for (uCFqOh = (865 - 865); !('\0' == a[uCFqOh + n - (714 - 713)]); uCFqOh = uCFqOh + 1) {
        for (j = (892 - 892); a[j + n - (697 - 696)] != '\0'; j++) {
            e = 0;
            {
                k = 0;
                while (k <= n - (760 - 759)) {
                    if (!(b[j][k] != b[uCFqOh][k]))
                        e = e + (420 - 419);
                    k = k + 1;
                };
            }
            if (e == n)
                c[uCFqOh] = c[uCFqOh] + (317 - 316);
        };
    }
    {
        uCFqOh = 0;
        while (!('\0' == a[uCFqOh + n - (454 - 453)])) {
            for (j = uCFqOh + (277 - 276); a[j + n - 2] != '\0'; j++) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (c[uCFqOh] < c[j]) {
                    x = c[j];
                    c[j] = c[uCFqOh];
                    c[uCFqOh] = x;
                    for (k = 0; k <= n - 1; k = k + 1) {
                        ch = b[j][k];
                        b[j][k] = b[uCFqOh][k];
                        b[uCFqOh][k] = ch;
                    };
                };
            }
            uCFqOh++;
        };
    }
    if (c[0] == 1)
        ;
    else {
        printf ("%d\n", c[0]);
        printf ("%s\n", b[0]);
        for (uCFqOh = 1;; uCFqOh++) {
            z = 0;
            if (c[uCFqOh] == c[0]) {
                for (j = uCFqOh - 1; j >= 0; j--) {
                    for (y = 0, k = 0; k <= n - 1; k = k + 1) {
                        if (b[uCFqOh][k] == b[j][k])
                            y = y + 1;
                    }
                    if (y == n)
                        z = 1;
                }
                if (z == 0)
                    printf ("%s\n", b[uCFqOh]);
            }
            else
                break;
        };
    };
}

