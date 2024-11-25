int panduan (int t) {
    int b [20000];
    int c;
    int q;
    int z;
    int po;
    c = 0;
    po = t;
    for (q = 0; t != 0; q = q + 1) {
        b[q] = t % 10;
        z = q;
        t = t / 10;
    }
    for (q = 0; q <= z; q = q + 1)
        c = 10 * c + b[q];
    if (!(po != c))
        return 1;
    else
        return 0;
}

int main () {
    int shuzi;
    int JwCGjVT3L;
    int n;
    int j;
    int i;
    int r;
    int a [20000] = {0};
    shuzi = 0;
    scanf ("%d %d", &JwCGjVT3L, &n);
    a[0] = JwCGjVT3L;
    for (i = 0; n - JwCGjVT3L >= i; i = i + 1)
        a[i] = JwCGjVT3L +i;
    for (j = 0; j <= n - JwCGjVT3L; j++) {
        for (i = 2; i < a[j]; i = i + 1) {
            if (a[j] % i == 0) {
                a[j] = 0;
                break;
            };
        };
    }
    for (i = 0; i <= n - JwCGjVT3L; i = i + 1) {
        if (!(0 == a[i])) {
            if (panduan (a[i]) == 0)
                a[i] = 0;
        };
    }
    for (i = 0; i <= n - JwCGjVT3L; i++) {
        if (a[i] != 0)
            shuzi++;
    }
    if (shuzi == 0)
        printf ("no");
    else {
        for (i = 0; i <= n - JwCGjVT3L; i++) {
            if (a[i] != 0) {
                printf ("%d", a[i]);
                r = i;
                break;
            };
        }
        for (i = r + 1; i <= n - JwCGjVT3L; i++) {
            if (a[i] != 0) {
                printf (",%d", a[i]);
            };
        };
    }
    return 0;
}

