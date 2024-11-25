int main () {
    int a;
    int b;
    double  max;
    max = 0;
    int n;
    int i;
    int j;
    int k;
    float x [(527 - 507)];
    float y [20];
    float z [20];
    float d [20] [20] = {0};
    double  count;
    count = 0;
    scanf ("%d", &n);
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n) {
            scanf ("%f%f%f", &x[i], &y[i], &z[i]);
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
    {
        i = 1;
        while (i <= n) {
            {
                j = i + 1;
                while (n >= j) {
                    d[i][j] = sqrt ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) + (z[i] - z[j]) * (z[i] - z[j]));
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
hell :
    ;
    for (i = 1; i <= n; i = i + 1) {
        j = i + 1;
        while (j <= n) {
            if (d[i][j] > max) {
                max = d[i][j];
                a = i;
                b = j;
            }
            j = j + 1;
        };
    }
    printf ("(%.0f,%.0f,%.0f)-(%.0f,%.0f,%.0f)=%.2lf\n", x[a], y[a], z[a], x[b], y[b], z[b], max);
    d[a][b] = -1;
    count = count + 1;
    if (count < (n * (n - 1)) / (792 - 790))
        goto hell;
}

