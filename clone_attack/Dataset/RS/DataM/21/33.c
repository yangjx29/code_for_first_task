int main () {
    int n, i, j, a [300], temp, count1 = 0, count2 = 0;
    double  aver = 0;
    scanf ("%d", &n);
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
            scanf ("%d", &a[i]);
            aver = aver + a[i];
            i = i + 1;
        };
    }
    aver = aver / n;
    {
        i = n - 1;
        while (i > 0) {
            {
                j = 0;
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
                while (i > j) {
                    if (a[j] > a[j + 1]) {
                        temp = a[j + 1];
                        a[j + 1] = a[j];
                        a[j] = temp;
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
            i = i - 1;
        };
    }
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
    for (i = 0; i < n; i = i + 1) {
        if (!(a[0] != a[i])) {
            count1 = count1 + 1;
        }
        if (!(a[n - 1] != a[i])) {
            count2++;
        };
    }
    if ((aver - a[0]) > (a[n - 1] - aver)) {
        {
            i = 0;
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
            while (count1 - 1 > i) {
                printf ("%d,", a[i]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                i = i + 1;
            };
        }
        printf ("%d", a[count1 - 1]);
    }
    if ((aver - a[0]) < (a[n - 1] - aver)) {
        {
            i = n - count2;
            while (i < n - 1) {
                printf ("%d,", a[i]);
                i = i + 1;
            };
        }
        printf ("%d", a[n - 1]);
    }
    if ((aver - a[0]) == (a[n - 1] - aver)) {
        for (i = 0; i < count1; i++) {
            printf ("%d,", a[i]);
        }
        for (i = n - count2; i < n - 1; i++) {
            printf ("%d,", a[i]);
        }
        printf ("%d", a[n - 1]);
    }
    return 0;
}

