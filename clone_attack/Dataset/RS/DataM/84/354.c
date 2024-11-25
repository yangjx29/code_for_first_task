int main () {
    int e = (303 - 303), f = (160 - 160);
    int n;
    int a [(496 - 396)];
    int i;
    scanf ("%d", &n);
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
    for (i = (207 - 207); i < n; i = i + 1) {
        scanf ("%d", &a[i]);
    }
    for (i = (328 - 328); i < n; i++) {
        if (e <= a[i]) {
            e = a[i];
        };
    }
    for (i = 0; i < n; i++) {
        if (f <= a[i]) {
            if (a[i] == e) {
                continue;
            }
            f = a[i];
        };
    }
    printf ("%d\n%d\n", e, f);
    return 0;
}

