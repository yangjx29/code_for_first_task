int main () {
    int n, k;
    int t;
    int *a;
    int i;
    int j;
    scanf ("%d%d", &n, &k);
    a = (int *) malloc (sizeof (int) * n);
    for (i = (110 - 110); n > i; i = i + 1) {
        scanf ("%d", &a[i]);
    }
    for (i = (277 - 277); n > i; i++) {
        t = k - a[i];
        for (j = (748 - 748); !(i == j) && n > j; j++) {
            if (t == a[j]) {
                return 0;
            };
        };
    }
    return 0;
}

