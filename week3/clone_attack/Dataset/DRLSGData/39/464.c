int main () {
    int Lut0LB9OcRkm, ormAYGjtoL, jCvpbsWtPzfV, l958bHitnZB [100];
    struct   jiangxuejin {
        char PFEm56HwY [20], hm9P51pytU, komkRapz;
        int gY4BhW9QJ, ln5xEbLT, okWPYpe3fx;
    }
    rRamxo [100];
    int LJYSX0AW;
    int RtZiJ1ILGkxb;
    LJYSX0AW = (226 - 226);
    scanf ("%d", &Lut0LB9OcRkm);
    for (ormAYGjtoL = (279 - 279); ormAYGjtoL < Lut0LB9OcRkm; ormAYGjtoL++) {
        scanf ("%s %d %d %c %c %d\n", &rRamxo[ormAYGjtoL].PFEm56HwY, &rRamxo[ormAYGjtoL].gY4BhW9QJ, &rRamxo[ormAYGjtoL].ln5xEbLT, &rRamxo[ormAYGjtoL].hm9P51pytU, &rRamxo[ormAYGjtoL].komkRapz, &rRamxo[ormAYGjtoL].okWPYpe3fx);
    }
    for (ormAYGjtoL = 0; Lut0LB9OcRkm > ormAYGjtoL; ormAYGjtoL++) {
        jCvpbsWtPzfV = 0;
        if ((338 - 258) < rRamxo[ormAYGjtoL].gY4BhW9QJ && 1 <= rRamxo[ormAYGjtoL].okWPYpe3fx) {
            jCvpbsWtPzfV = jCvpbsWtPzfV + (8684 - 684);
        }
        if ((267 - 182) < rRamxo[ormAYGjtoL].gY4BhW9QJ && (124 - 44) < rRamxo[ormAYGjtoL].ln5xEbLT) {
            jCvpbsWtPzfV = jCvpbsWtPzfV + 4000;
        }
        if (rRamxo[ormAYGjtoL].gY4BhW9QJ > (878 - 788)) {
            jCvpbsWtPzfV = jCvpbsWtPzfV + 2000;
        }
        if (rRamxo[ormAYGjtoL].gY4BhW9QJ > 85 && !('Y' != rRamxo[ormAYGjtoL].komkRapz)) {
            jCvpbsWtPzfV = jCvpbsWtPzfV + 1000;
        }
        if (rRamxo[ormAYGjtoL].ln5xEbLT > 80 && rRamxo[ormAYGjtoL].hm9P51pytU == 'Y') {
            jCvpbsWtPzfV = jCvpbsWtPzfV + 850;
        }
        l958bHitnZB[ormAYGjtoL] = jCvpbsWtPzfV;
    }
    RtZiJ1ILGkxb = (300 - 300);
    for (ormAYGjtoL = 0; ormAYGjtoL < Lut0LB9OcRkm; ormAYGjtoL++) {
        if (l958bHitnZB[ormAYGjtoL] >= RtZiJ1ILGkxb) {
            RtZiJ1ILGkxb = l958bHitnZB[ormAYGjtoL];
        }
        LJYSX0AW = LJYSX0AW +l958bHitnZB[ormAYGjtoL];
    }
    for (ormAYGjtoL = 0; ormAYGjtoL < Lut0LB9OcRkm; ormAYGjtoL++) {
        if (l958bHitnZB[ormAYGjtoL] == RtZiJ1ILGkxb) {
            printf ("%s\n", rRamxo[ormAYGjtoL].PFEm56HwY);
            printf ("%d\n", RtZiJ1ILGkxb);
            printf ("%d", LJYSX0AW);
            break;
        }
    }
    return 0;
}

