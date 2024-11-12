void  main () {
    double  t;
    int a [10000], b [10000];
    int min;
    int max;
    int n;
    min = 10001;
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
    max = 0;
    int i, num, flag;
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
        while (n > i) {
            scanf ("%d%d", &a[i], &b[i]);
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
        while (n > i) {
            if (min > a[i])
                min = a[i];
            if (max < b[i])
                max = b[i];
            i++;
        };
    }
    {
        t = min + 0.5;
        while (max - 0.5 >= t) {
            flag = 0;
            for (i = 0; i < n; i++)
                if (t >= a[i] && t <= b[i])
                    flag++;
            if (flag == 0) {
                break;
            }
            t++;
        };
    }
    if (flag != 0)
        printf ("%d %d", min, max);
}

