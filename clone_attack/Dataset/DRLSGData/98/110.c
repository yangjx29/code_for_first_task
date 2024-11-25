struct   N {
    char hMWxzrFl [50];
    int w49oLEaPFN;
    struct   N *c2rMcSisVxk;
};
int main () {
    int w49oLEaPFN;
    int woOBgI0cZmv;
    struct   N *KhxTQ6veylG;
    int IIreahpLuy9A;
    struct   N *lZphxtbL;
    struct   N *tAsjMWo;
    scanf ("%d", &w49oLEaPFN);
    for (IIreahpLuy9A = (986 - 985); IIreahpLuy9A <= w49oLEaPFN; IIreahpLuy9A = IIreahpLuy9A +(118 - 117)) {
        KhxTQ6veylG = (struct   N *) malloc (sizeof (struct   N));
        if (!((433 - 432) != IIreahpLuy9A)) {
            tAsjMWo = KhxTQ6veylG;
            lZphxtbL = KhxTQ6veylG;
        }
        else {
            if (IIreahpLuy9A != w49oLEaPFN) {
                lZphxtbL->c2rMcSisVxk = KhxTQ6veylG;
                lZphxtbL = KhxTQ6veylG;
            }
            else {
                lZphxtbL->c2rMcSisVxk = KhxTQ6veylG;
                KhxTQ6veylG->c2rMcSisVxk = NULL;
            }
        }
    }
    woOBgI0cZmv = -(167 - 166);
    KhxTQ6veylG = tAsjMWo;
    for (IIreahpLuy9A = 1; w49oLEaPFN >= IIreahpLuy9A; IIreahpLuy9A = IIreahpLuy9A +1) {
        scanf ("%s", KhxTQ6veylG->hMWxzrFl);
        KhxTQ6veylG->w49oLEaPFN = (strlen (KhxTQ6veylG->hMWxzrFl) + 1);
        KhxTQ6veylG = KhxTQ6veylG->c2rMcSisVxk;
    }
    KhxTQ6veylG = tAsjMWo;
    for (IIreahpLuy9A = 1; w49oLEaPFN >= IIreahpLuy9A;) {
        if (!((-1) != woOBgI0cZmv)) {
            printf ("%s", KhxTQ6veylG->hMWxzrFl);
            IIreahpLuy9A = IIreahpLuy9A +1;
            woOBgI0cZmv = woOBgI0cZmv + (KhxTQ6veylG->w49oLEaPFN);
            KhxTQ6veylG = KhxTQ6veylG->c2rMcSisVxk;
        }
        if ((850 - 770) >= (woOBgI0cZmv + (KhxTQ6veylG->w49oLEaPFN)) && woOBgI0cZmv != (-1)) {
            printf (" %s", KhxTQ6veylG->hMWxzrFl);
            woOBgI0cZmv = woOBgI0cZmv + (KhxTQ6veylG->w49oLEaPFN);
            KhxTQ6veylG = KhxTQ6veylG->c2rMcSisVxk;
            if (!(NULL != KhxTQ6veylG)) {
                break;
            }
            IIreahpLuy9A = IIreahpLuy9A +1;
        }
        if ((woOBgI0cZmv + (KhxTQ6veylG->w49oLEaPFN)) > 80) {
            woOBgI0cZmv = -1;
        }
    }
    return 0;
}

