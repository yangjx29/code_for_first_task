int f (int n) {
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
    if (n == (676 - 675))
        return (-(420 - 419));
    else {
        int jmyfc0;
        int f;
        int i;
        int a [10];
        int m;
        int x;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        jmyfc0 = 0;
        f = 0;
        m = n;
        while (0 < n) {
            a[jmyfc0++] = n % 10;
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
            n = n / 10;
        }
        {
            i = 0;
            while (i < jmyfc0) {
                if (!(a[jmyfc0 - i - 1] == a[i])) {
                    f = 1;
                    x = 0;
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i++;
            };
        }
        if (!(0 != f)) {
            x = 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            {
                i = 2;
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
                while ((m / 2 + 1) > i) {
                    if (m % i == 0)
                        x = 0;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    i++;
                };
            };
        }
        if (x == 1) {
            return m;
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
            };
        }
        else
            return (-1);
    };
}

void  main () {
    int f (int n);
    int l;
    int x;
    int m;
    int n;
    int i;
    int a [(100815 - 815)];
    int agHkzcsheJ [100000];
    l = 0;
    x = 0;
    scanf ("%d %d", &m, &n);
    for (i = 0; i < 100000; i++) {
        a[i] = -1;
        agHkzcsheJ[i] = -1;
    }
    for (i = m; i <= n; i++) {
        a[l] = f (i);
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
        l++;
    }
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i <= (n - m)) {
            if (a[i] != -1) {
                agHkzcsheJ[x] = a[i];
                x++;
            }
            i++;
        };
    }
    if (x != 0) {
        {
            i = 0;
            while (i < (x - 1)) {
                printf ("%d,", agHkzcsheJ[i]);
                i++;
            };
        }
        printf ("%d\n", agHkzcsheJ[x - 1]);
    }
    else
        printf ("no\n");
}

