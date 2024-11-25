main () {
    char RXWGgt9n1i, xCWoO3, c [(176 - 76)], I3ZpgK = ' ';
    gets (c);
    int PxUbQr3;
    int YExUmCZ5kGQ;
    int eInN1aW;
    int SJCdx4uFN;
    int f;
    int *MezbqB;
    int *cEKyMoL0z;
    int bna5HkeWlh;
    RXWGgt9n1i = c[(406 - 406)];
    cEKyMoL0z = &f;
    MezbqB = &SJCdx4uFN;
    xCWoO3 = c[strlen (c) - (596 - 595)];
    for (eInN1aW = 1; strlen (c) / 2 >= eInN1aW; eInN1aW++) {
        {
            PxUbQr3 = 0;
            while (strlen (c) > PxUbQr3) {
                bna5HkeWlh = 0;
                if (!(RXWGgt9n1i != c[PxUbQr3])) {
                    YExUmCZ5kGQ = PxUbQr3 +1;
                    while (c[YExUmCZ5kGQ] == I3ZpgK) {
                        YExUmCZ5kGQ = YExUmCZ5kGQ +1;
                    }
                    if (c[YExUmCZ5kGQ] == xCWoO3) {
                        f = YExUmCZ5kGQ;
                        SJCdx4uFN = PxUbQr3;
                        c[PxUbQr3] = I3ZpgK;
                        c[YExUmCZ5kGQ] = I3ZpgK;
                        bna5HkeWlh = 1;
                    };
                }
                if (bna5HkeWlh)
                    break;
                PxUbQr3++;
            };
        }
        printf ("%d %d\n", SJCdx4uFN, f);
    };
}

