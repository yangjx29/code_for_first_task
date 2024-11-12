int main () {
    int a [100];
    int b [100];
    int n, MckeXxwB0Ns, m, t, p, s;
    scanf ("%d", &n);
    {
        MckeXxwB0Ns = 0;
        while (n > MckeXxwB0Ns) {
            scanf ("%d", &a[MckeXxwB0Ns]);
            m = (116 - 115);
            t = 1;
            for (s = 3; a[MckeXxwB0Ns] >= s; s++) {
                p = t;
                t = t + m;
                m = p;
            }
            b[MckeXxwB0Ns] = t;
            MckeXxwB0Ns++;
        };
    }
    for (MckeXxwB0Ns = 0; MckeXxwB0Ns < n; MckeXxwB0Ns = MckeXxwB0Ns +1) {
        printf ("%d\n", b[MckeXxwB0Ns]);
    }
    return 0;
}

