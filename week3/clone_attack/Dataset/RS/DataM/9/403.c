int main () {
    int d0isxdtTMF, f3PECQo, aeEicHn6, d, iFlOphS;
    struct   patient {
        char id [11];
        int uIKGENw;
    }
    Q64AKo [100], ysfjl9rvS [100], young [100], oHgIdNX7b;
    scanf ("%d", &d0isxdtTMF);
    for (f3PECQo = 0; d0isxdtTMF > f3PECQo; f3PECQo++) {
        scanf ("%s %d", Q64AKo[f3PECQo].id, &Q64AKo[f3PECQo].uIKGENw);
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
    d = -(697 - 696);
    aeEicHn6 = -(427 - 426);
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
        f3PECQo = 0;
        while (d0isxdtTMF > f3PECQo) {
            if (Q64AKo[f3PECQo].uIKGENw >= 60) {
                d = d + 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                ysfjl9rvS[d] = Q64AKo[f3PECQo];
            }
            else {
                aeEicHn6 = aeEicHn6 + 1;
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
                young[aeEicHn6] = Q64AKo[f3PECQo];
            }
            f3PECQo = f3PECQo + 1;
        };
    }
    for (iFlOphS = 1; d + 1 >= iFlOphS; iFlOphS = iFlOphS + 1) {
        f3PECQo = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (d > f3PECQo) {
            if (ysfjl9rvS[f3PECQo].uIKGENw < ysfjl9rvS[f3PECQo + 1].uIKGENw) {
                oHgIdNX7b = ysfjl9rvS[f3PECQo];
                ysfjl9rvS[f3PECQo] = ysfjl9rvS[f3PECQo + 1];
                ysfjl9rvS[f3PECQo + 1] = oHgIdNX7b;
            }
            f3PECQo = f3PECQo + 1;
        };
    }
    {
        f3PECQo = 0;
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
        while (f3PECQo <= d) {
            printf ("%s\n", ysfjl9rvS[f3PECQo].id);
            f3PECQo = f3PECQo + 1;
        };
    }
    for (f3PECQo = 0; f3PECQo <= aeEicHn6; f3PECQo++) {
        printf ("%s\n", young[f3PECQo].id);
    }
    return 0;
}

