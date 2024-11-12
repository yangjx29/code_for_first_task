int main () {
    struct   {
        int kR2fuiTLP;
        int GXGo3Aben1L;
    }
    SXgFP4d9WKJ [100];
    struct   {
        int kR2fuiTLP;
        int GXGo3Aben1L;
    }
    b [100];
    struct   {
        int kR2fuiTLP;
        int GXGo3Aben1L;
    }
    OoS1QqkI5L;
    int TWNdYMbx;
    int WLJfki;
    int nXcguLCr6G;
    scanf ("%d", &TWNdYMbx);
    {
        WLJfki = 0;
        while (TWNdYMbx > WLJfki) {
            scanf ("%d %d", &SXgFP4d9WKJ[WLJfki].kR2fuiTLP, &SXgFP4d9WKJ[WLJfki].GXGo3Aben1L);
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
            WLJfki++;
        };
    }
    {
        nXcguLCr6G = 1;
        while (nXcguLCr6G <= TWNdYMbx) {
            {
                WLJfki = 0;
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
                while (WLJfki < TWNdYMbx -nXcguLCr6G) {
                    if (SXgFP4d9WKJ[WLJfki].kR2fuiTLP > SXgFP4d9WKJ[WLJfki +1].kR2fuiTLP) {
                        OoS1QqkI5L = SXgFP4d9WKJ[WLJfki];
                        SXgFP4d9WKJ[WLJfki] = SXgFP4d9WKJ[WLJfki +1];
                        SXgFP4d9WKJ[WLJfki +1] = OoS1QqkI5L;
                    }
                    WLJfki++;
                };
            }
            nXcguLCr6G++;
        };
    }
    {
        WLJfki = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (TWNdYMbx > WLJfki) {
            b[WLJfki] = SXgFP4d9WKJ[WLJfki];
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
            WLJfki++;
        };
    }
    for (nXcguLCr6G = 1; nXcguLCr6G <= TWNdYMbx; nXcguLCr6G++) {
        for (WLJfki = 0; WLJfki < TWNdYMbx -nXcguLCr6G; WLJfki++) {
            if (b[WLJfki].GXGo3Aben1L > b[WLJfki +1].GXGo3Aben1L) {
                OoS1QqkI5L = b[WLJfki];
                b[WLJfki] = b[WLJfki +1];
                b[WLJfki +1] = OoS1QqkI5L;
            };
        };
    }
    {
        WLJfki = 0;
        while (WLJfki < TWNdYMbx -1) {
            if (b[WLJfki].GXGo3Aben1L < SXgFP4d9WKJ[WLJfki +1].kR2fuiTLP) {
                printf ("no\n");
                return 0;
            }
            WLJfki++;
        };
    }
    printf ("%d %d\n", SXgFP4d9WKJ[0].kR2fuiTLP, b[TWNdYMbx -1].GXGo3Aben1L);
    return 0;
}

