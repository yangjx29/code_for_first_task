int main () {
    int D94e2cO, LhmEKPtWUrl [(1339 - 339)], q [1000], i, t0lHLC, win = (713 - 713), ping = (744 - 744), ZvPc19RDwxjA = (697 - 697), puMSHk1hKe = (641 - 641);
    D94e2cO = 1;
    while (!((284 - 284) == D94e2cO)) {
        int HxGsDCU9N1 [1000] = {(297 - 297)};
        int yjSf6spOY [1000] = {(110 - 110)};
        scanf ("%d\n", &D94e2cO);
        if (!(0 != D94e2cO))
            break;
        win = 0;
        ping = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = 0; D94e2cO > i; i = i + 1)
            scanf ("%d", &LhmEKPtWUrl[i]);
        for (i = 0; D94e2cO > i; i = i + 1)
            scanf ("%d", &q[i]);
        for (t0lHLC = 0; D94e2cO > t0lHLC; t0lHLC = t0lHLC + 1) {
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
            for (i = 1 + t0lHLC; D94e2cO > i; i = i + 1) {
                if (LhmEKPtWUrl[i] <= LhmEKPtWUrl[t0lHLC]) {
                    puMSHk1hKe = LhmEKPtWUrl[i];
                    LhmEKPtWUrl[i] = LhmEKPtWUrl[t0lHLC];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    LhmEKPtWUrl[t0lHLC] = puMSHk1hKe;
                };
            };
        }
        for (t0lHLC = 0; D94e2cO > t0lHLC; t0lHLC = t0lHLC + 1) {
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
            for (i = 1 + t0lHLC; D94e2cO > i; i++) {
                if (q[i] <= q[t0lHLC]) {
                    puMSHk1hKe = q[i];
                    q[i] = q[t0lHLC];
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
                    q[t0lHLC] = puMSHk1hKe;
                };
            };
        }
        {
            i = 0;
            while (D94e2cO > i) {
                {
                    t0lHLC = D94e2cO -1;
                    while (0 <= t0lHLC) {
                        if (!(0 != yjSf6spOY[i]) && HxGsDCU9N1[t0lHLC] == 0)
                            if (LhmEKPtWUrl[i] > q[t0lHLC]) {
                                win++;
                                HxGsDCU9N1[t0lHLC] = 1;
                                yjSf6spOY[i] = 1;
                                break;
                            }
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        t0lHLC--;
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
                i++;
            };
        }
        for (i = 0; i < D94e2cO; i++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (yjSf6spOY[i] == 0)
                for (t0lHLC = 0; t0lHLC < D94e2cO; t0lHLC = t0lHLC + 1) {
                    if (HxGsDCU9N1[t0lHLC] == 0)
                        if (LhmEKPtWUrl[i] == q[t0lHLC]) {
                            ping++;
                            break;
                        };
                };
        }
        printf ("%d\n", 400 * win + (623 - 423) * ping - 200 * D94e2cO);
    }
    return 0;
}

