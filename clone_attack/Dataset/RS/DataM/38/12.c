int main () {
    int RSpkjgcQYFIr, n;
    double  q3Ih1fdHeCV [1000], a [1000] = {0}, c [1000] = {0};
    scanf ("%d", &RSpkjgcQYFIr);
    {
        int i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (RSpkjgcQYFIr > i) {
            double  gHQFDWt = 0;
            scanf ("%d", &n);
            {
                int h9olp6eEB = 0;
                while (n > h9olp6eEB) {
                    scanf ("%lf", &q3Ih1fdHeCV[h9olp6eEB]);
                    a[i] += q3Ih1fdHeCV[h9olp6eEB];
                    h9olp6eEB++;
                };
            }
            a[i] /= n;
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
            {
                int h9olp6eEB = 0;
                while (h9olp6eEB < n) {
                    c[i] += pow ((q3Ih1fdHeCV[h9olp6eEB] - a[i]), 2);
                    h9olp6eEB++;
                };
            }
            gHQFDWt = sqrt (c[i] / n);
            i = i + 1;
            printf ("%.5lf\n", gHQFDWt);
        };
    }
    return 0;
}

