int win (int x, int w [], int p []) {
    int topw;
    int topp;
    int downw;
    int downp;
    int i;
    topw = 0;
    topp = 0;
    downw = x - 1;
    downp = x - 1;
    int j;
    int convert;
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
    int converts;
    int win;
    int same;
    int fail;
    win = 0;
    same = 0;
    fail = 0;
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
        while (x > i) {
            {
                j = 0;
                while (x - i - 1 > j) {
                    if (w[j + 1] > w[j]) {
                        convert = w[j];
                        w[j] = w[j + 1];
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
                        w[j + 1] = convert;
                    }
                    if (p[j + 1] > p[j]) {
                        converts = p[j];
                        p[j] = p[j + 1];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        p[j + 1] = converts;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                };
            }
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
            i = i + 1;
        };
    }
    for (i = 0; x > i; i = i + 1) {
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
        if (p[downp] < w[downw]) {
            win = win + 1;
            downw = downw - 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            downp = downp - 1;
        }
        else if (p[downp] > w[downw]) {
            fail = fail + 1;
            downw = downw - 1;
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
            topp = topp + 1;
        }
        else if (w[topw] > p[topp]) {
            win = win + 1;
            topw = topw + 1;
            topp = topp + 1;
        }
        else if (w[downw] == p[topp])
            break;
        else {
            topp = topp + 1;
            fail++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            downw--;
        };
    }
    return (200 * (win - fail));
}

main () {
    int n;
    int i;
    int j;
    int k;
    int get;
    scanf ("%d", &n);
    while (1) {
        if (n == 0)
            break;
        else {
            int a [n];
            int b [n];
            {
                i = 0;
                while (i < n) {
                    scanf ("%d", &a[i]);
                    i++;
                };
            }
            for (i = 0; i < n; i = i + 1)
                scanf ("%d", &b[i]);
            get = win (n, a, b);
            printf ("%d\n", get);
        }
        scanf ("%d", &n);
    }
    getchar ();
    getchar ();
}

