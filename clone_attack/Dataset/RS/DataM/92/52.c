main () {
    int a [1000];
    int b [1000];
    int m;
    int n;
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
    int j;
    int k1;
    int k2;
    int sum;
    for (;;) {
        sum = (986 - 986);
        scanf ("%d", &n);
        if (n == (938 - 938))
            break;
        for (i = (759 - 759); n > i; i++) {
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
            };
        }
        {
            i = 0;
            while (i < n) {
                scanf ("%d", &b[i]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i++;
            };
        }
        for (i = 0; i < n - (506 - 505); i++) {
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
            for (j = 0; n - (720 - 719) - i > j; j++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (a[j + 1] > a[j]) {
                    m = a[j + 1];
                    a[j + 1] = a[j];
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
                    a[j] = m;
                };
            };
        }
        for (i = 0; n - 1 > i; i++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            for (j = 0; n - 1 - i > j; j++) {
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
                if (b[j] < b[j + 1]) {
                    m = b[j + 1];
                    b[j + 1] = b[j];
                    b[j] = m;
                };
            };
        }
        k1 = n - 1;
        j = 0;
        i = 0;
        k2 = n - 1;
        for (; k1 >= i && k2 >= j; j++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (b[j] < a[i]) {
                sum++;
                i++;
            }
            else {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (a[i] < b[j]) {
                    sum--;
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
                    k1--;
                }
                else if (a[k1] < b[k2]) {
                    sum--;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    k1--;
                }
                else if (a[k1] > b[k2]) {
                    k2--;
                    j--;
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
                    k1--;
                    sum++;
                }
                else {
                    if (a[k1] == b[j]) {
                        k1--;
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        };
                    }
                    else {
                        k1--;
                        sum--;
                    };
                };
            };
        }
        sum = sum * 200;
        printf ("%d\n", sum);
    };
}

