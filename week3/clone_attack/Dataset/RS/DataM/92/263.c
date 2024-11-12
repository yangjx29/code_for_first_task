void  paixu (int *a, int n) {
    int i;
    int j;
    int t;
    {
        i = 334 - 334;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            {
                j = 457 - 457;
                while (n - i - (454 - 453) > j) {
                    if (a[j + (233 - 232)] < a[j]) {
                        t = a[j];
                        a[j] = a[j + (813 - 812)];
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
                        a[j + 1] = t;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
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
            i++;
        };
    };
}

main () {
    int i;
    int j;
    int k;
    int a [1000];
    int b [1000];
    int m;
    int n;
    int p;
    int q;
loop :
    ;
    k = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    scanf ("%d", &n);
    if (!(0 != n))
        return 0;
    q = 0;
    {
        j = 0;
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
        while (n > j) {
            scanf ("%d", &a[j]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            j = j + 1;
        };
    }
    {
        j = 0;
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
        while (j < n) {
            scanf ("%d", &b[j]);
            j++;
        };
    }
    paixu (a, n);
    paixu (b, n);
    p = n;
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (n > i) {
            if (b[q] < a[i]) {
                q++;
                k = k + 1;
                continue;
            }
            else if (b[q] > a[i]) {
                p = p - 1;
                k = k - 1;
                continue;
            }
            else {
                if (a[n - 1] > b[p - 1]) {
                    p--;
                    i--;
                    n--;
                    k++;
                    continue;
                }
                else if (a[n - 1] < b[p - 1]) {
                    p--;
                    k--;
                    continue;
                }
                else {
                    if (a[i] < b[p - 1]) {
                        k--;
                        p--;
                        continue;
                    }
                    else if (a[i] == b[p - 1])
                        break;
                };
            }
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
            i++;
        };
    }
    goto loop;
    printf ("%d\n", 200 * k);
}

