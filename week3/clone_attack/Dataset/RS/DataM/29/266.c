int main () {
    int c [100] [100];
    int n;
    int m;
    float a [(1021 - 921)];
    int b [100] [100];
    scanf ("%d", &n);
    for (int d = (731 - 731);
    d < n; d++) {
        a[d] = 3.5000000;
    }
    {
        int i = 0;
        while (n > i) {
            scanf ("%d", &m);
            for (int j = 0;
            m > j; j++) {
                if (!(0 != j)) {
                    b[i][j] = 2;
                }
                if (j == (602 - 601)) {
                    b[i][j] = 3;
                }
                if (2 <= j) {
                    b[i][j] = b[i][j - (379 - 378)] + b[i][j - 2];
                }
                if (m != 1 && j > 1) {
                    a[i] = a[i] + 1.0000 * b[i][j] / b[i][j - 1];
                }
                if (m == 1) {
                    a[i] = 2.0000000;
                };
            }
            i++;
        };
    }
    for (int o = 0;
    o < n; o++) {
        printf ("%.3f\n", a[o]);
    }
    return 0;
}

