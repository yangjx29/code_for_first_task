int main () {
    char a [500];
    char b [500] [5];
    int m;
    int n;
    int i;
    int j;
    int c [500];
    int max;
    max = 0;
    scanf ("%d", &n);
    scanf ("%s", a);
    for (i = 0; a[i + n - 1]; i = i + 1) {
        m = i + n - 1;
        for (j = 0; j < n; j = j + 1)
            b[i][j] = a[i + j];
    }
    for (i = 0; i < m - n + 2; i = i + 1) {
        c[i] = 0;
        for (j = i + 1; j < m - n + 2; j = j + 1) {
            int t;
            int k;
            t = 0;
            {
                k = 0;
                while (k < n) {
                    if (b[i][k] == b[j][k])
                        t++;
                    k = k + 1;
                };
            }
            if (t == n)
                c[i] = c[i] + 1;
        };
    }
    for (i = 0; i < m - n + 2; i = i + 1) {
        if (max <= c[i])
            max = c[i];
    }
    if (max > 0) {
        printf ("%d\n", max + 1);
        {
            i = 0;
            while (i < m - n + 2) {
                if (max == c[i]) {
                    for (j = 0; j < n; j++)
                        printf ("%c", b[i][j]);
                    printf ("\n");
                }
                i = i + 1;
            };
        };
    }
    else
        printf ("NO");
    return 0;
}

