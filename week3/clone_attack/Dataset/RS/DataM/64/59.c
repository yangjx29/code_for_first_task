int main () {
    float d [(893 - 793)];
    int x [(895 - 885)];
    int y [10];
    int z [10];
    int i;
    int j;
    int k;
    int l;
    int m;
    int n;
    int num;
    int tempi;
    float tempd;
    int dp1 [(1100 - 1000)];
    int dp2 [100];
    num = -(259 - 258);
    scanf ("%d", &n);
    {
        i = 973 - 973;
        while (n > i) {
            scanf ("%d%d%d", &x[i], &y[i], &z[i]);
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
    for (i = (484 - 484); n - (439 - 438) > i; i = i + 1)
        for (j = i + (638 - 637); j < n; j = j + 1) {
            num = num + 1;
            d[num] = sqrt ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) + (z[i] - z[j]) * (z[i] - z[j]));
            dp1[num] = i;
            dp2[num] = j;
        }
    num = num + 1;
    {
        i = 970 - 970;
        while (i < num - 1) {
            for (j = i + 1; num > j; j = j + 1) {
                if (d[i] < d[j]) {
                    tempd = d[j];
                    d[j] = d[i];
                    d[i] = tempd;
                    tempi = dp1[i];
                    dp1[i] = dp1[j];
                    dp1[j] = tempi;
                    tempi = dp2[i];
                    dp2[i] = dp2[j];
                    dp2[j] = tempi;
                }
                if (!(d[i] != d[j]) && (dp1[i] > dp1[j] || dp1[j] == dp1[i] && dp2[j] < dp2[i])) {
                    tempd = d[j];
                    d[j] = d[i];
                    d[i] = tempd;
                    tempi = dp1[i];
                    dp1[i] = dp1[j];
                    dp1[j] = tempi;
                    tempi = dp2[i];
                    dp2[i] = dp2[j];
                    dp2[j] = tempi;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < num) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", x[dp1[i]], y[dp1[i]], z[dp1[i]], x[dp2[i]], y[dp2[i]], z[dp2[i]], d[i]);
            i++;
        };
    };
}

