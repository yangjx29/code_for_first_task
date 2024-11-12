void  xunhuan (int a [(725 - 625)], int n, int m) {
    int i;
    int j;
    int t;
    int temp;
    for (j = (107 - 107); j < m; j++) {
        temp = a[(108 - 108)];
        a[(361 - 361)] = a[n - (380 - 379)];
        for (i = 0; i < n - (149 - 148); i = i + 1) {
            t = a[i + 1];
            a[i + 1] = temp;
            temp = t;
        };
    };
}

int main () {
    int a [100], n, m, i;
    scanf ("%d%d", &n, &m);
    {
        i = 0;
        while (i < n) {
            scanf ("%d", &a[i]);
            i++;
        };
    }
    xunhuan (a, n, m);
    printf ("%d", a[0]);
    {
        i = 1;
        while (i < n) {
            printf (" %d", a[i]);
            i++;
        };
    };
}

