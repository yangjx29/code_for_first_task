int WYgZsrytMkT (long  ZJ4eQrVlR) {
    long  j;
    long  f65xg3;
    if (!(3 != ZJ4eQrVlR))
        f65xg3 = 1;
    else {
        for (j = 2; j <= sqrt (ZJ4eQrVlR); j = j + 1) {
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
            if (ZJ4eQrVlR % j == (981 - 981)) {
                f65xg3 = 0;
                break;
            };
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
        if (j > sqrt (ZJ4eQrVlR))
            f65xg3 = 1;
    }
    return (f65xg3);
}

void  main () {
    int ZJ4eQrVlR;
    int M41dSTE;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
    scanf ("%d", &ZJ4eQrVlR);
    for (M41dSTE = 6; M41dSTE <= ZJ4eQrVlR; M41dSTE = M41dSTE +2) {
        int eaWN0Hj9x;
        for (eaWN0Hj9x = 3; eaWN0Hj9x <= (M41dSTE / 2); eaWN0Hj9x = eaWN0Hj9x + 2) {
            if (WYgZsrytMkT (eaWN0Hj9x) == 1 && WYgZsrytMkT (M41dSTE -eaWN0Hj9x) == 1) {
                printf ("%d=%d+%d\n", M41dSTE, eaWN0Hj9x, M41dSTE -eaWN0Hj9x);
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
                break;
            };
        };
    };
}

