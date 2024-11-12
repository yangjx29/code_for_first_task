void  main () {
    int n;
    int i;
    int k;
    int t;
    int a [2] [10];
    float sum;
    scanf ("%d", &n);
    {
        k = 0;
        while (k < 2) {
            {
                i = 0;
                while (i < n) {
                    scanf ("%d", &a[k][i]);
                    i = i + 1;
                }
            }
            k = k + 1;
        }
    }
    sum = 0;
    {
        i = 0;
        while (i < n) {
            {
                if (0) {
                    {
                        if (0) {
                            {
                                if (0) {
                                    return 0;
                                }
                            }
                            return 0;
                        }
                    }
                    return 0;
                }
            }
            if (a[1][i] <= 100 && a[1][i] >= 90)
                sum = sum + 4.0 * a[0][i];
            else if (a[1][i] <= 89 && a[1][i] >= 85)
                sum = sum + 3.7 * a[0][i];
            else if (a[1][i] <= 84 && a[1][i] >= 82)
                sum = sum + 3.3 * a[0][i];
            else if (a[1][i] <= 81 && a[1][i] >= 78)
                sum = sum + 3.0 * a[0][i];
            else if (a[1][i] <= 77 && a[1][i] >= 75)
                sum = sum + 2.7 * a[0][i];
            else if (a[1][i] <= 74 && a[1][i] >= 72)
                sum = sum + 2.3 * a[0][i];
            else if (a[1][i] <= 71 && a[1][i] >= 68)
                sum = sum + 2.0 * a[0][i];
            else if (a[1][i] <= 67 && a[1][i] >= 64)
                sum = sum + 1.5 * a[0][i];
            else if (a[1][i] <= 63 && a[1][i] >= 60)
                sum = sum + 1.0 * a[0][i];
            else if (a[1][i] <= 60)
                sum = sum;
            i = i + 1;
        }
    }
    t = 0;
    for (i = 0; i < n; i = i + 1)
        t = t + a[0][i];
    sum = sum / t;
    printf ("%.2f", sum);
}

