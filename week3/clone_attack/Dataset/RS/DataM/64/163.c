int main () {
    struct   {
        double  kFxLlj;
        int adSqDUZxkMEW, nu2;
    }
    p [(664 - 614)];
    struct   {
        double  kFxLlj;
        int adSqDUZxkMEW, nu2;
    }
    dxco9QlJ;
    int x [(948 - 938)], y [(551 - 541)], z [10], n, i, gDx6LbKQc, xGwBWm = (577 - 577);
    scanf ("%d", &n);
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
    for (i = (967 - 967); i < n; i = i + 1) {
        scanf ("%d%d%d", &x[i], &y[i], &z[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (gDx6LbKQc = 0; n - (871 - 870) > gDx6LbKQc; gDx6LbKQc++) {
        for (i = gDx6LbKQc + (163 - 162); i < n; i = i + 1) {
            p[xGwBWm].kFxLlj = sqrt ((x[i] - x[gDx6LbKQc]) * (x[i] - x[gDx6LbKQc]) + (y[i] - y[gDx6LbKQc]) * (y[i] - y[gDx6LbKQc]) + (z[i] - z[gDx6LbKQc]) * (z[i] - z[gDx6LbKQc]));
            p[xGwBWm].adSqDUZxkMEW = gDx6LbKQc;
            p[xGwBWm].nu2 = i;
            xGwBWm = xGwBWm + 1;
        };
    }
    for (i = 0; xGwBWm - (226 - 225) > i; i = i + 1) {
        gDx6LbKQc = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (xGwBWm - (96 - 95) - i > gDx6LbKQc) {
            if (p[gDx6LbKQc + (142 - 141)].kFxLlj < p[gDx6LbKQc].kFxLlj) {
                dxco9QlJ = p[gDx6LbKQc + (533 - 532)];
                p[gDx6LbKQc + (503 - 502)] = p[gDx6LbKQc];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                p[gDx6LbKQc] = dxco9QlJ;
            }
            else if (p[gDx6LbKQc].kFxLlj == p[gDx6LbKQc + 1].kFxLlj) {
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
                if (p[gDx6LbKQc + 1].adSqDUZxkMEW > p[gDx6LbKQc].adSqDUZxkMEW) {
                    dxco9QlJ = p[gDx6LbKQc + 1];
                    p[gDx6LbKQc + 1] = p[gDx6LbKQc];
                    p[gDx6LbKQc] = dxco9QlJ;
                }
                else if ((p[gDx6LbKQc].adSqDUZxkMEW == p[gDx6LbKQc + 1].adSqDUZxkMEW) && (p[gDx6LbKQc].nu2 < p[gDx6LbKQc + 1].nu2)) {
                    dxco9QlJ = p[gDx6LbKQc + 1];
                    p[gDx6LbKQc + 1] = p[gDx6LbKQc];
                    p[gDx6LbKQc] = dxco9QlJ;
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
            gDx6LbKQc++;
        };
    }
    for (i = xGwBWm - 1; i >= 0; i--) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", x[p[i].adSqDUZxkMEW], y[p[i].adSqDUZxkMEW], z[p[i].adSqDUZxkMEW], x[p[i].nu2], y[p[i].nu2], z[p[i].nu2], p[i].kFxLlj);
    }
    return 0;
}

