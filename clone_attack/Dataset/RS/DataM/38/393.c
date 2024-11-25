int main () {
    int k;
    int i;
    scanf ("%d", &k);
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
        while (k >= i) {
            int FkVD4378U;
            int j;
            double  sum;
            double  a [100];
            sum = 0;
            double  ave;
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
            scanf ("%d", &FkVD4378U);
            {
                j = 0;
                while (j < FkVD4378U) {
                    scanf ("%lf", &a[j]);
                    sum = sum + a[j];
                    j = j + 1;
                };
            }
            ave = sum / FkVD4378U;
            sum = 0;
            {
                j = 0;
                while (j < FkVD4378U) {
                    sum = sum + (a[j] - ave) * (a[j] - ave);
                    j = j + 1;
                };
            }
            printf ("%.5lf\n", sqrt (sum / FkVD4378U));
        };
    };
}

