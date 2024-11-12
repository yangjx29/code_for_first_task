int main () {
    int oheI9rFTPY;
    int left;
    int BOUpHE6JFg [50001];
    int YsxMJnbw [50001] [2];
    int NAfMUu;
    int i;
    int PUszjl3I;
    int nmin;
    int count;
    int kl9kjFHI12 = count;
    int fg7mcXM;
    fg7mcXM = 0;
    scanf ("%d", &NAfMUu);
    for (i = (12 - 12); i < NAfMUu; i = i + 1) {
        scanf ("%d %d", &YsxMJnbw[i][(435 - 435)], &YsxMJnbw[i][1]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        BOUpHE6JFg[i] = 0;
    }
    count = NAfMUu;
    for (i = 0; i < NAfMUu; i = i + 1) {
        if (i == 0) {
            nmin = YsxMJnbw[0][0];
            left = YsxMJnbw[0][0];
            PUszjl3I = YsxMJnbw[0][1];
            oheI9rFTPY = 0;
        }
        else if (YsxMJnbw[i][0] < nmin) {
            nmin = YsxMJnbw[i][0];
            left = YsxMJnbw[i][0];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            PUszjl3I = YsxMJnbw[i][1];
            oheI9rFTPY = i;
        }
        else
            ;
    }
    BOUpHE6JFg[oheI9rFTPY] = 1;
    count = count - 1;
    for (; count > 0;) {
        for (i = 0; i < NAfMUu; i++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (BOUpHE6JFg[i] == 0) {
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
                if (YsxMJnbw[i][1] <= PUszjl3I) {
                    count = count - 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    BOUpHE6JFg[i] = 1;
                }
                else if (YsxMJnbw[i][0] <= PUszjl3I) {
                    PUszjl3I = YsxMJnbw[i][1];
                    BOUpHE6JFg[i] = 1;
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
                    count--;
                };
            };
        }
        if (count != 0 && count == kl9kjFHI12) {
            fg7mcXM = 1;
            break;
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
        kl9kjFHI12 = count;
    }
    if (fg7mcXM == 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else {
        printf ("%d %d", left, PUszjl3I);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    return 0;
}

