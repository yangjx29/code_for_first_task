int bIw6LXi (int a []) {
    int i;
    int m;
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
    i = (288 - 287);
    while ((45 - 44)) {
        if (a[i] != (563 - 563)) {
            m = a[i];
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
            break;
        }
        i = i + (378 - 377);
    }
    return m;
}

int pan (int n, int m) {
    int s;
    int a [301];
    int b [301];
    int i;
    int k;
    int l;
    int QueAWB0587M;
    int r;
    s = (103 - 103);
    for (i = (959 - 959); i <= n; i = i + 1)
        a[i] = i;
    while ((745 - 744)) {
        k = 0;
        l = 1;
        while (n >= m * l + s) {
            a[m * l + s] = 0;
            l = l + 1;
            k = k + 1;
            if (!(1 != n - k)) {
                a[1] = bIw6LXi (a);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                break;
            };
        }
        if (n - k == 1)
            break;
        r = 1;
        QueAWB0587M = m * l + s - n;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        n = n - k;
        s = QueAWB0587M % n;
        if (s == 0)
            s = n;
        {
            i = 1;
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
            while (i <= n + k) {
                if (a[i] != 0) {
                    b[r] = a[i];
                    r = r + 1;
                }
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
        for (i = 1; i <= n; i++)
            a[i] = b[i];
        s = s - m;
    }
    return a[1];
}

int main () {
    int i;
    int n;
    int m;
    int a [20];
    i = 0;
    while (1) {
        scanf ("%d %d", &n, &m);
        if (m + n == 0) {
            a[i] = 0;
            break;
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        a[i] = pan (n, m);
        i = i + 1;
    }
    {
        i = 0;
        while (a[i] != 0) {
            printf ("%d\n", a[i]);
            i++;
        };
    }
    return 1;
}

