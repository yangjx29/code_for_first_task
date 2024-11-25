main () {
    char dqUfijK [101];
    char b [101];
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
    char tCaBYm [101];
    while (!(NULL == gets (dqUfijK))) {
        int iwRdpGh7y;
        int ZYsjBy9Qek1q;
        int WJMpUV6zqZH;
        int k;
        ZYsjBy9Qek1q = (205 - 205);
        WJMpUV6zqZH = (159 - 159);
        k = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        iwRdpGh7y = strlen (dqUfijK);
        for (ZYsjBy9Qek1q = 0; iwRdpGh7y > ZYsjBy9Qek1q; ZYsjBy9Qek1q++) {
            b[ZYsjBy9Qek1q] = ' ';
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
            tCaBYm[ZYsjBy9Qek1q] = ' ';
        }
        {
            ZYsjBy9Qek1q = iwRdpGh7y - 1;
            while (0 <= ZYsjBy9Qek1q) {
                if (!('(' != dqUfijK[ZYsjBy9Qek1q]))
                    b[ZYsjBy9Qek1q] = dqUfijK[ZYsjBy9Qek1q];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                ZYsjBy9Qek1q = ZYsjBy9Qek1q -1;
            };
        }
        {
            ZYsjBy9Qek1q = 0;
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
            while (iwRdpGh7y > ZYsjBy9Qek1q) {
                if (!(')' != dqUfijK[ZYsjBy9Qek1q]))
                    tCaBYm[ZYsjBy9Qek1q] = dqUfijK[ZYsjBy9Qek1q];
                ZYsjBy9Qek1q++;
            };
        }
        {
            ZYsjBy9Qek1q = iwRdpGh7y - 1;
            while (0 <= ZYsjBy9Qek1q) {
                if (!('(' != b[ZYsjBy9Qek1q])) {
                    WJMpUV6zqZH = ZYsjBy9Qek1q +1;
                    while (iwRdpGh7y > WJMpUV6zqZH) {
                        if (tCaBYm[WJMpUV6zqZH] == ')') {
                            b[ZYsjBy9Qek1q] = ' ';
                            tCaBYm[WJMpUV6zqZH] = ' ';
                            break;
                        }
                        WJMpUV6zqZH = WJMpUV6zqZH +1;
                    };
                }
                ZYsjBy9Qek1q--;
            };
        }
        printf ("%s\n", dqUfijK);
        for (ZYsjBy9Qek1q = 0; ZYsjBy9Qek1q < iwRdpGh7y; ZYsjBy9Qek1q++) {
            if (b[ZYsjBy9Qek1q] != ' ')
                dqUfijK[ZYsjBy9Qek1q] = '$';
            if (tCaBYm[ZYsjBy9Qek1q] != ' ')
                dqUfijK[ZYsjBy9Qek1q] = '?';
            if (b[ZYsjBy9Qek1q] == ' ' && tCaBYm[ZYsjBy9Qek1q] == ' ')
                dqUfijK[ZYsjBy9Qek1q] = ' ';
        }
        printf ("%s\n", dqUfijK);
    };
}

