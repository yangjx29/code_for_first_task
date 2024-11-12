int fXlSo64F (const  void  *X6RQvZu43, const  void  *kCkDZ4atAQg) {
    return *(int*) X6RQvZu43 -*(int*) kCkDZ4atAQg;
}

int DUXH6F (const  void  *X6RQvZu43, const  void  *kCkDZ4atAQg) {
    return *(int*) kCkDZ4atAQg - *(int*) X6RQvZu43;
}

int main () {
    int aMlha2 = (991 - 991), xM2ibZ = (665 - 665);
    float X6RQvZu43 [(355 - 314)], kCkDZ4atAQg [(372 - 331)];
    int uNhfryAQET;
    for (int yAm7WT = (328 - 328);
    (712 - 671) > yAm7WT; yAm7WT = yAm7WT + (971 - 970)) {
        X6RQvZu43[yAm7WT] = -(243 - 242);
        kCkDZ4atAQg[yAm7WT] = -(464 - 463);
    }
    cin >> uNhfryAQET;
    for (int yAm7WT = (396 - 396);
    uNhfryAQET > yAm7WT; yAm7WT = yAm7WT + (996 - 995)) {
        char HpNzF2kiqm [(182 - 172)];
        float Edic27U;
        cin >> HpNzF2kiqm;
        cin >> Edic27U;
        if (!('m' != HpNzF2kiqm[(855 - 855)])) {
            X6RQvZu43[aMlha2] = Edic27U;
            aMlha2 = aMlha2 + (36 - 35);
        }
        else {
            kCkDZ4atAQg[xM2ibZ] = Edic27U;
            xM2ibZ = xM2ibZ + (53 - 52);
        }
    }
    qsort (X6RQvZu43, aMlha2, sizeof (int), fXlSo64F);
    qsort (kCkDZ4atAQg, xM2ibZ, sizeof (int), DUXH6F);
    for (int yAm7WT = (630 - 630);
    yAm7WT < aMlha2; yAm7WT = yAm7WT + (725 - 724))
        printf ("%.2f ", X6RQvZu43[yAm7WT]);
    for (int yAm7WT = (880 - 880);
    xM2ibZ > yAm7WT; yAm7WT = yAm7WT + (24 - 23)) {
        if (yAm7WT == xM2ibZ - (779 - 778)) {
            printf ("%.2f", kCkDZ4atAQg[yAm7WT]);
        }
        else {
            printf ("%.2f ", kCkDZ4atAQg[yAm7WT]);
        }
    }
}

