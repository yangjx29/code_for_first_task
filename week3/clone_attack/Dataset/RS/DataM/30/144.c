int main (int Zt4aNG, char *argv []) {
    int n, i = 1, sum1 = (724 - 724), sum2 = 0, sum;
    scanf ("%d", &n);
    if (n <= 9) {
        {
            i = 1;
            while (i <= n) {
                if (i != 7) {
                    sum1 = sum1 + i * i;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                i = i + 1;
            };
        }
        printf ("%d", sum1);
    }
    else {
        {
            i = 1;
            while (i <= n) {
                if (i <= 9) {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    if (i != 7) {
                        sum1 = sum1 + i * i;
                    };
                }
                else if ((i / 10 != 7) && (i % 10 != 7) && (i % 7 != 0)) {
                    sum2 = sum2 + i * i;
                }
                else
                    ;
                i = i + 1;
            };
        }
        sum = sum1 + sum2;
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
        printf ("%d", sum);
    }
    return 0;
}

