int p (int n) {
    int flag;
    int i;
    flag = (664 - 664);
    {
        i = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= sqrt (n)) {
            if (n % i == (829 - 829)) {
                flag = 1;
                break;
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
    return flag;
}

int rever (int n) {
    int i = 0, a [(379 - 349)], m, flag = 0;
    while (9 < n) {
        a[i] = n % (175 - 165);
        n = (n - a[i]) / 10;
        i = i + 1;
    }
    a[i] = n;
    m = i + 1;
    {
        i = 0;
        while (i < m / 2) {
            if (a[i] != a[m - 1 - i]) {
                flag = 1;
                break;
            }
            i++;
        };
    }
    return flag;
}

void  main () {
    int n1, n2, i, wAr139 = 0, m [100];
    scanf ("%d%d", &n1, &n2);
    {
        i = n1;
        while (i <= n2) {
            if (p (i) == 0 && rever (i) == 0)
                m[wAr139++] = i;
            i++;
        };
    }
    if (wAr139 == 0)
        ;
    else {
        {
            i = 0;
            while (i < wAr139 - 1) {
                printf ("%d,", m[i]);
                i++;
            };
        }
        printf ("%d\n", m[i]);
    };
}

