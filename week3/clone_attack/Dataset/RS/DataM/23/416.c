int main (void ) {
    char a [(394 - 294)];
    char *LxLqPo;
    gets (a);
    int mx9RYC4SA;
    int dVEJZ8lt;
    int dO4nR31rFgJh;
    int lrPNMyO;
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
    mx9RYC4SA = (732 - 731);
    lrPNMyO = strlen (a);
    LxLqPo = a;
    KI2EZBz[(171 - 171)] = &a[(986 - 986)];
    {
        dVEJZ8lt = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (lrPNMyO > dVEJZ8lt) {
            dVEJZ8lt = dVEJZ8lt + 1;
            if (!(' ' != *LxLqPo)) {
                KI2EZBz[mx9RYC4SA] = LxLqPo;
                mx9RYC4SA = mx9RYC4SA + 1;
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
            LxLqPo = LxLqPo +1;
        };
    }
    KI2EZBz[mx9RYC4SA] = &a[lrPNMyO];
    for (; mx9RYC4SA > 1; mx9RYC4SA = mx9RYC4SA - 1) {
        for (dVEJZ8lt = 0, LxLqPo = a; dVEJZ8lt < lrPNMyO; dVEJZ8lt = dVEJZ8lt + 1, LxLqPo = LxLqPo +1)
            if (KI2EZBz[mx9RYC4SA] > LxLqPo &&LxLqPo > KI2EZBz[mx9RYC4SA - 1])
                printf ("%c", *LxLqPo);
    }
    {
        LxLqPo = a;
        dVEJZ8lt = 0;
        while (dVEJZ8lt < lrPNMyO) {
            dVEJZ8lt = dVEJZ8lt + 1;
            if (KI2EZBz[0] <= LxLqPo &&LxLqPo < KI2EZBz[1])
                printf ("%c", *LxLqPo);
            LxLqPo = LxLqPo +1;
        };
    };
}

