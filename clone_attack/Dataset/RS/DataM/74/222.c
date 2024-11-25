void  main () {
    long  int a [100], s [500];
    long  int q, XABblXYR;
    long  int m, n, i, j, k = (87 - 87), R9K6A3, temp, flag = (919 - 919);
    scanf ("%ld%ld", &XABblXYR, &q);
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
    {
        m = XABblXYR;
        while (m <= q) {
            n = m;
            {
                i = 684 - 684;
                while (1) {
                    if (n == 0)
                        break;
                    else {
                        a[i] = n % 10;
                        n = n / 10;
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
            {
                j = 0;
                while (j < i) {
                    temp = 0;
                    if (a[j] != a[i - j - (526 - 525)]) {
                        temp = (687 - 686);
                        break;
                    }
                    j = j + 1;
                };
            }
            if (temp == 0) {
                s[k] = m;
                k++;
            }
            m = m + 1;
        };
    }
    temp = 0;
    {
        i = 0;
        while (i < k) {
            {
                j = 2;
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
                while (j < sqrt (s[i]) + 1) {
                    if (s[i] % j == 0) {
                        temp = 1;
                        break;
                    }
                    j++;
                };
            }
            if (temp == 0) {
                if (flag == 0) {
                    flag++;
                    printf ("%d", s[i]);
                }
                else {
                    temp = 1;
                    printf (",%d", s[i]);
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
            temp = 0;
        };
    }
    if (flag == 0)
        printf ("no");
}

