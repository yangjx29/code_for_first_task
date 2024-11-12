int main () {
    int p [50001], q [50001], fFS4uT1rC5z [5001], AWjZLP9k [50001];
    int rdyEBm;
    int xzINMJFvZYse;
    int k;
    int TjJCFc5SY8;
    int c;
    int xg84mvD;
    double  e;
    scanf ("%d", &rdyEBm);
    {
        xzINMJFvZYse = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (xzINMJFvZYse < rdyEBm) {
            scanf ("%d%d", &p[xzINMJFvZYse], &q[xzINMJFvZYse]);
            fFS4uT1rC5z[xzINMJFvZYse] = p[xzINMJFvZYse];
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
            AWjZLP9k[xzINMJFvZYse] = q[xzINMJFvZYse];
            xzINMJFvZYse++;
        };
    }
    {
        k = 1;
        while (rdyEBm > k) {
            {
                xzINMJFvZYse = 0;
                while (rdyEBm - k > xzINMJFvZYse) {
                    if (p[xzINMJFvZYse] > p[xzINMJFvZYse + 1]) {
                        TjJCFc5SY8 = p[xzINMJFvZYse];
                        p[xzINMJFvZYse] = p[xzINMJFvZYse + 1];
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
                        p[xzINMJFvZYse + 1] = TjJCFc5SY8;
                    }
                    if (q[xzINMJFvZYse + 1] > q[xzINMJFvZYse]) {
                        c = q[xzINMJFvZYse];
                        q[xzINMJFvZYse] = q[xzINMJFvZYse + 1];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        q[xzINMJFvZYse + 1] = c;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    xzINMJFvZYse++;
                };
            }
            k = k + 1;
        };
    }
    {
        e = 0;
        while (1.0 * q[0] >= e) {
            xg84mvD = 0;
            {
                k = 0;
                while (rdyEBm > k) {
                    if (e >= 1.0 * fFS4uT1rC5z[k] && e <= 1.0 * AWjZLP9k[k])
                        break;
                    else
                        xg84mvD = xg84mvD + 1;
                    k++;
                };
            }
            if (xg84mvD == rdyEBm) {
                return 0;
            }
            e = e + 0.5;
        };
    }
    printf ("%d %d", p[0], q[0]);
    return 0;
}

