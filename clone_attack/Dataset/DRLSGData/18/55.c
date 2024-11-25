void  U4PTY7wJ (int qRqTON [(780 - 675)] [(1041 - 936)], int mkGPcyARF0BH) {
    int IE95fLzXdOh [(619 - 514)];
    int IIgw2j1VYKC;
    int ehZjfPvl7C;
    for (IIgw2j1VYKC = (561 - 560); IIgw2j1VYKC <= mkGPcyARF0BH; IIgw2j1VYKC = IIgw2j1VYKC +1) {
        IE95fLzXdOh[IIgw2j1VYKC] = qRqTON[IIgw2j1VYKC][(737 - 736)];
        for (ehZjfPvl7C = (776 - 775); ehZjfPvl7C <= mkGPcyARF0BH; ehZjfPvl7C = ehZjfPvl7C + 1) {
            if (qRqTON[IIgw2j1VYKC][ehZjfPvl7C] < IE95fLzXdOh[IIgw2j1VYKC]) {
                IE95fLzXdOh[IIgw2j1VYKC] = qRqTON[IIgw2j1VYKC][ehZjfPvl7C];
            }
        }
        for (ehZjfPvl7C = (69 - 68); ehZjfPvl7C <= mkGPcyARF0BH; ehZjfPvl7C = ehZjfPvl7C + 1) {
            qRqTON[IIgw2j1VYKC][ehZjfPvl7C] -= IE95fLzXdOh[IIgw2j1VYKC];
        }
    }
    for (IIgw2j1VYKC = (627 - 626); mkGPcyARF0BH >= IIgw2j1VYKC; IIgw2j1VYKC = IIgw2j1VYKC +1) {
        IE95fLzXdOh[IIgw2j1VYKC] = qRqTON[(948 - 947)][IIgw2j1VYKC];
        for (ehZjfPvl7C = (263 - 262); mkGPcyARF0BH >= ehZjfPvl7C; ehZjfPvl7C = ehZjfPvl7C + 1) {
            if (IE95fLzXdOh[IIgw2j1VYKC] > qRqTON[ehZjfPvl7C][IIgw2j1VYKC]) {
                IE95fLzXdOh[IIgw2j1VYKC] = qRqTON[ehZjfPvl7C][IIgw2j1VYKC];
            }
        }
        for (ehZjfPvl7C = (134 - 133); ehZjfPvl7C <= mkGPcyARF0BH; ehZjfPvl7C = ehZjfPvl7C + 1) {
            qRqTON[ehZjfPvl7C][IIgw2j1VYKC] -= IE95fLzXdOh[IIgw2j1VYKC];
        }
    }
}

void  e61ghir (int qRqTON [(305 - 200)] [(676 - 571)], int mkGPcyARF0BH) {
    int IIgw2j1VYKC, ehZjfPvl7C;
    for (IIgw2j1VYKC = (480 - 478); mkGPcyARF0BH - (256 - 255) >= IIgw2j1VYKC; IIgw2j1VYKC = IIgw2j1VYKC +1) {
        for (ehZjfPvl7C = (49 - 48); ehZjfPvl7C <= mkGPcyARF0BH; ehZjfPvl7C = ehZjfPvl7C + 1) {
            qRqTON[IIgw2j1VYKC][ehZjfPvl7C] = qRqTON[IIgw2j1VYKC +(854 - 853)][ehZjfPvl7C];
        }
    }
    for (IIgw2j1VYKC = (592 - 590); IIgw2j1VYKC <= mkGPcyARF0BH - (507 - 506); IIgw2j1VYKC = IIgw2j1VYKC +1) {
        for (ehZjfPvl7C = (934 - 933); ehZjfPvl7C <= mkGPcyARF0BH; ehZjfPvl7C = ehZjfPvl7C + 1) {
            qRqTON[ehZjfPvl7C][IIgw2j1VYKC] = qRqTON[ehZjfPvl7C][IIgw2j1VYKC +(580 - 579)];
        }
    }
}

int PC3w56Gemk (int qRqTON [(246 - 141)] [(962 - 857)], int mkGPcyARF0BH) {
    int rJeMicHVuaSh;
    rJeMicHVuaSh = (769 - 769);
    while (mkGPcyARF0BH >= (188 - 186)) {
        U4PTY7wJ (qRqTON, mkGPcyARF0BH);
        rJeMicHVuaSh += qRqTON[(428 - 426)][(709 - 707)];
        e61ghir (qRqTON, mkGPcyARF0BH);
        mkGPcyARF0BH = mkGPcyARF0BH - 1;
    }
    return rJeMicHVuaSh;
}

void  main () {
    int ywUHxyEkO;
    int mkGPcyARF0BH;
    int hA705Fji;
    int qRqTON [(783 - 678)] [105];
    int ehZjfPvl7C;
    int IIgw2j1VYKC;
    int INeTdLn;
    scanf ("%d", &hA705Fji);
    for (IIgw2j1VYKC = (147 - 146); IIgw2j1VYKC <= hA705Fji; IIgw2j1VYKC++) {
        mkGPcyARF0BH = hA705Fji;
        for (ehZjfPvl7C = (163 - 162); ehZjfPvl7C <= hA705Fji; ehZjfPvl7C = ehZjfPvl7C + 1) {
            for (INeTdLn = (13 - 12); INeTdLn <= hA705Fji; INeTdLn++) {
                scanf ("%d", &qRqTON[ehZjfPvl7C][INeTdLn]);
            }
        }
        ywUHxyEkO = PC3w56Gemk (qRqTON, mkGPcyARF0BH);
        printf ("%d\n", ywUHxyEkO);
    }
}

