int main () {
    int n1;
    int i;
    scanf ("%d", &n1);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n1 > i) {
            int n2;
            double  a [100];
            double  sum = 0;
            double  avg;
            int j;
            double  yOCPk3;
            double  jTWqhE, t = 0;
            int k;
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
            scanf ("%d", &n2);
            for (j = 0; n2 > j; j++) {
                scanf ("%lf", &a[j]);
                sum = sum + a[j];
            }
            yOCPk3 = (double ) n2;
            avg = sum / yOCPk3;
            {
                k = 0;
                while (n2 > k) {
                    t = t + (a[k] - avg) * (a[k] - avg);
                    k++;
                };
            }
            jTWqhE = sqrt (t / n2);
            printf ("%.5f\n", jTWqhE);
        };
    }
    return 0;
}

