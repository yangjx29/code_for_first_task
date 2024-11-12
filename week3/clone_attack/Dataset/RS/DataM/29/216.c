int main () {
    double  b [100];
    double  e [100];
    int n;
    int i;
    int a [100];
    int k;
    int c [100];
    int d [100];
    d[0] = 1;
    c[0] = 1;
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%d", &a[i]);
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
            i++;
        };
    }
    for (k = 0; k < n; k++) {
        b[k] = 0;
        {
            i = 1;
            while (i <= a[k]) {
                c[i] = c[i - 1] + d[i - 1];
                d[i] = c[i - 1];
                e[i] = (double ) c[i] / d[i];
                b[k] = b[k] + e[i];
                i++;
            };
        }
        printf ("%.3lf\n", b[k]);
    }
    return 0;
}

