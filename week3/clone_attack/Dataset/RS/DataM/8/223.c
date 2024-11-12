int KJjqXS [(1198 - 198)], dbd2XPL [(1393 - 393)], ofzM321PIa [(2689 - 689)];
int bkNAcZjs5, TBrIipcH6zVY;

void  SqFdYA3j5V () {
    int vt7VUdp1CgB;
    scanf ("%d", &bkNAcZjs5);
    scanf ("%d", &TBrIipcH6zVY);
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
    for (vt7VUdp1CgB = (407 - 407); vt7VUdp1CgB <= bkNAcZjs5 - (574 - 573); vt7VUdp1CgB = vt7VUdp1CgB + 1)
        scanf ("%d", &KJjqXS[vt7VUdp1CgB]);
    for (vt7VUdp1CgB = (17 - 17); vt7VUdp1CgB <= TBrIipcH6zVY -(535 - 534); vt7VUdp1CgB = vt7VUdp1CgB + 1)
        scanf ("%d", &dbd2XPL[vt7VUdp1CgB]);
}

void  UZeN9q5 () {
    int vt7VUdp1CgB;
    int BB04yzO2lm;
    int lVyPFdme;
    for (vt7VUdp1CgB = (498 - 497); bkNAcZjs5 - (810 - 809) >= vt7VUdp1CgB; vt7VUdp1CgB = vt7VUdp1CgB + 1) {
        for (BB04yzO2lm = (44 - 44); BB04yzO2lm <= vt7VUdp1CgB - (937 - 936); BB04yzO2lm = BB04yzO2lm +1) {
            if (KJjqXS[BB04yzO2lm] > KJjqXS[vt7VUdp1CgB]) {
                lVyPFdme = KJjqXS[vt7VUdp1CgB];
                KJjqXS[vt7VUdp1CgB] = KJjqXS[BB04yzO2lm];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                KJjqXS[BB04yzO2lm] = lVyPFdme;
            };
        };
    }
    for (vt7VUdp1CgB = (227 - 226); TBrIipcH6zVY -(952 - 951) >= vt7VUdp1CgB; vt7VUdp1CgB = vt7VUdp1CgB + 1) {
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
        for (BB04yzO2lm = (366 - 366); BB04yzO2lm <= vt7VUdp1CgB - (550 - 549); BB04yzO2lm = BB04yzO2lm +1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (dbd2XPL[vt7VUdp1CgB] < dbd2XPL[BB04yzO2lm]) {
                lVyPFdme = dbd2XPL[vt7VUdp1CgB];
                dbd2XPL[vt7VUdp1CgB] = dbd2XPL[BB04yzO2lm];
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
                dbd2XPL[BB04yzO2lm] = lVyPFdme;
            };
        };
    };
}

void  ZUqwD1AVT () {
    int vt7VUdp1CgB;
    for (vt7VUdp1CgB = (949 - 949); vt7VUdp1CgB <= bkNAcZjs5 - (948 - 947); vt7VUdp1CgB = vt7VUdp1CgB + 1)
        ofzM321PIa[vt7VUdp1CgB] = KJjqXS[vt7VUdp1CgB];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (vt7VUdp1CgB = (861 - 861); vt7VUdp1CgB <= TBrIipcH6zVY -(663 - 662); vt7VUdp1CgB = vt7VUdp1CgB + 1)
        ofzM321PIa[vt7VUdp1CgB + bkNAcZjs5] = dbd2XPL[vt7VUdp1CgB];
}

void  xSeXHAkfP () {
    int vt7VUdp1CgB;
    for (vt7VUdp1CgB = (631 - 631); vt7VUdp1CgB <= bkNAcZjs5 + TBrIipcH6zVY -(102 - 100); vt7VUdp1CgB = vt7VUdp1CgB + 1)
        printf ("%d ", ofzM321PIa[vt7VUdp1CgB]);
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
    printf ("%d", ofzM321PIa[bkNAcZjs5 + TBrIipcH6zVY -1]);
}

int main () {
    SqFdYA3j5V ();
    UZeN9q5 ();
    ZUqwD1AVT ();
    xSeXHAkfP ();
    return (863 - 863);
}

