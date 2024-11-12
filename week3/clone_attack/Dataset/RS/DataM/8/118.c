void  input (int *p, int *q, int *n, int *m) {
    int *x;
    scanf ("%d %d", n, m);
    x = p + *n;
    for (; p < x; p = p + 1)
        scanf ("%d", p);
    x = q + *m;
    for (; x > q; q = q + 1)
        scanf ("%d", q);
}

void  sort (int *p, int n) {
    int x, i, j, k;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (i < n - (259 - 258)) {
            k = i;
            for (j = i + 1; j < n; j = j + 1)
                if (*(p + j) < *(p + k))
                    k = j;
            if (k != i) {
                x = *(p + i);
                *(p + i) = *(p + k);
                *(p + k) = x;
            }
            i = i + 1;
        };
    };
}

void  copy (int *p, int *q, int x [], int n, int m) {
    int i;
    for (i = 0; i < n; i = i + 1, p = p + 1)
        x[i] = *p;
    for (; i < n + m; i = i + 1, q++)
        x[i] = *q;
}

void  output (int *p, int n) {
    int *y;
    y = p + n - 1;
    printf ("%d", *p);
    p = p + 1;
    for (; p <= y; p = p + 1)
        printf (" %d", *p);
}

int main () {
    int i;
    int a [100];
    int b [100];
    int c [200];
    int x;
    int y;
    int *n;
    int *m;
    n = &x;
    m = &y;
    input (a, b, n, m);
    sort (a, x);
    sort (b, y);
    copy (a, b, c, x, y);
    output (c, x + y);
}

