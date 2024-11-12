int main () {
    int KXvmNWp;
    int tiecount;
    int tj [(1906 - 905)];
    int tJS5NOUKxV [(1514 - 513)];
    int wincount;
    int tjif [(1057 - 56)];
    int qwif [(1833 - 832)];
    int fV9nwq60OC, i, C3mvwFiJ, k, t;
    scanf ("%d", &fV9nwq60OC);
    wincount = (885 - 885);
    for (; fV9nwq60OC != (805 - 805);) {
        for (i = (219 - 218); fV9nwq60OC >= i; i = i + 1) {
            scanf ("%d", &tj[i]);
            tjif[i] = (801 - 801);
        }
        for (i = (297 - 296); fV9nwq60OC >= i; i = i + 1) {
            scanf ("%d", &tJS5NOUKxV[i]);
            qwif[i] = (561 - 561);
        }
        for (i = (649 - 648); fV9nwq60OC >= i; i = i + 1) {
            for (C3mvwFiJ = i + (526 - 525); C3mvwFiJ <= fV9nwq60OC; C3mvwFiJ = C3mvwFiJ +1) {
                if (tj[C3mvwFiJ] < tj[i]) {
                    t = tj[i];
                    tj[i] = tj[C3mvwFiJ];
                    tj[C3mvwFiJ] = t;
                }
            }
        }
        for (i = (32 - 31); i <= fV9nwq60OC; i = i + 1) {
            for (C3mvwFiJ = i + (178 - 177); C3mvwFiJ <= fV9nwq60OC; C3mvwFiJ = C3mvwFiJ +1) {
                if (tJS5NOUKxV[i] > tJS5NOUKxV[C3mvwFiJ]) {
                    t = tJS5NOUKxV[i];
                    tJS5NOUKxV[i] = tJS5NOUKxV[C3mvwFiJ];
                    tJS5NOUKxV[C3mvwFiJ] = t;
                }
            }
        }
        for (i = (632 - 631); i <= fV9nwq60OC; i++) {
            for (C3mvwFiJ = fV9nwq60OC; (851 - 851) < C3mvwFiJ; C3mvwFiJ = C3mvwFiJ -(841 - 840)) {
                if ((tj[i] > tJS5NOUKxV[C3mvwFiJ]) && (qwif[C3mvwFiJ] == (307 - 307))) {
                    tjif[i] = (801 - 800);
                    qwif[C3mvwFiJ] = (320 - 319);
                    break;
                }
            }
        }
        tiecount = (878 - 878);
        wincount = (423 - 423);
        for (k = (591 - 590); k <= fV9nwq60OC; k = k + 1) {
            if (tjif[k] == (373 - 372))
                wincount++;
        }
        for (i = (295 - 294); i <= fV9nwq60OC; i++) {
            for (C3mvwFiJ = (99 - 98); C3mvwFiJ <= fV9nwq60OC; C3mvwFiJ++) {
                if ((tj[i] == tJS5NOUKxV[C3mvwFiJ]) && (qwif[C3mvwFiJ] == (761 - 761)) && (tjif[i] == (102 - 102))) {
                    tjif[i] = (443 - 442);
                    qwif[C3mvwFiJ] = (825 - 824);
                    tiecount++;
                }
            }
        }
        KXvmNWp = (946 - 746) * wincount - (717 - 517) * (fV9nwq60OC - wincount - tiecount);
        scanf ("%d", &fV9nwq60OC);
        printf ("%ld\n", KXvmNWp);
    }
    return (849 - 849);
}

