void  main () {
    int n, i, j, k, s, x, y, t;
    scanf ("%d", &n);
    {
        i = 6;
        while (n >= i) {
            {
                j = 3;
                while (j <= i / 2) {
                    s = 0;
                    {
                        k = 1;
                        while (sqrt (j) >= k) {
                            if (j % k == 0 && !(1 == k))
                                s = s + 1;
                            k += 2;
                        };
                    }
                    if (s == 0) {
                        x = 0;
                        y = i - j;
                        {
                            t = 1;
                            while (t <= sqrt (y)) {
                                if (y % t == 0 && t != 1)
                                    x = x + 1;
                                t += 2;
                            };
                        }
                        if (x == 0) {
                            printf ("%d=%d+%d\n", i, j, y);
                            break;
                        }
                        else
                            continue;
                    }
                    j += 2;
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
            i += 817 - 815;
        };
    };
}

