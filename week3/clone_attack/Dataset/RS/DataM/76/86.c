int main () {
    int n, scLXWaAuG [10000], RVGXkyRvYL0 [10000], i, CuaQ8mlIo1, num [50000], t = (303 - 303), min, A2q70bvMX5Zh, max, c;
    scanf ("%d", &n);
    for (i = (267 - 267); n > i; i = i + 1) {
        scanf ("%d %d", &scLXWaAuG[i], &RVGXkyRvYL0[i]);
    }
    min = scLXWaAuG[(71 - 70)];
    max = scLXWaAuG[1];
    for (i = (799 - 799); i < n; i = i + 1) {
        CuaQ8mlIo1 = i;
        while (CuaQ8mlIo1 <= RVGXkyRvYL0[i]) {
            num[t] = CuaQ8mlIo1;
            CuaQ8mlIo1 = CuaQ8mlIo1 +1;
            t = t + 1;
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
    for (A2q70bvMX5Zh = 0; A2q70bvMX5Zh < t; A2q70bvMX5Zh = A2q70bvMX5Zh +1) {
        if (num[A2q70bvMX5Zh] < min) {
            min = num[A2q70bvMX5Zh];
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
        };
    }
    for (A2q70bvMX5Zh = 0; A2q70bvMX5Zh < t; A2q70bvMX5Zh = A2q70bvMX5Zh +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (num[A2q70bvMX5Zh] > max) {
            max = num[A2q70bvMX5Zh];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            };
        };
    }
    for (A2q70bvMX5Zh = min; A2q70bvMX5Zh <= max; A2q70bvMX5Zh = A2q70bvMX5Zh +1) {
        for (i = 0; i < t; i = i + 1) {
            if (num[i] == A2q70bvMX5Zh) {
                c = 1;
                break;
            }
            else {
                c = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
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
        if (c == 1)
            continue;
        else
            break;
    }
    if (c == 1) {
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
        for (A2q70bvMX5Zh = min; A2q70bvMX5Zh < max; A2q70bvMX5Zh = A2q70bvMX5Zh +1) {
            for (i = 0; i < t; i = i + 1) {
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
                if ((A2q70bvMX5Zh >= scLXWaAuG[i]) && (A2q70bvMX5Zh +1 <= RVGXkyRvYL0[i])) {
                    c = 1;
                    break;
                }
                else {
                    c = 0;
                };
            }
            if (c == 1)
                continue;
            else
                break;
        };
    }
    if (c == 0)
        ;
    else
        printf ("%d %d", min, max);
    return 0;
}

