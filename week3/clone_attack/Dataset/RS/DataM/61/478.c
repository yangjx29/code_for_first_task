int main () {
    int a [999], b [999], c [999], i, k, n, d [999];
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%d", &d[i]);
            a[i] = 1;
            b[i] = 1;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (d[i] >= 3) {
                {
                    k = 3;
                    while (k <= d[i]) {
                        k++;
                        c[i] = a[i] + b[i];
                        a[i] = b[i];
                        b[i] = c[i];
                    };
                }
                printf ("%d\n", c[i]);
            }
            else {
                printf ("1");
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    return 0;
}

