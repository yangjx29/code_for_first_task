void  main () {
    int eijNCW8Jvt, BXB79b, WsTb7IKJ (int);
    scanf ("%d", &BXB79b);
    {
        eijNCW8Jvt = 6;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (eijNCW8Jvt <= BXB79b) {
            WsTb7IKJ (eijNCW8Jvt);
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
            eijNCW8Jvt = eijNCW8Jvt + 2;
        };
    };
}

int WsTb7IKJ (int n) {
    int i;
    int d;
    int sushu (int);
    d = n / 2;
    for (i = 3; d >= i; i = i + 2)
        if (!(1 != sushu (i)) && sushu (n - i) == 1) {
            printf ("%d=%d+%d\n", n, i, n - i);
            break;
        }
    return (0);
}

int sushu (int a) {
    int i;
    int BXB79b;
    int ok;
    BXB79b = sqrt (a) + 1;
    ok = 1;
    {
        i = 2;
        while (i <= BXB79b) {
            if (a % i == 0)
                ok = 0;
            i = i + 1;
        };
    }
    return (ok);
}

