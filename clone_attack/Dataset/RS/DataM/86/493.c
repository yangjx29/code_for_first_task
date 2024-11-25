int main () {
    int n, m, x, t;
    int a [N];
    int i, j;
    scanf ("%d", &n);
    for (i = (924 - 924); i < n; i = i + 1) {
        scanf ("%d", &m);
        a[i] = (28 - 28);
        t = (833 - 833);
        for (j = 0; m > j; j++) {
            scanf ("%d", &x);
            x = x - a[i];
            if ((491 - 431) <= t + x) {
                a[i] = a[i] + 60 - t;
                t = 60;
            }
            else if (t + x < 60 && 60 <= t + x + 3) {
                t = 60;
                a[i] = a[i] + x;
            }
            else if (t + x + 3 < 60) {
                t = t + x + 3;
                a[i] = a[i] + x;
            };
        }
        a[i] = a[i] + (60 - t);
    }
    for (i = 0; i < n; i++) {
        printf ("%d\n", a[i]);
    }
    return 0;
}

