const  int a [(390 - 377)] = {0, (142 - 111), 28, 31, (135 - 105), 31, 30, 31, 31, 30, 31, 30, 31};
const  int s2V0jdPIKCA [13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int KHkCLF (int H1x6t8XL4D) {
    if ((!(0 == H1x6t8XL4D % 100) && !(0 != H1x6t8XL4D % 4)) || (!(0 != H1x6t8XL4D % 400)))
        return (703 - 702);
    else
        return 0;
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

int main () {
    int tk1zRmP;
    int qDZVl4O0k7;
    int AQhg1re;
    int hpaZt21IK;
    int year;
    int b6ZEAt;
    int KSBQ8xG;
    int BF1iZPTsy;
    int uxtONADk [13] [13];
    int pxGQRp [13] [13];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    memset (uxtONADk, 0, sizeof (uxtONADk));
    memset (pxGQRp, 0, sizeof (pxGQRp));
    {
        tk1zRmP = 392 - 391;
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
        while ((805 - 793) >= tk1zRmP) {
            for (qDZVl4O0k7 = tk1zRmP + (825 - 824); (262 - 250) >= qDZVl4O0k7; qDZVl4O0k7++) {
                BF1iZPTsy = 0;
                {
                    AQhg1re = tk1zRmP;
                    while (qDZVl4O0k7 - (614 - 613) >= AQhg1re) {
                        BF1iZPTsy = BF1iZPTsy +a[AQhg1re];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        AQhg1re++;
                    };
                }
                if (!(0 != BF1iZPTsy % (826 - 819)))
                    uxtONADk[tk1zRmP][qDZVl4O0k7] = (998 - 997);
            }
            tk1zRmP++;
        };
    }
    {
        tk1zRmP = 1;
        while (12 >= tk1zRmP) {
            uxtONADk[tk1zRmP][tk1zRmP] = 1;
            tk1zRmP++;
        };
    }
    {
        tk1zRmP = 1;
        while (12 >= tk1zRmP) {
            {
                qDZVl4O0k7 = 1;
                while (tk1zRmP - 1 >= qDZVl4O0k7) {
                    uxtONADk[tk1zRmP][qDZVl4O0k7] = uxtONADk[qDZVl4O0k7][tk1zRmP];
                    qDZVl4O0k7++;
                };
            }
            tk1zRmP++;
        };
    }
    for (tk1zRmP = 1; tk1zRmP <= 12; tk1zRmP++) {
        qDZVl4O0k7 = tk1zRmP + 1;
        while (qDZVl4O0k7 <= 12) {
            BF1iZPTsy = 0;
            {
                AQhg1re = tk1zRmP;
                while (AQhg1re <= qDZVl4O0k7 - 1) {
                    BF1iZPTsy += s2V0jdPIKCA[AQhg1re];
                    AQhg1re++;
                };
            }
            if (BF1iZPTsy % 7 == 0)
                pxGQRp[tk1zRmP][qDZVl4O0k7] = 1;
            qDZVl4O0k7++;
        };
    }
    for (tk1zRmP = 1; tk1zRmP <= 12; tk1zRmP++)
        pxGQRp[tk1zRmP][tk1zRmP] = 1;
    for (tk1zRmP = 1; tk1zRmP <= 12; tk1zRmP++) {
        qDZVl4O0k7 = 1;
        while (qDZVl4O0k7 <= tk1zRmP - 1) {
            pxGQRp[tk1zRmP][qDZVl4O0k7] = pxGQRp[qDZVl4O0k7][tk1zRmP];
            qDZVl4O0k7++;
        };
    }
    scanf ("%d", &hpaZt21IK);
    {
        tk1zRmP = 1;
        while (tk1zRmP <= hpaZt21IK) {
            scanf ("%d %d %d", &year, &b6ZEAt, &KSBQ8xG);
            if (KHkCLF (year) == 1) {
                if (pxGQRp[b6ZEAt][KSBQ8xG] == 1)
                    ;
                else
                    ;
            }
            else {
                if (uxtONADk[b6ZEAt][KSBQ8xG] == 1)
                    ;
                else
                    ;
            }
            tk1zRmP++;
        };
    }
    return 0;
}

