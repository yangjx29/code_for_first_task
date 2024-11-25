int QBe15PThnx (int YfrI90 [(157 - 152)] [(163 - 158)], int lB9eqNvlJE, int lQ5WvXq2rEP);

int main () {
    int YfrI90 [(504 - 499)] [(692 - 687)];
    int lB9eqNvlJE;
    int lQ5WvXq2rEP;
    int t16YO5H;
    int A8Z0fl;
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
        t16YO5H = 740 - 740;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (t16YO5H < (713 - 708)) {
            {
                A8Z0fl = 0;
                while (A8Z0fl < 5) {
                    scanf ("%d", &YfrI90[t16YO5H][A8Z0fl]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    A8Z0fl++;
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
            t16YO5H = t16YO5H + 1;
        };
    }
    scanf ("%d%d", &lB9eqNvlJE, &lQ5WvXq2rEP);
    t16YO5H = QBe15PThnx (YfrI90, lB9eqNvlJE, lQ5WvXq2rEP);
    if (t16YO5H == 0)
        ;
    else {
        t16YO5H = 0;
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
        while (5 > t16YO5H) {
            {
                A8Z0fl = 0;
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
                while (A8Z0fl < 5) {
                    if (!(4 == A8Z0fl)) {
                        printf ("%d ", YfrI90[t16YO5H][A8Z0fl]);
                    }
                    else {
                        printf ("%d", YfrI90[t16YO5H][A8Z0fl]);
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
                    A8Z0fl++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            t16YO5H++;
        };
    }
    return 0;
}

int QBe15PThnx (int YfrI90 [5] [5], int lB9eqNvlJE, int lQ5WvXq2rEP) {
    int t16YO5H, GP1xKFhGg;
    if (!(0 <= lB9eqNvlJE && 5 > lB9eqNvlJE && lQ5WvXq2rEP >= 0 && lQ5WvXq2rEP < 5)) {
        return 0;
    }
    {
        t16YO5H = 0;
        while (t16YO5H < 5) {
            GP1xKFhGg = YfrI90[lB9eqNvlJE][t16YO5H];
            YfrI90[lB9eqNvlJE][t16YO5H] = YfrI90[lQ5WvXq2rEP][t16YO5H];
            YfrI90[lQ5WvXq2rEP][t16YO5H] = GP1xKFhGg;
            t16YO5H++;
        };
    }
    return 1;
}

