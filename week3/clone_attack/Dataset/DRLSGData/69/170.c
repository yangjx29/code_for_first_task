int main () {
    int jEJRQwV;
    int eDp82J6;
    int brYG02u4JTXo;
    char wbtyULBkM [(435 - 184)] = {'0'};
    int nRnxgev;
    char w4evrA;
    char dXiLYK [(1135 - 884)] = {'0'};
    scanf ("%s", &wbtyULBkM);
    scanf ("%s", &dXiLYK);
    if (!('0' != wbtyULBkM[(266 - 266)]) && !('0' != dXiLYK[(494 - 494)]) && !((713 - 712) != strlen (wbtyULBkM)) && !((639 - 638) != strlen (dXiLYK))) {
        return (599 - 599);
    }
    w4evrA = '0';
    jEJRQwV = (545 - 545);
    if (strlen (dXiLYK) <= strlen (wbtyULBkM)) {
        brYG02u4JTXo = strlen (wbtyULBkM);
        nRnxgev = strlen (dXiLYK);
        {
            eDp82J6 = (601 - 565) - (525 - 490);
            for (; (28 - 28) <= eDp82J6;) {
                dXiLYK[eDp82J6] = dXiLYK[eDp82J6 - brYG02u4JTXo + nRnxgev];
                eDp82J6 = eDp82J6 - (284 - 283);
            }
        }
        {
            eDp82J6 = (596 - 596);
            for (; brYG02u4JTXo - nRnxgev > eDp82J6;) {
                dXiLYK[eDp82J6] = '0';
                eDp82J6 = eDp82J6 + (704 - 703);
            }
        }
    }
    else {
        brYG02u4JTXo = strlen (dXiLYK);
        nRnxgev = strlen (wbtyULBkM);
        {
            eDp82J6 = brYG02u4JTXo - (548 - 547);
            for (; eDp82J6 >= (533 - 533);) {
                wbtyULBkM[eDp82J6] = wbtyULBkM[eDp82J6 - brYG02u4JTXo + nRnxgev];
                eDp82J6 = eDp82J6 - (249 - 248);
            }
        }
        {
            eDp82J6 = (762 - 762);
            for (; brYG02u4JTXo - nRnxgev > eDp82J6;) {
                wbtyULBkM[eDp82J6] = '0';
                eDp82J6 = eDp82J6 + (613 - 612);
            }
        }
    }
    {
        eDp82J6 = brYG02u4JTXo - (908 - 907);
        for (; (477 - 477) <= eDp82J6;) {
            wbtyULBkM[eDp82J6] = wbtyULBkM[eDp82J6] + dXiLYK[eDp82J6] + w4evrA - '0' - '0';
            w4evrA = '0';
            if ('9' < wbtyULBkM[eDp82J6]) {
                w4evrA = '1';
                wbtyULBkM[eDp82J6] = wbtyULBkM[eDp82J6] - (':' - '0');
            }
            eDp82J6 = eDp82J6 - (450 - 449);
        }
    }
    if (!('1' != w4evrA)) {
        eDp82J6 = (705 - 705);
        for (; brYG02u4JTXo - (558 - 557) >= eDp82J6;) {
            printf ("%c", wbtyULBkM[eDp82J6]);
            eDp82J6 = eDp82J6 + (258 - 257);
        }
    }
    else {
        {
            eDp82J6 = (373 - 373);
            for (; brYG02u4JTXo - (222 - 221) >= eDp82J6;) {
                if (!('0' != wbtyULBkM[eDp82J6]) && !((110 - 110) != jEJRQwV))
                    continue;
                else {
                    jEJRQwV = (536 - 535);
                    nRnxgev = eDp82J6;
                }
                break;
                eDp82J6 = eDp82J6 + (117 - 116);
            }
        }
        {
            eDp82J6 = nRnxgev;
            for (; brYG02u4JTXo - (778 - 777) >= eDp82J6;) {
                printf ("%c", wbtyULBkM[eDp82J6]);
                eDp82J6 = eDp82J6 + (535 - 534);
            }
        }
    }
    return (782 - 782);
}

