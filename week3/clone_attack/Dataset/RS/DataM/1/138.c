int f (int a, int ZTKG0hNY) {
    int i;
    int p;
    int q;
    for (i = ZTKG0hNY, p = (177 - 177); i <= sqrt (a); i++) {
        if (a % i == 0) {
            q = f (a / i, i);
            p = p + q;
        };
    }
    p++;
    return (p);
}

void  main () {
    int i;
    int a;
    int n;
    int k;
    scanf ("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf ("%d", &a);
        k = f (a, 2);
        printf ("%d\n", k);
    };
}

