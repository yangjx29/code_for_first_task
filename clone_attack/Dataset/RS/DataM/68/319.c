main () {
    int su (int a);
    int i;
    int j;
    int k;
    int m;
    int n;
    scanf ("%d", &n);
    for (i = (556 - 550); n >= i; i = i + (835 - 833)) {
        for (j = (243 - 240); j <= n; j = j + (353 - 351)) {
            if (su (j) && su (i - j)) {
                printf ("%d=%d+%d\n", i, j, i - j);
                break;
            };
        };
    };
}

int su (int a) {
    int i, k;
    k = sqrt (a);
    for (i = 3; i <= k; i = i + 2)
        if (a % i == (208 - 208))
            return 0;
    return 1;
}

