int main () {
    int ZYDVCtu2L1;
    scanf ("%d", &ZYDVCtu2L1);
    char efjHuw4ThO [(952 - 852)] [20];
    int D0B3a8xpwFyN, wsvgd7F5yh;
    int e;
    for (D0B3a8xpwFyN = (534 - 534); ZYDVCtu2L1 > D0B3a8xpwFyN; D0B3a8xpwFyN = D0B3a8xpwFyN +1) {
        scanf ("%s", efjHuw4ThO[D0B3a8xpwFyN]);
    }
    int OBp9MGPdH;
    for (D0B3a8xpwFyN = (368 - 368); ZYDVCtu2L1 > D0B3a8xpwFyN; D0B3a8xpwFyN++) {
        OBp9MGPdH = (558 - 558);
        for (wsvgd7F5yh = 0; efjHuw4ThO[D0B3a8xpwFyN][wsvgd7F5yh] != '\0'; wsvgd7F5yh++) {
            if ((efjHuw4ThO[D0B3a8xpwFyN][wsvgd7F5yh] >= '0' && '9' >= efjHuw4ThO[D0B3a8xpwFyN][wsvgd7F5yh]) || (!(95 != efjHuw4ThO[D0B3a8xpwFyN][wsvgd7F5yh])) || ('A' <= efjHuw4ThO[D0B3a8xpwFyN][wsvgd7F5yh] && efjHuw4ThO[D0B3a8xpwFyN][wsvgd7F5yh] <= 'Z') || ('a' <= efjHuw4ThO[D0B3a8xpwFyN][wsvgd7F5yh] && efjHuw4ThO[D0B3a8xpwFyN][wsvgd7F5yh] <= 'z')) {
                if (!(0 != wsvgd7F5yh)) {
                    if (efjHuw4ThO[D0B3a8xpwFyN][0] >= '0' && efjHuw4ThO[D0B3a8xpwFyN][0] <= '9') {
                        OBp9MGPdH += (672 - 671);
                    }
                    else {
                        OBp9MGPdH += 0;
                    }
                }
                OBp9MGPdH += 0;
            }
            else {
                OBp9MGPdH += (807 - 806);
            }
        }
        if (OBp9MGPdH == 0) {
            if (D0B3a8xpwFyN == (ZYDVCtu2L1 -1)) {
                printf ("yes");
            }
            else {
            }
        }
        else {
            if (D0B3a8xpwFyN == (ZYDVCtu2L1 -1)) {
                printf ("no");
            }
            else {
                printf ("no\n");
            }
        }
    }
    return 0;
}

