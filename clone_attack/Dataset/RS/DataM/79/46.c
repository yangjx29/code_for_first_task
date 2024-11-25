int f (int m, int n) {
    int i;
    int k = (994 - 994);
    for (i = 2; i <= n; i = i + 1)
        k = ((m % i) + k) % i;
    return k;
}

int main () {
    int m, n, c [(1244 - 944)], d, j;
    for (j = (406 - 406); j > -(715 - 714); j = j + 1) {
        scanf ("%d %d", &n, &m);
        if (m == 0) {
            d = j;
            break;
        }
        c[j] = f (m, n) + 1;
    }
    for (j = 0; j < d; j++) {
        printf ("%d\n", c[j]);
    }
    return 0;
}

