void  main () {
    int aFDwJcUtsPn;
    int mcbZmX6I [(885 - 585)];
    int ZClaJq5BcD;
    int n;
    int LT3KhiuAqw4;
    aFDwJcUtsPn = (683 - 683);
    float FMWzOqf;
    float P7J2Zb6tH4cQ;
    float hbAjDY [300];
    FMWzOqf = (563 - 563);
    scanf ("%d", &n);
    {
        ZClaJq5BcD = 281 - 281;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > ZClaJq5BcD) {
            scanf ("%d", &mcbZmX6I[ZClaJq5BcD]);
            FMWzOqf = FMWzOqf +mcbZmX6I[ZClaJq5BcD];
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
            ZClaJq5BcD = ZClaJq5BcD +1;
        };
    }
    P7J2Zb6tH4cQ = FMWzOqf / n;
    {
        ZClaJq5BcD = 664 - 664;
        while (n > ZClaJq5BcD) {
            hbAjDY[ZClaJq5BcD] = fabs (mcbZmX6I[ZClaJq5BcD] - P7J2Zb6tH4cQ);
            ZClaJq5BcD = ZClaJq5BcD +1;
        };
    }
    {
        ZClaJq5BcD = 0;
        while (n > ZClaJq5BcD) {
            if (hbAjDY[aFDwJcUtsPn] < hbAjDY[ZClaJq5BcD])
                aFDwJcUtsPn = ZClaJq5BcD;
            ZClaJq5BcD++;
        };
    }
    {
        ZClaJq5BcD = 0;
        while (ZClaJq5BcD < n) {
            if (!(hbAjDY[aFDwJcUtsPn] != hbAjDY[ZClaJq5BcD]) && ZClaJq5BcD != aFDwJcUtsPn) {
                if (mcbZmX6I[ZClaJq5BcD] > mcbZmX6I[aFDwJcUtsPn]) {
                    LT3KhiuAqw4 = mcbZmX6I[ZClaJq5BcD];
                    mcbZmX6I[ZClaJq5BcD] = mcbZmX6I[aFDwJcUtsPn];
                    mcbZmX6I[aFDwJcUtsPn] = LT3KhiuAqw4;
                }
                printf ("%d,", mcbZmX6I[ZClaJq5BcD]);
                break;
            }
            ZClaJq5BcD++;
        };
    }
    printf ("%d\n", mcbZmX6I[aFDwJcUtsPn]);
}

