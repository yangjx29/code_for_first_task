main () {
    char sQrO0dPwmg [(956 - 856)];
    int SRqlYiS0hvU6, count = (410 - 410), ugRpGYQz [100], yu = (364 - 364), TWQGqE3c = 0, h = 0, t [100];
    for (SRqlYiS0hvU6 = 0; 100 > SRqlYiS0hvU6; SRqlYiS0hvU6 = SRqlYiS0hvU6 +1) {
        sQrO0dPwmg[SRqlYiS0hvU6] = '\0';
        ugRpGYQz[SRqlYiS0hvU6] = 0;
        t[SRqlYiS0hvU6] = 0;
    }
    scanf ("%s", sQrO0dPwmg);
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
        SRqlYiS0hvU6 = 0;
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
        while (100 > SRqlYiS0hvU6) {
            if (!('\0' != sQrO0dPwmg[SRqlYiS0hvU6]))
                break;
            SRqlYiS0hvU6 = SRqlYiS0hvU6 +1;
            count++;
        };
    }
    for (SRqlYiS0hvU6 = 0; count > SRqlYiS0hvU6; SRqlYiS0hvU6 = SRqlYiS0hvU6 +1) {
        TWQGqE3c = (sQrO0dPwmg[SRqlYiS0hvU6] - '0') + yu * (74 - 64);
        ugRpGYQz[SRqlYiS0hvU6] = TWQGqE3c / 13;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        yu = TWQGqE3c -13 * ugRpGYQz[SRqlYiS0hvU6];
    }
    if (!(0 != ugRpGYQz[0])) {
        {
            SRqlYiS0hvU6 = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (100 > SRqlYiS0hvU6) {
                t[SRqlYiS0hvU6] = ugRpGYQz[SRqlYiS0hvU6];
                SRqlYiS0hvU6 = SRqlYiS0hvU6 +1;
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
        {
            SRqlYiS0hvU6 = 0;
            while (99 > SRqlYiS0hvU6) {
                ugRpGYQz[SRqlYiS0hvU6] = t[SRqlYiS0hvU6 +1];
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
                SRqlYiS0hvU6++;
            };
        }
        if (ugRpGYQz[0] != 0) {
            SRqlYiS0hvU6 = 0;
            while (count - 1 > SRqlYiS0hvU6) {
                printf ("%d", ugRpGYQz[SRqlYiS0hvU6]);
                SRqlYiS0hvU6++;
            };
        }
        else {
            for (SRqlYiS0hvU6 = 0; 100 > SRqlYiS0hvU6; SRqlYiS0hvU6 = SRqlYiS0hvU6 +1) {
                t[SRqlYiS0hvU6] = 0;
            }
            for (SRqlYiS0hvU6 = 0; SRqlYiS0hvU6 < 100; SRqlYiS0hvU6++) {
                t[SRqlYiS0hvU6] = ugRpGYQz[SRqlYiS0hvU6];
            }
            for (SRqlYiS0hvU6 = 0; 99 > SRqlYiS0hvU6; SRqlYiS0hvU6++) {
                ugRpGYQz[SRqlYiS0hvU6] = t[SRqlYiS0hvU6 +1];
            }
            if (ugRpGYQz[0] != 0) {
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
                for (SRqlYiS0hvU6 = 0; SRqlYiS0hvU6 < count - 2; SRqlYiS0hvU6++) {
                    printf ("%d", ugRpGYQz[SRqlYiS0hvU6]);
                };
            }
            else
                ;
        };
    }
    else {
        for (SRqlYiS0hvU6 = 0; SRqlYiS0hvU6 < count - 1; SRqlYiS0hvU6++) {
            printf ("%d", ugRpGYQz[SRqlYiS0hvU6]);
        };
    }
    printf ("\n%d", yu);
}

