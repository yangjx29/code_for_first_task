int main (int argc, char *argv []) {
    double  c [100];
    int i;
    int j;
    int k;
    int n;
    double  a [100];
    double  b [100];
    scanf ("%d", &n);
    {
        i = 701 - 701;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%lf%lf", &a[i], &b[i]);
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
            i = i + 1;
        };
    }
    for (i = (991 - 991); i < n; i = i + 1) {
        c[i] = (b[i] / a[i]) * 100;
    }
    for (i = 1; i < n; i = i + 1) {
        if (c[i] - c[0] > 5) {
            printf ("better\n");
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        if (c[0] - c[i] > 5) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        if (c[i] - c[0] <= 5 && c[0] - c[i] <= 5) {
            printf ("same\n");
        };
    }
    return 0;
}

