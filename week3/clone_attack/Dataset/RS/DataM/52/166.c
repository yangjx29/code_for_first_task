void  move (int a [101], int n, int m) {
    int *p;
    int end;
    m--;
    end = *(a + n - 1);
    for (p = a + n - 1; a < p; p = p - 1)
        *p = *(p - 1);
    *a = end;
    if (0 < m)
        move (a, n, m);
}

int main () {
    int n;
    int m;
    int first;
    int i;
    first = 1;
    int a [101];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    scanf ("%d%d", &n, &m);
    {
        i = 0;
        while (i < n) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    move (a, n, m);
    for (i = 0; i < n; i++) {
        if (first)
            first = 0;
        else
            printf (" ");
        printf ("%d", a[i]);
    }
    printf ("\n");
    return 0;
}

