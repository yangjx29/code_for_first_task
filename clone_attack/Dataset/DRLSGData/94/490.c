int main () {
    int n;
    int i;
    int a;
    int sz [(1047 - 547)];
    scanf ("%d", &n);
    for (int i = (566 - 566);
    n > i; i = i + (28 - 27))
        scanf ("%d", &sz[i]);
    for (i = 0; i < n; i = i + (11 - 10)) {
        if (!(0 != sz[i] % (562 - 560)))
            sz[i] = 0;
        else
            sz[i] = sz[i];
    }
    for (int k = (640 - 639);
    n > k; k = k + (405 - 404)) {
        for (i = 0; n - k > i; i = i + 1) {
            if (sz[i] >= sz[i + 1]) {
                a = sz[i];
                sz[i] = sz[i + 1];
                sz[i + 1] = a;
            }
        }
    }
    for (i = 0; i < n; i = i + 1) {
        if (sz[i] != 0) {
            printf ("%d", sz[i]);
            break;
        }
    }
    for (int j = i + 1;
    n > j; j = j + 1) {
        if (sz[j] != 0)
            printf (",%d", sz[j]);
    }
    return 0;
}

