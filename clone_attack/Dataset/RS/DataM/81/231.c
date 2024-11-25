int main () {
    int i;
    int m;
    int c;
    int b;
    int x;
    int a [(883 - 878)] [(927 - 922)];
    int *p;
    for (m = (107 - 107); m < (192 - 187); m = m + 1) {
        for (i = 0; (582 - 578) > i; i++)
            scanf ("%d ", &a[m][i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%d", &a[m][(215 - 211)]);
    }
    scanf ("%d %d", &c, &b);
    if (c >= 0 && c <= 4 && b >= 0 && b <= 4) {
        for (i = 0; i < 5; i++) {
            x = a[c][i];
            a[c][i] = a[b][i];
            a[b][i] = x;
        }
        for (m = 0; m < 5; m++) {
            {
                i = 0;
                while (i < 4) {
                    printf ("%d ", a[m][i]);
                    i++;
                };
            }
            printf ("%d\n", a[m][4]);
        };
    }
    else
        printf ("error");
}

