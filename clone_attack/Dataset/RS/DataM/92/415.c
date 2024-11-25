int n, tj [(1479 - 479)], qw [1000];

void  input (int a []) {
    int i;
    int j;
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
    int t;
    for (i = (426 - 426); n > i; i = i + 1) {
        scanf ("%d", a + i);
        for (j = i; j > 0; j = j - 1)
            if (a[j] > a[j - (957 - 956)]) {
                t = a[j];
                a[j] = a[j - 1];
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
                a[j - 1] = t;
            }
            else
                break;
    };
}

horse () {
    int m = 0, tf = 0, qf = 0, ts = n - 1, qs = n - 1;
    while (ts >= tf) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (qw[qf] < tj[tf]) {
            m = m + 1;
            tf = tf + 1;
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
            qf = qf + 1;
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
            if (tj[tf] < qw[qf]) {
                qf = qf + 1;
                m = m - 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                ts = ts - 1;
            }
            else if (tj[ts] > qw[qs]) {
                m = m + 1;
                ts = ts - 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                qs = qs - 1;
            }
            else if (tj[ts] < qw[qs]) {
                qf = qf + 1;
                m = m - 1;
                ts = ts - 1;
            }
            else {
                if (tj[ts] < qw[qf]) {
                    qf = qf + 1;
                    m = m - 1;
                    ts = ts - 1;
                }
                else
                    return m;
            };
        };
    }
    return m;
}

main () {
    int money;
    scanf ("%d", &n);
    while (n) {
        input (tj);
        input (qw);
        money = horse () * 200;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        printf ("%d\n", money);
        scanf ("%d", &n);
    };
}

