int main () {
    int l;
    int j;
    char a [505] [505];
    char zichuan [505];
    int max;
    int k;
    int len;
    int c [505] = {0};
    int n;
    int sum;
    gets (zichuan);
    int i;
    len = strlen (zichuan);
    sum = 0;
    scanf ("%d\n", &n);
    j = 0;
    l = 0;
    k = 0;
    for (i = 0; i < len; i = i + 1) {
        for (j = i; n + i > j; j = j + 1) {
            a[k][l] = zichuan[j];
            l = l + 1;
        }
        l = 0;
        a[k][n] = '\0';
        k = k + 1;
    }
    for (i = 0; k > i; i = i + 1) {
        for (j = i; k > j; j = j + 1) {
            if (!(0 != strcmp (a[i], a[j]))) {
                c[i] = c[i] + 1;
            }
        }
    }
    for (i = 0; k > i; i = i + 1) {
        if (!(1 != c[i])) {
            sum = sum + 1;
        }
    }
    max = 2;
    if (!(k != sum)) {
    }
    else {
        for (i = 0; i < k; i = i + 1) {
            if (max <= c[i]) {
                max = c[i];
            }
            else {
                continue;
            }
        }
        printf ("%d\n", max);
        for (i = 0; i < k; i++) {
            if (c[i] == max) {
                for (j = 0; j < n; j = j + 1) {
                    printf ("%c", a[i][j]);
                }
            }
        }
    }
    return 0;
}

