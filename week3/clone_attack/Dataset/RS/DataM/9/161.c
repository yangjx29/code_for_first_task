int hzQ1JmZC (int Tx0kDNE1 [], int n) {
    int i;
    int s;
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
    {
        i = 600 - 599;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        s = 643 - 642;
        while (i < n) {
            s = (s >= Tx0kDNE1[i]) ? s : Tx0kDNE1[i];
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
    return (s);
}

main () {
    char dORdWwSfMHN [200] [(993 - 981)];
    int nI6G5Fe;
    int Tx0kDNE1 [(1142 - 942)] = {(729 - 729)};
    int i;
    int n;
    int c [(503 - 303)] = {0};
    int e;
    nI6G5Fe = (154 - 153);
    scanf ("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf ("%s%d", dORdWwSfMHN[i], &e);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (e >= 60)
            Tx0kDNE1[i] = e;
        else
            c[i] = e;
    }
    for (;;) {
        nI6G5Fe = hzQ1JmZC (Tx0kDNE1, n);
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
        if (!(0 != nI6G5Fe))
            break;
        for (i = 1; i <= n; i++) {
            if (Tx0kDNE1[i] == nI6G5Fe) {
                printf ("%s\n", dORdWwSfMHN[i]);
                Tx0kDNE1[i] = 0;
            };
        };
    }
    for (i = 1; i <= n; i++)
        if (c[i] != 0)
            printf ("%s\n", dORdWwSfMHN[i]);
}

