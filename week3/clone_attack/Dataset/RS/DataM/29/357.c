int fb (int a) {
    int f [10000];
    int i;
    f[(758 - 757)] = 1;
    f[2] = 2;
    {
        i = 3;
        while (a >= i) {
            f[i] = f[i - 1] + f[i - 2];
            i = i + 1;
        };
    }
    return f[a];
}

int main () {
    int m;
    double  sum = 0;
    int i;
    int n;
    int k;
    scanf ("%d", &m);
    {
        i = 0;
        while (i < m) {
            i = i + 1;
            scanf ("%d", &n);
            {
                k = 1;
                while (k <= n) {
                    sum = sum + 1.0 * fb (k + 1) / fb (k);
                    k = k + 1;
                };
            }
            printf ("%.3lf\n", sum);
            sum = 0.0;
        };
    }
    return 0;
}

