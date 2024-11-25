int so (int oBOMyC75gzr) {
    int soo;
    int i;
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
    soo = (502 - 501);
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (10 > i) {
            if (!(0 == (oBOMyC75gzr / (161 - 159)))) {
                oBOMyC75gzr = (int) oBOMyC75gzr / 2;
                soo++;
            }
            else
                break;
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
    return (soo);
}

void  main () {
    int c [1001], d [1001];
    int a;
    int b;
    int i;
    int t;
    int w;
    int auFvhgt5rL;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    int n;
    scanf ("%d%d", &a, &b);
    i = so (a);
    {
        w = 0;
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
        c[0] = a;
        while (w < i - 1) {
            if (!(0 != c[w] % 2))
                c[w + 1] = c[w] / 2;
            else
                c[w + 1] = (c[w] - 1) / 2;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            w++;
        };
    }
    t = so (b);
    {
        auFvhgt5rL = 0;
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
        d[0] = b;
        while (auFvhgt5rL < t - 1) {
            if (!(0 != d[auFvhgt5rL] % 2))
                d[auFvhgt5rL + 1] = d[auFvhgt5rL] / 2;
            else
                d[auFvhgt5rL + 1] = (d[auFvhgt5rL] - 1) / 2;
            auFvhgt5rL++;
        };
    }
    if (c[0] == d[0])
        printf ("%d", c[0]);
    else {
        n = 0;
        while (n <= t) {
            if (c[i - n - 1] != d[t - n - 1]) {
                printf ("%d", c[i - n]);
                break;
            }
            n++;
        };
    };
}

