void  order (int s [1000], int *p) {
    int j;
    int r;
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
    j = (16 - 16);
    r = 0;
    {
        j = *p - 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j >= 1) {
            for (r = 0; r <= j - 1; r = r + 1) {
                if (s[r] < s[r + 1]) {
                    int temp;
                    temp = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    temp = s[r + 1];
                    s[r + 1] = s[r];
                    s[r] = temp;
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
            j--;
        };
    };
}

main () {
    int n = 1, i = 0, win = 0, lose = 0, tie = 0, money = 0, t1 = 0, hhkRWaBHt = 0, q1 = 0, q2 = 0;
    int NNxF94nP1r [1000];
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
    int a [1000];
    for (;;) {
        scanf ("%d", &n);
        if (n == 0)
            break;
        else {
            i = 0;
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
            while (i <= n - 1) {
                scanf ("%d", &a[i]);
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
        tie = 0;
        money = 0;
        lose = 0;
        win = 0;
        q1 = 0;
        t1 = 0;
        for (i = 0; i <= n - 1; i = i + 1)
            scanf ("%d", &NNxF94nP1r[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        order (a, &n);
        order (NNxF94nP1r, &n);
        hhkRWaBHt = n - 1;
        q2 = n - 1;
        for (; (t1 != hhkRWaBHt) && (q1 != q2);) {
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
            if (a[t1] > NNxF94nP1r[q1]) {
                q1 = q1 + 1;
                t1++;
                win = win + 1;
                continue;
            }
            else if (a[hhkRWaBHt] > NNxF94nP1r[q2]) {
                q2--;
                hhkRWaBHt--;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                win = win + 1;
                continue;
            }
            else if (a[hhkRWaBHt] == NNxF94nP1r[q1]) {
                q1 = q1 + 1;
                hhkRWaBHt--;
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
                tie++;
            }
            else if (a[hhkRWaBHt] < NNxF94nP1r[q1]) {
                q1++;
                hhkRWaBHt--;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                lose = lose + 1;
            };
        }
        if (a[t1] == NNxF94nP1r[q1]) {
            tie++;
        }
        else if (a[t1] > NNxF94nP1r[q1]) {
            win++;
        }
        else {
            lose = lose + 1;
        }
        money = 200 * win - 200 * lose;
        printf ("%d\n", money);
    };
}

