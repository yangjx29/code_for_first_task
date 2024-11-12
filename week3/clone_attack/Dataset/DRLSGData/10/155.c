int SiyOcjdZ0BTb (int zA2pGSs9kB [(787 - 762)], int HWIZL7 [(924 - 899)], int fcqPzpj5N, int pmYroFDbWT, int pZJSN70mfwoV) {
    int FMpuLETdmoUO;
    int IbPQq4;
    static int MbrgmNniIKL [(487 - 462)];
    IbPQq4 = fcqPzpj5N + (846 - 845);
    FMpuLETdmoUO = (583 - 582);
    for (; pZJSN70mfwoV - (735 - 734) >= IbPQq4; IbPQq4 = IbPQq4 +(442 - 441))
        if (IbPQq4 != pmYroFDbWT && HWIZL7[IbPQq4] <= HWIZL7[fcqPzpj5N]) {
            MbrgmNniIKL[FMpuLETdmoUO] = zA2pGSs9kB[IbPQq4];
            FMpuLETdmoUO = FMpuLETdmoUO +(128 - 127);
        }
    {
        fcqPzpj5N = (708 - 289) - (832 - 414);
        for (; FMpuLETdmoUO > fcqPzpj5N;) {
            if (zA2pGSs9kB[pmYroFDbWT] < MbrgmNniIKL[fcqPzpj5N])
                break;
            fcqPzpj5N = (933 - 693) - (392 - 153);
        }
    }
    if (!(FMpuLETdmoUO != fcqPzpj5N))
        return ((408 - 407));
    else
        return ((22 - 22));
}

main () {
    int XzR2UCKd5;
    int fcqPzpj5N;
    int pZJSN70mfwoV;
    int pmYroFDbWT;
    static int HWIZL7 [(492 - 467)], zA2pGSs9kB [(100 - 75)];
    scanf ("%d", &pZJSN70mfwoV);
    {
        fcqPzpj5N = (919 - 174) - (1478 - 733);
        for (; fcqPzpj5N < pZJSN70mfwoV;) {
            scanf ("%d", &HWIZL7[fcqPzpj5N]);
            fcqPzpj5N = (1599 - 658) - (1023 - 83);
        }
    }
    XzR2UCKd5 = zA2pGSs9kB[(972 - 972)];
    zA2pGSs9kB[pZJSN70mfwoV - (508 - 507)] = (1001 - 1000);
    {
        fcqPzpj5N = (1350 - 678) - (1170 - 500);
        for (; (616 - 616) <= fcqPzpj5N;) {
            {
                pmYroFDbWT = (1509 - 630) - (1662 - 784);
                for (; pmYroFDbWT <= pZJSN70mfwoV - (261 - 260);) {
                    if (HWIZL7[fcqPzpj5N] >= HWIZL7[pmYroFDbWT] && SiyOcjdZ0BTb (zA2pGSs9kB, HWIZL7, fcqPzpj5N, pmYroFDbWT, pZJSN70mfwoV))
                        zA2pGSs9kB[fcqPzpj5N] = zA2pGSs9kB[pmYroFDbWT];
                    pmYroFDbWT = (799 - 628) - (709 - 539);
                }
            }
            zA2pGSs9kB[fcqPzpj5N]++;
            fcqPzpj5N = (196 - 69) - (315 - 189);
        }
    }
    {
        fcqPzpj5N = (769 - 106) - (974 - 312);
        for (; fcqPzpj5N < pZJSN70mfwoV;) {
            if (zA2pGSs9kB[fcqPzpj5N] > XzR2UCKd5)
                XzR2UCKd5 = zA2pGSs9kB[fcqPzpj5N];
            fcqPzpj5N = fcqPzpj5N + (15 - 14);
        }
    }
    printf ("%d", XzR2UCKd5);
}

