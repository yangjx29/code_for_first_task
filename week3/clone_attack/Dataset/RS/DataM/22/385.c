main () {
    char c [500];
    int h;
    int n;
    int a [300] = {0};
    int i;
    int l;
    int j;
    int r;
    int x;
    int y;
    int max;
    h = 0;
    y = 0;
    scanf ("%s", c);
    l = strlen (c);
    c[l] = '0';
    for (i = 0; l > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (c[i] >= '0' && c[i] <= '9') {
            a[h] = c[i] - '0';
            for (j = i + 1; ('0' <= c[j] && '9' >= c[j]); j = j + 1)
                a[h] = a[h] * 10 + c[j] - '0';
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
            i = j;
            h = h + 1;
        };
    }
    a[h - 1] = a[h - 1] / 10;
    x = 0;
    if (!(0 != a[1])) {
        x = 1;
    }
    if (!(0 != x)) {
        max = a[0];
        r = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (i = 0; i < h; i = i + 1)
            if (!(a[0] == a[i]))
                r = 1;
        if (r == 0) {
            y = 1;
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
            printf ("No");
        };
    }
    if (x == 0 && y == 0) {
        max = a[0];
        for (i = 0; i < h; i = i + 1)
            if (a[i] > max)
                max = a[i];
        for (i = 0; i < h; i = i + 1)
            if (a[i] == max)
                a[i] = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        max = a[0];
        for (i = 0; i < h; i++)
            if (a[i] > max)
                max = a[i];
        printf ("%d", max);
    };
}

