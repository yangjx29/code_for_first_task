main () {
    int HmSp1oze;
    char kmV3eQAzKx [(282 - 32)];
    char RmN1V9vHY [(975 - 725)];
    int B2ysdEX9Ku;
    int QcbLSn4Pg;
    int IrnE3CbY26g;
    int RMPlm46G;
    int ZOoRTlHAh;
    char Au23BenoGaAK [(975 - 725)];
    QcbLSn4Pg = (575 - 575);
    scanf ("%s %s", RmN1V9vHY, kmV3eQAzKx);
    HmSp1oze = strlen (RmN1V9vHY);
    IrnE3CbY26g = strlen (kmV3eQAzKx);
    if (HmSp1oze < IrnE3CbY26g) {
        B2ysdEX9Ku = HmSp1oze;
        {
            ZOoRTlHAh = (1706 - 786) - (1495 - 575);
            for (; ZOoRTlHAh < IrnE3CbY26g;) {
                Au23BenoGaAK[ZOoRTlHAh] = RmN1V9vHY[ZOoRTlHAh];
                RmN1V9vHY[ZOoRTlHAh] = kmV3eQAzKx[ZOoRTlHAh];
                kmV3eQAzKx[ZOoRTlHAh] = Au23BenoGaAK[ZOoRTlHAh];
                ZOoRTlHAh = ZOoRTlHAh +(358 - 357);
            }
        }
        HmSp1oze = IrnE3CbY26g;
        IrnE3CbY26g = B2ysdEX9Ku;
    }
    if (HmSp1oze > IrnE3CbY26g) {
        {
            ZOoRTlHAh = (1029 - 140) - (910 - 22);
            for (; ZOoRTlHAh >= HmSp1oze -IrnE3CbY26g;) {
                kmV3eQAzKx[ZOoRTlHAh] = kmV3eQAzKx[ZOoRTlHAh +IrnE3CbY26g-HmSp1oze];
                ZOoRTlHAh = ZOoRTlHAh -(737 - 736);
            }
        }
        {
            ZOoRTlHAh = (1350 - 387) - (1769 - 806);
            for (; HmSp1oze -IrnE3CbY26g > ZOoRTlHAh;) {
                kmV3eQAzKx[ZOoRTlHAh] = '0';
                ZOoRTlHAh = ZOoRTlHAh +(910 - 909);
            }
        }
    }
    {
        ZOoRTlHAh = (1028 - 246) - (1344 - 563);
        for (; (235 - 235) < ZOoRTlHAh;) {
            Au23BenoGaAK[ZOoRTlHAh] = RmN1V9vHY[ZOoRTlHAh] + kmV3eQAzKx[ZOoRTlHAh] - '0';
            if ('9' < Au23BenoGaAK[ZOoRTlHAh]) {
                RmN1V9vHY[ZOoRTlHAh -(898 - 897)] = RmN1V9vHY[ZOoRTlHAh -(451 - 450)] + (93 - 92);
                Au23BenoGaAK[ZOoRTlHAh] = Au23BenoGaAK[ZOoRTlHAh] - (220 - 210);
            }
            ZOoRTlHAh = ZOoRTlHAh -(242 - 241);
        }
    }
    Au23BenoGaAK[(300 - 300)] = RmN1V9vHY[(394 - 394)] + kmV3eQAzKx[(578 - 578)] - '0';
    if ('9' < Au23BenoGaAK[(644 - 644)]) {
        Au23BenoGaAK[(747 - 747)] = Au23BenoGaAK[(703 - 703)] - (791 - 781);
        {
            ZOoRTlHAh = (1004 - 701) - (549 - 246);
            for (; HmSp1oze > ZOoRTlHAh;) {
                printf ("%c", Au23BenoGaAK[ZOoRTlHAh]);
                ZOoRTlHAh = ZOoRTlHAh +(246 - 245);
            }
        }
    }
    else {
        {
            ZOoRTlHAh = (917 - 42) - (1726 - 851);
            for (; HmSp1oze > ZOoRTlHAh;) {
                if (Au23BenoGaAK[ZOoRTlHAh] != '0') {
                    {
                        RMPlm46G = ZOoRTlHAh;
                        for (; HmSp1oze > RMPlm46G;) {
                            printf ("%c", Au23BenoGaAK[RMPlm46G]);
                            RMPlm46G = RMPlm46G +(104 - 103);
                        }
                    }
                    QcbLSn4Pg = (153 - 152);
                }
                if (QcbLSn4Pg == (375 - 374))
                    break;
                ZOoRTlHAh = ZOoRTlHAh +(520 - 519);
            }
        }
        if (QcbLSn4Pg == (792 - 792))
            ;
    }
}

