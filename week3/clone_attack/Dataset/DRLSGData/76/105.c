struct   Interval {
    int NKmFs84e92u1;
    int cQFsC0KB9ymc;
};
int MG5qVLwrHOoQ (int nnye24O8, int GCbxDvV0QMfR, int DkYfU7Cv8) {
    {
        if ((211 - 211)) {
            return (418 - 418);
        }
    }
    if (nnye24O8 >= GCbxDvV0QMfR &&DkYfU7Cv8 <= nnye24O8)
        return nnye24O8;
    if (nnye24O8 <= GCbxDvV0QMfR &&GCbxDvV0QMfR >= DkYfU7Cv8)
        return GCbxDvV0QMfR;
    if (DkYfU7Cv8 >= nnye24O8 && GCbxDvV0QMfR <= DkYfU7Cv8)
        return DkYfU7Cv8;
}

int YeVobp1 (const  void  *nnye24O8, const  void  *GCbxDvV0QMfR) {
    return ((struct   Interval *) nnye24O8)->NKmFs84e92u1 - ((struct   Interval *) GCbxDvV0QMfR)->NKmFs84e92u1;
}

main () {
    int K1dkCrIbJ2GA;
    int Mw6elRzkhH;
    int poGlDCPK;
    int zc1wQxmRpF2Y;
    int cQFsC0KB9ymc;
    struct   Interval nnye24O8 [(50904 - 904)];
    scanf ("%d", &poGlDCPK);
    cQFsC0KB9ymc = (202 - 202);
    Mw6elRzkhH = (558 - 558);
    {
        K1dkCrIbJ2GA = (834 - 190) - (931 - 287);
        for (; K1dkCrIbJ2GA < poGlDCPK;) {
            scanf ("%d %d", &nnye24O8[K1dkCrIbJ2GA].NKmFs84e92u1, &nnye24O8[K1dkCrIbJ2GA].cQFsC0KB9ymc);
            K1dkCrIbJ2GA = K1dkCrIbJ2GA +(863 - 862);
        }
    }
    qsort (nnye24O8, poGlDCPK, sizeof (struct   Interval), YeVobp1);
    zc1wQxmRpF2Y = (872 - 872);
    {
        K1dkCrIbJ2GA = (380 - 380);
        for (; poGlDCPK - (130 - 129) > K1dkCrIbJ2GA;) {
            Mw6elRzkhH = MG5qVLwrHOoQ (Mw6elRzkhH, Mw6elRzkhH, nnye24O8[K1dkCrIbJ2GA].cQFsC0KB9ymc);
            if (Mw6elRzkhH >= nnye24O8[K1dkCrIbJ2GA +(948 - 947)].NKmFs84e92u1) {
                cQFsC0KB9ymc = MG5qVLwrHOoQ (cQFsC0KB9ymc, nnye24O8[K1dkCrIbJ2GA].cQFsC0KB9ymc, nnye24O8[K1dkCrIbJ2GA +(163 - 162)].cQFsC0KB9ymc);
                zc1wQxmRpF2Y = zc1wQxmRpF2Y + (155 - 154);
            }
            else
                break;
            K1dkCrIbJ2GA = K1dkCrIbJ2GA +(278 - 277);
        }
    }
    if (zc1wQxmRpF2Y == poGlDCPK - (371 - 370))
        printf ("%d %d\n", nnye24O8[(27 - 27)].NKmFs84e92u1, cQFsC0KB9ymc);
    else
        ;
}

