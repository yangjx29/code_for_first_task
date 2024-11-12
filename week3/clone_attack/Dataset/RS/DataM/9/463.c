int main () {
    int CpcJqt;
    int KcT2BowQ;
    int t;
    int u;
    int k;
    u = (454 - 454);
    k = 0;
    int a [N];
    int vGr1ZTv [N];
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
    char OqOm0sFHzLB [N] [10];
    char rAMpwLbUmrI [N] [10];
    char j [N] [10];
    scanf ("%d", &CpcJqt);
    {
        KcT2BowQ = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (KcT2BowQ < CpcJqt) {
            scanf ("%s %d", &OqOm0sFHzLB[KcT2BowQ], &a[KcT2BowQ]);
            if (a[KcT2BowQ] >= 60) {
                vGr1ZTv[u] = a[KcT2BowQ];
                strcpy (rAMpwLbUmrI[u], OqOm0sFHzLB[KcT2BowQ]);
                u = u + 1;
            }
            else {
                strcpy (j[k], OqOm0sFHzLB[KcT2BowQ]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                k++;
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
            KcT2BowQ = KcT2BowQ +1;
        };
    }
    {
        KcT2BowQ = u - 1;
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
        while (0 < KcT2BowQ) {
            {
                t = 0;
                while (t < KcT2BowQ) {
                    if (vGr1ZTv[t] < vGr1ZTv[t + 1]) {
                        char tmp [10];
                        int f;
                        f = vGr1ZTv[t];
                        vGr1ZTv[t] = vGr1ZTv[t + 1];
                        vGr1ZTv[t + 1] = f;
                        strcpy (tmp, rAMpwLbUmrI[t]);
                        strcpy (rAMpwLbUmrI[t], rAMpwLbUmrI[t + 1]);
                        strcpy (rAMpwLbUmrI[t + 1], tmp);
                    }
                    t = t + 1;
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
            KcT2BowQ = KcT2BowQ -1;
        };
    }
    {
        KcT2BowQ = 0;
        while (KcT2BowQ < u) {
            printf ("%s\n", rAMpwLbUmrI[KcT2BowQ]);
            KcT2BowQ++;
        };
    }
    for (t = 0; t < k; t++)
        printf ("%s\n", j[t]);
    return 0;
}

