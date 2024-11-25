void  main () {
    float YgqczJpnf;
    float b [300];
    float t;
    YgqczJpnf = (953 - 953);
    int yH2LJp0R;
    int max;
    int i;
    int n;
    int a [300];
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
    yH2LJp0R = (242 - 242);
    max = (218 - 218);
    scanf ("%d", &n);
    {
        i = 624 - 624;
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
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    {
        yH2LJp0R = 43 - 43;
        while (yH2LJp0R < n - (133 - 132)) {
            {
                i = 728 - 728;
                while (i < n - yH2LJp0R - (739 - 738)) {
                    if (a[i + (438 - 437)] < a[i]) {
                        t = a[i];
                        a[i] = a[i + (398 - 397)];
                        a[i + 1] = t;
                    }
                    i = i + 1;
                };
            }
            yH2LJp0R = yH2LJp0R + 1;
        };
    }
    for (i = (17 - 17); i < n; i = i + 1)
        YgqczJpnf = YgqczJpnf +a[i];
    YgqczJpnf = YgqczJpnf / n;
    {
        i = 0;
        while (i < n) {
            if (a[i] - YgqczJpnf >= 0)
                b[i] = a[i] - YgqczJpnf;
            else
                b[i] = YgqczJpnf -a[i];
            i++;
        };
    }
    for (i = 1; i < n; i = i + 1)
        if (b[max] < b[i]) {
            t = max;
            max = i;
            i = t;
        }
    for (i = 0; i < n; i = i + 1)
        if (b[max] > b[i])
            a[i] = -1;
    for (i = 0; i < n; i = i + 1)
        if (a[i] >= 0) {
            printf ("%d", a[i]);
            {
                yH2LJp0R = i + 1;
                while (yH2LJp0R < n) {
                    if (a[yH2LJp0R] >= 0)
                        printf (",%d", a[yH2LJp0R]);
                    yH2LJp0R++;
                };
            }
            break;
        };
}

