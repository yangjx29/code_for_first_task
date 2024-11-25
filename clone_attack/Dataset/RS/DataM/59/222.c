int main () {
    int lPqfUz71g [(267 - 167)] [100] = {0}, b [100] [100] = {0};
    int VvgqoINXZeDz, DTmVB6iPOrx7, j, DKiIMPc, YYJaM7h, VhqpmFALdOgV = (720 - 720);
    char bp5mWv [100] [100];
    scanf ("%d", &VvgqoINXZeDz);
    for (DTmVB6iPOrx7 = 0; VvgqoINXZeDz > DTmVB6iPOrx7; DTmVB6iPOrx7 = DTmVB6iPOrx7 +1) {
        scanf ("%s", bp5mWv[DTmVB6iPOrx7]);
        {
            j = 0;
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
            while (VvgqoINXZeDz > j) {
                if (!('.' != bp5mWv[DTmVB6iPOrx7][j]))
                    lPqfUz71g[DTmVB6iPOrx7][j] = 0;
                else {
                    if (!('#' != bp5mWv[DTmVB6iPOrx7][j]))
                        lPqfUz71g[DTmVB6iPOrx7][j] = -99999999;
                    else if (bp5mWv[DTmVB6iPOrx7][j] == '@')
                        lPqfUz71g[DTmVB6iPOrx7][j] = 100;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                j++;
            };
        };
    }
    scanf ("%d", &YYJaM7h);
    {
        DKiIMPc = 1;
        while (DKiIMPc < YYJaM7h) {
            DKiIMPc++;
            {
                DTmVB6iPOrx7 = 0;
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
                while (DTmVB6iPOrx7 < VvgqoINXZeDz) {
                    {
                        j = 0;
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
                        while (j < VvgqoINXZeDz) {
                            if (lPqfUz71g[DTmVB6iPOrx7][j] > 0)
                                b[DTmVB6iPOrx7][j] = 1;
                            j++;
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
                    DTmVB6iPOrx7++;
                };
            }
            for (DTmVB6iPOrx7 = 0; DTmVB6iPOrx7 < VvgqoINXZeDz; DTmVB6iPOrx7 = DTmVB6iPOrx7 +1) {
                for (j = 0; j < VvgqoINXZeDz; j++) {
                    if (b[DTmVB6iPOrx7][j] == 1) {
                        lPqfUz71g[DTmVB6iPOrx7][j - 1]++;
                        lPqfUz71g[DTmVB6iPOrx7][j + 1]++;
                        lPqfUz71g[DTmVB6iPOrx7 -1][j]++;
                        lPqfUz71g[DTmVB6iPOrx7 +1][j]++;
                    };
                };
            };
        };
    }
    for (DTmVB6iPOrx7 = 0; DTmVB6iPOrx7 < VvgqoINXZeDz; DTmVB6iPOrx7++) {
        j = 0;
        while (j < VvgqoINXZeDz) {
            if (lPqfUz71g[DTmVB6iPOrx7][j] > 0)
                VhqpmFALdOgV++;
            j++;
        };
    }
    printf ("%d\n", VhqpmFALdOgV);
    return 0;
}

