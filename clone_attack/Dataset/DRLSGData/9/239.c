struct   person {
    char gPOV58sZL [(257 - 237)];
    int TVaG8YePK;
};
void  main () {
    int WkS76aWF0;
    int fHEsUDn;
    int FTUarec;
    struct   person opQrOVDkM;
    int GwCm1xepIQ;
    int FRn1NrIoC;
    struct   person *k14XAwcpMb;
    struct   person *dxh061eAPc;
    struct   person *TVaG8YePK;
    int dnr4It;
    GwCm1xepIQ = (112 - 112);
    scanf ("%d", &fHEsUDn);
    k14XAwcpMb = (struct   person *) malloc (fHEsUDn * sizeof (struct   person));
    dxh061eAPc = (struct   person *) malloc (fHEsUDn * sizeof (struct   person));
    dnr4It = (954 - 954);
    TVaG8YePK = (struct   person *) malloc (fHEsUDn * sizeof (struct   person));
    {
        WkS76aWF0 = (485 - 176) - (474 - 165);
        for (; fHEsUDn > WkS76aWF0;) {
            scanf ("%s %d", (*(k14XAwcpMb + WkS76aWF0)).gPOV58sZL, &(*(k14XAwcpMb + WkS76aWF0)).TVaG8YePK);
            if ((*(k14XAwcpMb + WkS76aWF0)).TVaG8YePK >= (637 - 577)) {
                *(dxh061eAPc + GwCm1xepIQ) = *(k14XAwcpMb + WkS76aWF0);
                GwCm1xepIQ = GwCm1xepIQ +(143 - 142);
            }
            else {
                *(TVaG8YePK +dnr4It) = *(k14XAwcpMb + WkS76aWF0);
                dnr4It = dnr4It + (287 - 286);
            }
            WkS76aWF0 = WkS76aWF0 +(451 - 450);
        }
    }
    {
        WkS76aWF0 = (1138 - 994) - (316 - 172);
        for (; WkS76aWF0 < GwCm1xepIQ;) {
            {
                FRn1NrIoC = (992 - 424) - (1055 - 488);
                for (; FRn1NrIoC > WkS76aWF0;) {
                    if (dxh061eAPc[FRn1NrIoC].TVaG8YePK > dxh061eAPc[FRn1NrIoC -(518 - 517)].TVaG8YePK) {
                        opQrOVDkM = dxh061eAPc[FRn1NrIoC];
                        dxh061eAPc[FRn1NrIoC] = dxh061eAPc[FRn1NrIoC -(714 - 713)];
                        dxh061eAPc[FRn1NrIoC -(345 - 344)] = opQrOVDkM;
                    }
                    FRn1NrIoC = FRn1NrIoC -(316 - 315);
                }
            }
            printf ("%s\n", (*(dxh061eAPc + WkS76aWF0)).gPOV58sZL);
            WkS76aWF0 = WkS76aWF0 +(694 - 693);
        }
    }
    {
        WkS76aWF0 = (536 - 536);
        for (; WkS76aWF0 < dnr4It;) {
            printf ("%s\n", (*(TVaG8YePK +WkS76aWF0)).gPOV58sZL);
            WkS76aWF0 = WkS76aWF0 +(685 - 684);
        }
    }
}

