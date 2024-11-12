void  main () {
    int huiwen (int a);
    int prime (int b);
    int min, max, i, j = 0, p [100] = {0};
    scanf ("%d%d", &min, &max);
    for (i = min; max >= i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (huiwen (i) == 1 && !(1 != prime (i))) {
            j = j + 1;
            p[j] = i;
        };
    }
    if (j != 0) {
        {
            i = 1;
            while (j > i) {
                printf ("%d,", p[i]);
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
        printf ("%d", p[j]);
    }
    else
        printf ("no");
}

int huiwen (int a) {
    int temp, weishu = 0, i, j = -1, count = 0, number [10];
    for (i = 1;; i *= 10) {
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
        if (a / i >= 1 && a / i < 10)
            weishu = weishu + 1;
        else {
            if (10 <= a / i) {
                weishu = weishu + 1;
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
                continue;
            }
            else
                break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        };
    }
    temp = a;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    {
        i = weishu - 1;
        while (i >= 1) {
            if (temp / i >= 1 && temp / i < 10) {
                j = j + 1;
                number[j] = temp / i;
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
                temp %= i;
            }
            else {
                temp %= i;
                j = j + 1;
                number[j] = 0;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i /= 10;
        };
    }
    {
        i = 0;
        while (i < weishu) {
            if (number[i] != number[weishu - i - 1])
                count = count + 1;
            i = i + 1;
        };
    }
    if (count == 0)
        return 1;
    else
        return 0;
}

int prime (int b) {
    int i;
    {
        i = 2;
        while (i <= sqrt ((float) b)) {
            if (b % i == 0)
                break;
            i = i + 1;
        };
    }
    if (i > sqrt ((float) b))
        return 1;
    else
        return 0;
}

