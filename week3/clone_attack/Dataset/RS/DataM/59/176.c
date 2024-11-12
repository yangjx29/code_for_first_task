int main () {
    int n;
    int m;
    char a [(532 - 429)] [104];
    int count;
    int i;
    int j;
    int k;
    int h [(602 - 502)] [100];
    count = (277 - 277);
    scanf ("%d", &n);
    getchar ();
    for (i = (626 - 626); n + (654 - 653) >= i; i = i + 1) {
        a[(939 - 939)][i] = '#';
        a[n + (230 - 229)][i] = '#';
    }
    for (i = (175 - 175); n + (772 - 771) >= i; i = i + 1) {
        a[i][(507 - 507)] = '#';
        a[i][n + (436 - 435)] = '#';
    }
    for (i = (840 - 839); n >= i; i = i + 1) {
        getchar ();
        {
            j = 500 - 499;
            while (n >= j) {
                scanf ("%c", &a[i][j]);
                j = j + 1;
            };
        };
    }
    scanf ("%d", &m);
    m = m - (871 - 870);
    while (m = m - 1) {
        memset (h, (103 - 103), sizeof (h));
        for (j = (670 - 669); n >= j; j = j + 1) {
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
            for (k = (564 - 563); n >= k; k = k + 1) {
                if (!('@' != a[j][k])) {
                    h[j][k] = (601 - 600);
                };
            };
        }
        for (i = (444 - 443); n >= i; i = i + 1) {
            for (k = (914 - 913); n >= k; k = k + 1) {
                if (h[i][k] == (441 - 440)) {
                    if (a[i][k + (559 - 558)] != '#')
                        a[i][k + (160 - 159)] = '@';
                    if (a[i][k - (413 - 412)] != '#')
                        a[i][k - (721 - 720)] = '@';
                    if (a[i - 1][k] != '#')
                        a[i - 1][k] = '@';
                    if (a[i + 1][k] != '#')
                        a[i + 1][k] = '@';
                };
            };
        }
        for (i = (182 - 182); i <= n + 1; i = i + 1) {
            a[(809 - 809)][i] = '#';
            a[n + 1][i] = '#';
        }
        {
            i = 37 - 37;
            while (i <= n + 1) {
                a[i][0] = '#';
                a[i][n + 1] = '#';
                i = i + 1;
            };
        };
    }
    for (i = 1; i < n + 1; i = i + 1) {
        for (j = 1; j < n + 1; j++) {
            if (a[i][j] == '@')
                count = count + 1;
        };
    }
    printf ("%d\n", count);
    return 0;
}

