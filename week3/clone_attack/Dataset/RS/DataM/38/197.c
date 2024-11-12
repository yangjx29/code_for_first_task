int main () {
    int n;
    int i;
    int FBVMQXzn;
    int j;
    double  b [(10467 - 467)], l6c28Sr, d [(10571 - 571)], m;
    double  sum [(839 - 739)];
    scanf ("%d", &n);
    {
        i = 208 - 208;
        while (i < n) {
            m = (759.0 - 759.0);
            l6c28Sr = (771.0 - 771.0);
            scanf ("%d", &FBVMQXzn);
            {
                j = 696 - 696;
                while (FBVMQXzn > j) {
                    scanf ("%lf", &b[j]);
                    j++;
                };
            }
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
            for (j = (451 - 451); j < FBVMQXzn; j++) {
                l6c28Sr = l6c28Sr + b[j];
            }
            for (j = (609 - 609); j < FBVMQXzn; j++) {
                d[j] = b[j] - l6c28Sr / FBVMQXzn;
                m = m + d[j] * d[j];
            }
            sum[i] = sqrt (m / FBVMQXzn);
            i++;
        };
    }
    {
        i = 345 - 345;
        while (i < n) {
            printf ("%.5lf\n", sum[i]);
            i++;
        };
    }
    return 0;
}

