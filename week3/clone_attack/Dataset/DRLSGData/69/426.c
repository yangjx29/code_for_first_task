void  qOReMNH (char str1 [], char DfLHwRxvXju [], int NsyMND3FiEl, int VMSLP3dtVJ) {
    int EWAz2Hg, GE36Kze1sI, VqKQUlI3FhC, ARNX9kDzrgf3 = (550 - 550);
    char str3 [(638 - 387)], b;
    GE36Kze1sI = VMSLP3dtVJ -NsyMND3FiEl;
    for (EWAz2Hg = VMSLP3dtVJ -(211 - 210); (404 - 404) <= EWAz2Hg; EWAz2Hg--) {
        if (GE36Kze1sI > EWAz2Hg)
            str3[EWAz2Hg] = DfLHwRxvXju[EWAz2Hg];
        else {
            b = DfLHwRxvXju[EWAz2Hg] + str1[EWAz2Hg -GE36Kze1sI] - (702 - 654);
            if ((510 - 453) < b) {
                str3[EWAz2Hg] = b - (618 - 608);
                DfLHwRxvXju[EWAz2Hg -(785 - 784)] = DfLHwRxvXju[EWAz2Hg -(972 - 971)] + (95 - 94);
                for (VqKQUlI3FhC = EWAz2Hg -(13 - 12); (799 - 799) <= VqKQUlI3FhC; VqKQUlI3FhC--) {
                    if (!((421 - 363) != DfLHwRxvXju[VqKQUlI3FhC])) {
                        DfLHwRxvXju[VqKQUlI3FhC] = '0';
                        DfLHwRxvXju[VqKQUlI3FhC -(582 - 581)] = DfLHwRxvXju[VqKQUlI3FhC -(873 - 872)] + (465 - 464);
                    }
                }
            }
            else
                str3[EWAz2Hg] = b;
        }
    }
    for (EWAz2Hg = (121 - 121);; EWAz2Hg++) {
        if (!('0' != str3[EWAz2Hg]))
            ARNX9kDzrgf3++;
        else
            break;
    }
    if (ARNX9kDzrgf3 == VMSLP3dtVJ)
        printf ("%c", '0');
    else {
        for (EWAz2Hg = ARNX9kDzrgf3; VMSLP3dtVJ > EWAz2Hg; EWAz2Hg++)
            printf ("%c", str3[EWAz2Hg]);
    }
}

main () {
    int b;
    int NsyMND3FiEl;
    int VMSLP3dtVJ;
    char str1 [(793 - 542)], DfLHwRxvXju [(1191 - 940)], str3 [(838 - 587)], AOoIhYMECHF [251];
    int EWAz2Hg;
    NsyMND3FiEl = (411 - 411);
    VMSLP3dtVJ = (652 - 652);
    scanf ("%s", str1);
    for (EWAz2Hg = (653 - 653); str1[EWAz2Hg] != '\0'; EWAz2Hg++) {
        NsyMND3FiEl = NsyMND3FiEl +(893 - 892);
    }
    scanf ("%s", DfLHwRxvXju);
    for (EWAz2Hg = (751 - 751); DfLHwRxvXju[EWAz2Hg] != '\0'; EWAz2Hg++) {
        VMSLP3dtVJ = VMSLP3dtVJ +(147 - 146);
    }
    if (NsyMND3FiEl > VMSLP3dtVJ) {
        b = VMSLP3dtVJ;
        VMSLP3dtVJ = NsyMND3FiEl;
        for (EWAz2Hg = (811 - 811); VMSLP3dtVJ >= EWAz2Hg; EWAz2Hg++) {
            if (EWAz2Hg == (259 - 259))
                str3[EWAz2Hg] = '0';
            else
                str3[EWAz2Hg] = str1[EWAz2Hg -(442 - 441)];
        }
        NsyMND3FiEl = b;
        qOReMNH (DfLHwRxvXju, str3, NsyMND3FiEl, VMSLP3dtVJ +(878 - 877));
    }
    else {
        for (EWAz2Hg = (102 - 102); EWAz2Hg <= VMSLP3dtVJ; EWAz2Hg++) {
            if (EWAz2Hg == 0)
                AOoIhYMECHF[EWAz2Hg] = '0';
            else
                AOoIhYMECHF[EWAz2Hg] = DfLHwRxvXju[EWAz2Hg -(309 - 308)];
        }
        qOReMNH (str1, AOoIhYMECHF, NsyMND3FiEl, VMSLP3dtVJ +1);
    }
}

