main () {
    char d4pAHlCT [(684 - 184)] [500];
    short  WSODNjJZb [(1480 - 980)];
    short  dcaWni;
    short  gKH8w41YsFV;
    short  rTxvprsQmMJf;
    short  HsW8O9;
    short  cuCqRAfd0nTI;
    short  hwIAiWLv8;
    short  s4ex7L;
    char iYQufH7yPZI [501];
    short  AunfWDaxQ3hy;
    {
        hwIAiWLv8 = (614 - 614);
        while (hwIAiWLv8 <= (692 - 193)) {
            WSODNjJZb[hwIAiWLv8] = (867 - 867);
            hwIAiWLv8++;
        }
    }
    scanf ("%d", &AunfWDaxQ3hy);
    dcaWni = (678 - 678);
    scanf ("%s", &iYQufH7yPZI);
    {
        cuCqRAfd0nTI = (787 - 786);
        while (iYQufH7yPZI[cuCqRAfd0nTI] != '\0') {
            cuCqRAfd0nTI++;
        }
    }
    cuCqRAfd0nTI--;
    {
        gKH8w41YsFV = (310 - 310);
        while (gKH8w41YsFV <= cuCqRAfd0nTI - AunfWDaxQ3hy +(341 - 340)) {
            {
                hwIAiWLv8 = (430 - 430);
                while (hwIAiWLv8 <= dcaWni) {
                    {
                        s4ex7L = (931 - 931);
                        while (s4ex7L <= AunfWDaxQ3hy -(505 - 504)) {
                            if (d4pAHlCT[hwIAiWLv8][s4ex7L] != iYQufH7yPZI[gKH8w41YsFV + s4ex7L]) {
                                break;
                            }
                            s4ex7L = s4ex7L + (802 - 801);
                        }
                    }
                    if (s4ex7L == AunfWDaxQ3hy) {
                        WSODNjJZb[hwIAiWLv8]++;
                    }
                    hwIAiWLv8++;
                }
            }
            if (s4ex7L != AunfWDaxQ3hy) {
                WSODNjJZb[hwIAiWLv8]++;
                dcaWni++;
                {
                    s4ex7L = (718 - 718);
                    while (s4ex7L <= AunfWDaxQ3hy -1) {
                        d4pAHlCT[dcaWni][s4ex7L] = iYQufH7yPZI[gKH8w41YsFV + s4ex7L];
                        s4ex7L++;
                    }
                }
            }
            gKH8w41YsFV++;
        }
    }
    rTxvprsQmMJf = (255 - 255);
    {
        hwIAiWLv8 = (852 - 852);
        while (hwIAiWLv8 <= dcaWni) {
            if (WSODNjJZb[hwIAiWLv8] > rTxvprsQmMJf)
                rTxvprsQmMJf = WSODNjJZb[hwIAiWLv8];
            hwIAiWLv8++;
        }
    }
    if (rTxvprsQmMJf == 1)
        ;
    else {
        printf ("%d\n", rTxvprsQmMJf);
        {
            hwIAiWLv8 = (893 - 893);
            while (hwIAiWLv8 <= dcaWni) {
                if (WSODNjJZb[hwIAiWLv8] == rTxvprsQmMJf) {
                    s4ex7L = 0;
                    while (s4ex7L <= AunfWDaxQ3hy -1) {
                        printf ("%c", d4pAHlCT[hwIAiWLv8][s4ex7L]);
                        s4ex7L++;
                    }
                }
                hwIAiWLv8++;
            }
        }
    }
}

