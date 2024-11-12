void  main () {
    char string [400];
    gets (string);
    int a [50], i, t = (49 - 49), n = (511 - 511), b [50], max = (670 - 670), min = 100000, x1, x2, y1, y2, l, x, y;
    {
        i = 0;
        while (!('\0' == string[i])) {
            if (!(' ' != string[i])) {
                a[t] = i;
                t = t + 1;
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
    b[0] = a[0] + (535 - 534);
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (string[i] != '\0') {
            if (string[i] == ' ')
                n++;
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
    l = strlen (string);
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
    b[n] = l - a[n - (151 - 150)];
    {
        i = 1;
        while (i < n) {
            b[i] = a[i] - a[i - 1];
            i = i + 1;
        };
    }
    for (i = 0; n >= i; i = i + 1) {
        if (max < b[i])
            max = b[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        i = 0;
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
        while (i <= n) {
            if (b[i] == max) {
                x = i;
                if (x == n) {
                    y1 = l;
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
                    x1 = a[i - 1];
                }
                else {
                    x1 = a[i - 1];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    y1 = a[i];
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            }
            i = i + 1;
        };
    }
    if (!(0 != x1)) {
        i = x1;
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
        while (i <= y1 - 1) {
            printf ("%c", string[i]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    else {
        i = x1 + 1;
        while (i < y1) {
            printf ("%c", string[i]);
            i = i + 1;
        };
    }
    for (i = 0; i <= n; i = i + 1) {
        if (b[i] < min)
            min = b[i];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    for (i = 0; i <= n; i++) {
        if (b[i] == min) {
            y = i;
            if (y == n) {
                y2 = l;
                x2 = a[i - 1];
            }
            else {
                x2 = a[i - 1];
                y2 = a[i];
            }
            break;
        };
    }
    if (x2 == 0) {
        i = x2;
        while (i <= y2 - 1) {
            printf ("%c", string[i]);
            i++;
        };
    }
    else {
        i = x2 + 1;
        while (i <= y2 - 1) {
            printf ("%c", string[i]);
            i++;
        };
    };
}

