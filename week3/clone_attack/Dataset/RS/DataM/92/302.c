int main () {
    int O6yf3a;
    int ZwREY9nVbl;
    int wb6Xprf5B;
    int Qj3IhqGPmN;
    int FYsPZS;
    int i;
    int j;
    int whHqQz6;
    int PBKMcgd;
    O6yf3a = (843 - 843);
    ZwREY9nVbl = 0;
    int sum [100] = {0};
    for (;;) {
        int a [(1508 - 507)] = {-(555 - 554)};
        int b [1001] = {-(182 - 181)};
        scanf ("%d", &whHqQz6);
        if (whHqQz6 == 0)
            break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        O6yf3a = O6yf3a +1;
        Qj3IhqGPmN = 0;
        for (i = (618 - 617); whHqQz6 >= i; i = i + 1)
            scanf ("%d", &a[i]);
        {
            i = 1;
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
            while (whHqQz6 >= i) {
                scanf ("%d", &b[i]);
                i = i + 1;
            };
        }
        {
            i = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (whHqQz6 >= i) {
                for (j = i; whHqQz6 >= j; j++) {
                    if (a[j] > a[i]) {
                        PBKMcgd = a[i];
                        a[i] = a[j];
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
                        a[j] = PBKMcgd;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if (b[j] > b[i]) {
                        PBKMcgd = b[i];
                        b[i] = b[j];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        b[j] = PBKMcgd;
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
        {
            i = 1;
            while (whHqQz6 >= i) {
                ZwREY9nVbl = 0;
                FYsPZS = 0;
                wb6Xprf5B = 1;
                {
                    j = whHqQz6;
                    while (1 <= j) {
                        if (a[j] > b[i]) {
                            sum[O6yf3a] += 200;
                            a[j] = -1;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            ZwREY9nVbl = 1;
                            break;
                        }
                        if (!(b[i] != a[j]))
                            FYsPZS = j;
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
                        j = j - 1;
                    };
                }
                if (!(1 != ZwREY9nVbl))
                    continue;
                if (!(0 == FYsPZS)) {
                    j = i + 1;
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
                    while (j <= whHqQz6) {
                        if (a[FYsPZS] != a[FYsPZS +j - i] && a[FYsPZS] != b[j] && a[FYsPZS +j - i] <= b[j]) {
                            wb6Xprf5B = 0;
                            break;
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
                        j++;
                    };
                }
                if (FYsPZS != 0 && wb6Xprf5B == 1) {
                    a[FYsPZS] = 0;
                }
                else {
                    j = whHqQz6;
                    while (j >= 1) {
                        if (a[j] != -1 && a[j] < b[i]) {
                            sum[O6yf3a] -= 200;
                            a[j] = -1;
                            break;
                        }
                        if (a[j] != -1) {
                            a[j] = -1;
                            break;
                        }
                        j--;
                    };
                }
                i++;
            };
        };
    }
    {
        i = 1;
        while (i <= O6yf3a) {
            printf ("%d\n", sum[i]);
            i++;
        };
    };
}

