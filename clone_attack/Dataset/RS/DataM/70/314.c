int main () {
    double  x [1000], y [1000], XsSpCoetx [1000] [1000], max = 0, d;
    int n, i, j;
    cin >> n;
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
        while (i < n) {
            cin >> x[i] >> y[i];
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
    {
        i = 0;
        while (i < n) {
            {
                j = 0;
                while (j < n) {
                    d = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
                    XsSpCoetx[i][j] = sqrt (d);
                    if (XsSpCoetx[i][j] > max)
                        max = XsSpCoetx[i][j];
                    j++;
                };
            }
            i++;
        };
    }
    printf ("%.4f\n", max);
    return 0;
}

