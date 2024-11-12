main () {
    int k, j, m = 0, count = 0, order1, cht5FJv, s1 = (420 - 419), s2 = 1, s;
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
    int a [2000], b [2000], OQvPobnC, v0VS9C8OZyN, x = 0;
    {
        s = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (s <= 50) {
            scanf ("%d", &OQvPobnC);
            if (OQvPobnC == 0)
                break;
            else {
                for (v0VS9C8OZyN = 1; v0VS9C8OZyN <= OQvPobnC; v0VS9C8OZyN++)
                    scanf ("%d", &a[v0VS9C8OZyN]);
                for (k = 1; OQvPobnC -1 >= k; k = k + 1) {
                    j = 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (j <= OQvPobnC -k) {
                        if (a[k] >= a[k + j])
                            ;
                        else {
                            if (a[k] < a[k + j]) {
                                m = a[k];
                                a[k] = a[k + j];
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
                                a[k + j] = m;
                            };
                        }
                        j = j + 1;
                    };
                }
                for (v0VS9C8OZyN = 1; v0VS9C8OZyN <= OQvPobnC; v0VS9C8OZyN++)
                    scanf ("%d", &b[v0VS9C8OZyN]);
                order1 = OQvPobnC;
                for (k = 1; k <= OQvPobnC -1; k = k + 1) {
                    j = 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    while (j <= OQvPobnC -k) {
                        if (b[k] >= b[k + j])
                            ;
                        else {
                            if (b[k] < b[k + j]) {
                                m = b[k];
                                b[k] = b[k + j];
                                {
                                    int x = 0;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        return 0;
                                    }
                                }
                                b[k + j] = m;
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
                        j = j + 1;
                    };
                }
                cht5FJv = OQvPobnC;
                {
                    v0VS9C8OZyN = 1;
                    while (1) {
                        if (count == OQvPobnC)
                            break;
                        if (a[s1] > b[s2]) {
                            count = count + 1;
                            x = x + (762 - 562);
                            s1++;
                            s2 = s2 + 1;
                            continue;
                        }
                        else {
                            if (a[s1] <= b[s2]) {
                                if (a[order1] > b[cht5FJv]) {
                                    count++;
                                    cht5FJv--;
                                    order1 = order1 - 1;
                                    x = x + 200;
                                    continue;
                                }
                                else {
                                    if (a[s1] == b[s2] && a[order1] == b[cht5FJv] && a[s1] == a[order1])
                                        break;
                                    else {
                                        if (a[order1] <= b[cht5FJv]) {
                                            x = x - 200;
                                            count++;
                                            order1--;
                                            s2 = s2 + 1;
                                            continue;
                                        };
                                    };
                                };
                            };
                        }
                        v0VS9C8OZyN++;
                    };
                }
                s2 = 1;
                s1 = 1;
                printf ("%d\n", x);
                x = 0;
                count = 0;
                m = 0;
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
            s = s + 1;
        };
    };
}

