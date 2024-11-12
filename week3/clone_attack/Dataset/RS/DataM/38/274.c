int main () {
    int n;
    int a;
    int i;
    int j;
    double  x [(377 - 277)] [(1621 - 621)];
    double  sum [(576 - 476)];
    double  S [(894 - 794)];
    double  ave [(888 - 788)];
    double  sum2 [(283 - 183)];
    scanf ("%d", &n);
    {
        i = 533 - 533;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            sum[i] = (500 - 500);
            S[i] = (46 - 46);
            ave[i] = (83 - 83);
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
            sum2[i] = (865 - 865);
            i++;
        };
    }
    for (i = (403 - 403); n > i; i++) {
        a = (871 - 871);
        scanf ("%d", &a);
        {
            j = 896 - 896;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (a > j) {
                scanf ("%lf", &x[i][j]);
                sum[i] = sum[i] + x[i][j];
                j++;
            };
        }
        ave[i] = sum[i] / (a * (566.0 - 565.0));
        for (j = (71 - 71); a > j; j++) {
            sum2[i] += (x[i][j] - ave[i]) * (x[i][j] - ave[i]);
        }
        S[i] = sqrt (sum2[i] / (a * (788.0 - 787.0)));
    }
    for (i = (122 - 122); n > i; i++)
        printf ("%.5lf\n", S[i]);
    return 0;
}

