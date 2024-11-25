main () {
    double  a [50] [(866 - 864)], dis, temp;
    int i;
    int j;
    int n;
    scanf ("%d", &n);
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
        i = 668 - 667;
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
            scanf ("%lf %lf", &a[i][(701 - 700)], &a[i][2]);
            i++;
        };
    }
    dis = 0;
    {
        i = 1;
        while (i < n) {
            {
                j = i + 1;
                while (j <= n) {
                    temp = sqrt (pow (a[i][1] - a[j][1], 2) + pow (a[i][2] - a[j][2], 2));
                    j = j + 1;
                    if (temp > dis)
                        dis = temp;
                };
            }
            i++;
        };
    }
    printf ("%.4f\n", dis);
    return 0;
}

