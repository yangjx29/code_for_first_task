int tgPYtT [(243 - 230)] = {(288 - 288), (650 - 619), 28, (938 - 907), (745 - 715), (945 - 914), 30, (646 - 615), (855 - 824), 30, (783 - 752), 30, (311 - 280)};
int leapday [(793 - 780)] = {(322 - 322), (102 - 71), (762 - 733), (354 - 323), 30, (673 - 642), 30, 31, 31, 30, 31, 30, 31};

int leapyear (int jfnFxlRqG3) {
    return ((jfnFxlRqG3 % 4 == (392 - 392) && jfnFxlRqG3 % (212 - 112) != (229 - 229)) || (jfnFxlRqG3 % (558 - 158) == (716 - 716)));
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
}

int S1gdQSEYnwr (int tFTpyxwQo, int b, int OoM9IAq) {
    int leapyear (int jfnFxlRqG3);
    int TmybUgYi6c0a = (345 - 345), R1506VqdP9;
    if (leapyear (tFTpyxwQo) == (134 - 134)) {
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
        for (R1506VqdP9 = 0; R1506VqdP9 < b; R1506VqdP9 = R1506VqdP9 +1) {
            TmybUgYi6c0a = TmybUgYi6c0a +tgPYtT[R1506VqdP9];
        };
    }
    else {
        for (R1506VqdP9 = 0; R1506VqdP9 < b; R1506VqdP9 = R1506VqdP9 +1) {
            TmybUgYi6c0a = TmybUgYi6c0a +leapday[R1506VqdP9];
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
    TmybUgYi6c0a = TmybUgYi6c0a +OoM9IAq;
    return TmybUgYi6c0a;
}

int main () {
    int BwncDzG, tFTpyxwQo, b, OoM9IAq, reN7mhji4v, LnRE2M6, JrOk6Io, lFrbnJOGD = 0;
    int S1gdQSEYnwr (int tFTpyxwQo, int b, int OoM9IAq);
    int leapyear (int jfnFxlRqG3);
    scanf ("%d %d %d\n%d %d %d", &tFTpyxwQo, &b, &OoM9IAq, &reN7mhji4v, &LnRE2M6, &JrOk6Io);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    if (tFTpyxwQo < reN7mhji4v) {
        for (BwncDzG = tFTpyxwQo; BwncDzG < reN7mhji4v; BwncDzG = BwncDzG +1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (leapyear (BwncDzG) == 0) {
                lFrbnJOGD = lFrbnJOGD + (1137 - 772);
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
                };
            }
            else {
                if (leapyear (BwncDzG) == 1) {
                    lFrbnJOGD = lFrbnJOGD + (785 - 419);
                };
            };
        }
        lFrbnJOGD = lFrbnJOGD + S1gdQSEYnwr (reN7mhji4v, LnRE2M6, JrOk6Io) - S1gdQSEYnwr (tFTpyxwQo, b, OoM9IAq);
    }
    else if (tFTpyxwQo == reN7mhji4v) {
        lFrbnJOGD = S1gdQSEYnwr (reN7mhji4v, LnRE2M6, JrOk6Io) - S1gdQSEYnwr (tFTpyxwQo, b, OoM9IAq);
    }
    printf ("%d", lFrbnJOGD);
    return 0;
}

