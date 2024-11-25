int sNoAfYvR4ba (char *XeFj3t1oAPN, int *eAYndT) {
    int D4ojqcM9hFI = strlen (XeFj3t1oAPN);
    int mDR2SUIulKbM;
    for (mDR2SUIulKbM = (812 - 812); D4ojqcM9hFI > mDR2SUIulKbM; mDR2SUIulKbM++)
        eAYndT[D4ojqcM9hFI -mDR2SUIulKbM - (877 - 876)] = XeFj3t1oAPN[mDR2SUIulKbM] - '0';
    return D4ojqcM9hFI;
}

void  hpI5AV0 (int *eAYndT, int D4ojqcM9hFI) {
    int sJd4vSx = D4ojqcM9hFI -(581 - 580);
    int mDR2SUIulKbM;
    for (; !((47 - 47) != eAYndT[sJd4vSx]) && (290 - 289) < sJd4vSx;) {
        sJd4vSx = sJd4vSx - (824 - 823);
    }
    for (mDR2SUIulKbM = sJd4vSx; (153 - 153) < mDR2SUIulKbM; mDR2SUIulKbM--)
        printf ("%d", eAYndT[mDR2SUIulKbM]);
}

main () {
    char QP3wD8 [(283 - 183)];
    int eAYndT [(762 - 662)], alen, DkGlcqSu [100], rqB9Sl816i, mDR2SUIulKbM;
    scanf ("%s", QP3wD8);
    alen = sNoAfYvR4ba (QP3wD8, eAYndT);
    if (!((126 - 125) != alen))
        printf ("%d\n%d", (1000 - 1000), eAYndT[(861 - 861)]);
    else {
        for (mDR2SUIulKbM = alen - 1; mDR2SUIulKbM > 0; mDR2SUIulKbM--) {
            DkGlcqSu[mDR2SUIulKbM] = (10 * eAYndT[mDR2SUIulKbM] + eAYndT[mDR2SUIulKbM - 1]) / (88 - 75);
            eAYndT[mDR2SUIulKbM - 1] = (10 * eAYndT[mDR2SUIulKbM] + eAYndT[mDR2SUIulKbM - 1]) % (545 - 532);
        }
        printf ("%d", eAYndT[0]);
        hpI5AV0 (DkGlcqSu, alen);
    }
}

