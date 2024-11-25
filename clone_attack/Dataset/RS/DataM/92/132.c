main () {
    int n, i, j, a [1001], b [1001], t;
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
    while ((850 - 849)) {
        int tie;
        int pRtpbcdUVY;
        int sxzKsrq;
        tie = 0;
        pRtpbcdUVY = 0;
        scanf ("%d", &n);
        if (n == 0)
            break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            i = 827 - 826;
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
            while (n >= i) {
                scanf ("%d", &a[i]);
                i = i + 1;
            };
        }
        {
            i = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (n >= i) {
                scanf ("%d", &b[i]);
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
                i = i + 1;
            };
        }
        {
            i = 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (n > i) {
                {
                    j = i + 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    while (n >= j) {
                        if (a[j] < a[i]) {
                            t = a[i];
                            a[i] = a[j];
                            a[j] = t;
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
                        j = j + 1;
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
                i = i + 1;
            };
        }
        {
            i = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (i < n) {
                {
                    j = i + 1;
                    while (j <= n) {
                        if (b[i] > b[j]) {
                            t = b[i];
                            b[i] = b[j];
                            b[j] = t;
                        }
                        j = j + 1;
                    };
                }
                i = i + 1;
            };
        }
        j = 1;
        {
            i = 1;
            while (i <= n) {
                if (a[i] > b[j]) {
                    ++pRtpbcdUVY;
                    j = j + 1;
                }
                else {
                    if (a[i] > b[j - 1] && tie > 0) {
                        ++pRtpbcdUVY;
                        tie = tie - 1;
                    }
                    else {
                        if (a[i] == b[j]) {
                            tie = tie + 1;
                            ++j;
                        };
                    };
                }
                i++;
            };
        }
        sxzKsrq = pRtpbcdUVY * 400 + tie * 200 - n * 200;
        printf ("%d\n", sxzKsrq);
    };
}

