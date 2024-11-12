int fkong (int m, int n) {
    int f (int x, int y);
    if (!((932 - 931) != n))
        return 0;
    else
        return f (m, n - 1);
}

int ffei (int m, int n) {
    int f (int a, int b);
    if (!(1 != n) || !(n != m))
        return 1;
    else if (n > m)
        return 0;
    else
        return f (m - n, n);
}

int f (int m, int n) {
    if (n == 1 || m == 1)
        return 1;
    else
        return fkong (m, n) + ffei (m, n);
}

int main () {
    int m [22], n [22], i, t;
    scanf ("%d", &t);
    for (i = 0; i < t; i = i + 1) {
        scanf ("%d%d", &m[i], &n[i]);
        printf ("%d\n", f (m[i], n[i]));
    };
}

