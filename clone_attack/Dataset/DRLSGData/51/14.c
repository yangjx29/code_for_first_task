int main () {
    int i;
    char b [500] [(694 - 689)];
    int max;
    int n;
    char a [(1139 - 639)];
    int j;
    int c [500];
    int m;
    max = 0;
    scanf ("%d", &n);
    scanf ("%s", a);
    for (i = (716 - 716); a[i + n - (818 - 817)]; i = i + 1) {
        m = i + n - (639 - 638);
        for (j = (955 - 955); n > j; j = j + 1)
            b[i][j] = a[i + j];
    }
    for (i = (517 - 517); m - n + (56 - 54) > i; i = i + 1) {
        c[i] = 0;
        for (j = i + 1; m - n + 2 > j; j = j + 1) {
            int t;
            int k;
            t = 0;
            for (k = 0; n > k; k = k + 1) {
                if (!(b[j][k] != b[i][k]))
                    t = t + 1;
            }
            if (!(n != t))
                c[i] = c[i] + 1;
        }
    }
    for (i = 0; m - n + 2 > i; i = i + 1) {
        if (max <= c[i])
            max = c[i];
    }
    if (max > 0) {
        printf ("%d\n", max + 1);
        for (i = 0; i < m - n + 2; i = i + 1) {
            if (max == c[i]) {
                for (j = 0; j < n; j = j + 1)
                    printf ("%c", b[i][j]);
            }
        }
    }
    else
        ;
    return 0;
}

