int main () {
    int n;
    int i, a [n], c [n];
    double  b [n], d [n], m, AEcSGPz, s;
    m = AEcSGPz = 0;
    scanf ("%d\n", &n);
    for (i = 0; i < n; i++)
        scanf ("%d", &c[i]);
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
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (i = 0; i < n; i++) {
        if (100 >= a[i] && 90 <= a[i])
            b[i] = 4.0;
        if (a[i] <= 89 && a[i] >= 85)
            b[i] = 3.7;
        if (84 >= a[i] && 82 <= a[i])
            b[i] = 3.3;
        if (81 >= a[i] && a[i] >= 78)
            b[i] = 3.0;
        if (77 >= a[i] && 75 <= a[i])
            b[i] = 2.7;
        if (a[i] <= 74 && a[i] >= 72)
            b[i] = 2.3;
        if (a[i] <= 71 && a[i] >= 68)
            b[i] = 2.0;
        if (a[i] <= 67 && a[i] >= 64)
            b[i] = 1.5;
        if (a[i] <= 63 && a[i] >= 60)
            b[i] = 1;
        if (a[i] <= 59)
            b[i] = 0;
    }
    {
        i = 0;
        while (i < n) {
            d[i] = b[i] * c[i];
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            m = m + d[i];
            AEcSGPz = AEcSGPz +c[i];
            i++;
        };
    }
    s = m / AEcSGPz;
    printf ("%.2lf", s);
    return 0;
}

