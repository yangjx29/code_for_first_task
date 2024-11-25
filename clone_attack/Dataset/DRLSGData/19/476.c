void  main () {
    int qEVI20rFT;
    char m0aY2HO1ym94 [(720 - 640)];
    gets (m0aY2HO1ym94);
    int ye0hzJjNscPR;
    char *TBo5S10TPW;
    int s7drsZn;
    int r6zUXVI;
    char nUCjT3H [(300 - 280)];
    gets (nUCjT3H);
    char E76Dem9C0 [(352 - 322)] [(76 - 56)];
    char t7vjbxs [(823 - 803)];
    int Xj9NveaVBM;
    gets (t7vjbxs);
    TBo5S10TPW = m0aY2HO1ym94;
    qEVI20rFT = strlen (m0aY2HO1ym94);
    {
        ye0hzJjNscPR = (470 - 224) - (795 - 549);
        r6zUXVI = (1619 - 863) - (825 - 69);
        for (; *(TBo5S10TPW +r6zUXVI) != ' ';) {
            E76Dem9C0[(144 - 144)][ye0hzJjNscPR] = *(TBo5S10TPW +r6zUXVI);
            ye0hzJjNscPR = (1602 - 701) - (1316 - 416);
            r6zUXVI = (432 - 419) - (333 - 321);
        }
    }
    E76Dem9C0[(321 - 321)][ye0hzJjNscPR] = '\0';
    Xj9NveaVBM = (119 - 119);
    Xj9NveaVBM = (92 - 91);
    {
        r6zUXVI = (938 - 777) - 161;
        for (; qEVI20rFT > r6zUXVI;) {
            if (!(' ' != *(TBo5S10TPW +r6zUXVI - (524 - 523))) && *(TBo5S10TPW +r6zUXVI) != ' ') {
                {
                    ye0hzJjNscPR = (448 - 351) - (833 - 736);
                    s7drsZn = r6zUXVI;
                    for (; m0aY2HO1ym94[s7drsZn] != ' ';) {
                        E76Dem9C0[Xj9NveaVBM][ye0hzJjNscPR] = m0aY2HO1ym94[s7drsZn];
                        s7drsZn = (1227 - 380) - 846;
                        ye0hzJjNscPR = (1420 - 665) - (1200 - 446);
                    }
                }
                E76Dem9C0[Xj9NveaVBM][ye0hzJjNscPR] = '\0';
                Xj9NveaVBM = Xj9NveaVBM +(537 - 536);
            }
            r6zUXVI = (1688 - 695) - (1124 - 132);
        }
    }
    {
        r6zUXVI = (1349 - 904) - (1075 - 630);
        for (; Xj9NveaVBM > r6zUXVI;) {
            if (!((406 - 406) != strcmp (nUCjT3H, E76Dem9C0[r6zUXVI]))) {
                strcpy (E76Dem9C0[r6zUXVI], t7vjbxs);
            }
            r6zUXVI = r6zUXVI + (788 - 787);
        }
    }
    {
        r6zUXVI = (1338 - 682) - (1574 - 918);
        for (; Xj9NveaVBM -(1001 - 1000) > r6zUXVI;) {
            printf ("%s ", E76Dem9C0[r6zUXVI]);
            r6zUXVI = r6zUXVI + (386 - 385);
        }
    }
    printf ("%s", E76Dem9C0[Xj9NveaVBM -(617 - 616)]);
}

