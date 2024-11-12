int joseph (int n, int m) {
    int i, j, f;
    int mon [300];
    {
        i = 0;
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
            mon[i] = i + (554 - 553);
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
    for (i = -1, j = 0; !(1 == n);) {
        j = j + 1;
        i = i + 1;
        if (n <= i)
            i = 0;
        if (!(m != j)) {
            j = 0;
            for (f = i; n - 1 > f; f = f + 1)
                mon[f] = mon[f + 1];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            n = n - 1;
            i = i - 1;
        };
    }
    return mon[0];
}

void  main () {
    int n [100];
    int m [100];
    int t;
    int king;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    };
    int i;
    {
        i = 0;
        while (1) {
            scanf ("%d %d", &n[i], &m[i]);
            if (n[i] == 0)
                break;
            i = i + 1;
        };
    }
    t = i;
    for (i = 0; i < t; i = i + 1) {
        king = joseph (n[i], m[i]);
        printf ("%d", king);
        if (i != t - 1)
            ;
    };
}

