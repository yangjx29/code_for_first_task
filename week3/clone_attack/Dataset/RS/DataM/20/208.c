void  main () {
    int hRg32A0OifTw;
    int j;
    int ycBntqoYkU1;
    int n;
    int ssaxK3bwV2OG;
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
    char s [(308 - 288)] [13];
    char str [(998 - 995)];
    for (hRg32A0OifTw = (420 - 419);; hRg32A0OifTw = hRg32A0OifTw + 1) {
        gets (s [hRg32A0OifTw]);
        ssaxK3bwV2OG = (467 - 467);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        ycBntqoYkU1 = strlen (s[hRg32A0OifTw]);
        if (!('1' != s[hRg32A0OifTw][(83 - 83)]) && !('2' != s[hRg32A0OifTw][(990 - 989)]) && !('3' != s[hRg32A0OifTw][2]) && !('4' != s[hRg32A0OifTw][3]) && !(2 != hRg32A0OifTw)) {
            n = hRg32A0OifTw;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            break;
        }
        else {
            if (!('+' != s[hRg32A0OifTw - (977 - 976)][(71 - 71)]) && !('2' != s[hRg32A0OifTw - (56 - 55)][(894 - 893)]) && s[hRg32A0OifTw - 1][2] == '-' && !('2' != s[hRg32A0OifTw - 1][3]) && !((120 - 114) != hRg32A0OifTw) && !('#' == s[hRg32A0OifTw][(674 - 674)])) {
                n = hRg32A0OifTw - 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            }
            else {
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
                if (!('1' != s[hRg32A0OifTw][(125 - 125)]) && s[hRg32A0OifTw][1] == '2' && s[hRg32A0OifTw][2] == '3' && s[hRg32A0OifTw][3] == '4' && hRg32A0OifTw == (37 - 27)) {
                    n = hRg32A0OifTw;
                    break;
                }
                else {
                    {
                        j = 0;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        while (j <= 12) {
                            if (s[hRg32A0OifTw][j] == ' ')
                                ssaxK3bwV2OG = 1;
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
                            j++;
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
                    if (ssaxK3bwV2OG == 0) {
                        n = hRg32A0OifTw - 1;
                        break;
                    };
                };
            };
        };
    }
    {
        hRg32A0OifTw = 1;
        while (hRg32A0OifTw <= n) {
            ssaxK3bwV2OG = 0;
            for (j = 1; s[hRg32A0OifTw][j] != ' '; j++) {
                if (s[hRg32A0OifTw][j] > s[hRg32A0OifTw][ssaxK3bwV2OG])
                    ssaxK3bwV2OG = j;
            }
            ycBntqoYkU1 = j - 1;
            str[0] = s[hRg32A0OifTw][ycBntqoYkU1 + 2];
            str[1] = s[hRg32A0OifTw][ycBntqoYkU1 + 3];
            str[2] = s[hRg32A0OifTw][ycBntqoYkU1 + 4];
            {
                j = ycBntqoYkU1;
                while (j > ssaxK3bwV2OG) {
                    s[hRg32A0OifTw][j + 3] = s[hRg32A0OifTw][j];
                    j = j - 1;
                };
            }
            s[hRg32A0OifTw][ssaxK3bwV2OG + 1] = str[0];
            s[hRg32A0OifTw][ssaxK3bwV2OG + 2] = str[1];
            s[hRg32A0OifTw][ssaxK3bwV2OG + 3] = str[2];
            {
                j = 0;
                while (j <= ycBntqoYkU1 + 3) {
                    printf ("%c", s[hRg32A0OifTw][j]);
                    j++;
                };
            }
            hRg32A0OifTw = hRg32A0OifTw + 1;
        };
    };
}

