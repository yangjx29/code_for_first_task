double  F (int n) {
    int i;
    int a [100];
    a[(81 - 81)] = (306 - 305);
    a[1] = 2;
    {
        i = 2;
        while (n - 1 >= i) {
            a[i] = a[i - 1] + a[i - 2];
            i = i + 1;
        };
    }
    return a[n - 1];
}

int main () {
    int m;
    int n;
    int i, j;
    double  s, t;
    scanf ("%d", &m);
    for (i = 1; i <= m; i++) {
        s = 0;
        scanf ("%d", &n);
        for (j = 1; j <= n; j = j + 1) {
            t = F (j + 1) / F (j);
            s = s + t;
        }
        printf ("%.3lf\n", s);
    }
    return 0;
}

