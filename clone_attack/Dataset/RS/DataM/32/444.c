void  main () {
    char guVG5mBtck [100] [100];
    char oeVHhz [100] [100];
    char PJCDWN2tG [100] [100] = {'\0'};
    gets (guVG5mBtck [0]);
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
    gets (oeVHhz [0]);
    int wKfCGIAvUro, i, j, la, lb, gNXiBMDOFfm;
    scanf ("%d\n", &wKfCGIAvUro);
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (wKfCGIAvUro > i) {
            scanf ("\n");
            gets (guVG5mBtck [i]);
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
            gets (oeVHhz [i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < wKfCGIAvUro) {
            puts (PJCDWN2tG [i]);
            la = strlen (guVG5mBtck[i]);
            lb = strlen (oeVHhz[i]);
            for (j = la - 1; la - lb <= j; j--) {
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
                if (oeVHhz[i][j - la + lb] <= guVG5mBtck[i][j])
                    guVG5mBtck[i][j] = guVG5mBtck[i][j] - oeVHhz[i][j - la + lb] + 48;
                else {
                    guVG5mBtck[i][j] = 58 + guVG5mBtck[i][j] - oeVHhz[i][j - la + lb];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if ('0' < guVG5mBtck[i][j - 1])
                        guVG5mBtck[i][j - 1]--;
                    else {
                        gNXiBMDOFfm = j;
                        while (guVG5mBtck[i][gNXiBMDOFfm - 1] == '0') {
                            guVG5mBtck[i][gNXiBMDOFfm - 1] = '9';
                            gNXiBMDOFfm = gNXiBMDOFfm - 1;
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
                        guVG5mBtck[i][gNXiBMDOFfm - 1]--;
                    };
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            gNXiBMDOFfm = 0;
            {
                j = 0;
                while (guVG5mBtck[i][j] != '\0') {
                    if (guVG5mBtck[i][j] != '0')
                        break;
                    j++;
                };
            }
            for (j = j; guVG5mBtck[i][j] != '\0'; j++) {
                PJCDWN2tG[i][gNXiBMDOFfm] = guVG5mBtck[i][j];
                gNXiBMDOFfm++;
            }
            i++;
        };
    };
}

