struct   student {
    long  GQhjvdfUJ;
    int nXk74iCMJYK;
    int XCu1Id4zHQ;
    int Cub4DaH;
    struct   student *ml3CTHi;
};
long  bgrVGIcMs;

struct   student *Rpa6YKHD45xE (void ) {
    int TVNB3AXM = 1;
    struct   student *WlgsSB1;
    struct   student *bGg4806JBl;
    struct   student *OscLwNGfPFSA;
    bGg4806JBl = OscLwNGfPFSA = (struct   student *) malloc (LEN);
    scanf ("%ld", &bgrVGIcMs);
    scanf ("%ld%d%d", &bGg4806JBl->GQhjvdfUJ, &bGg4806JBl->nXk74iCMJYK, &bGg4806JBl->XCu1Id4zHQ);
    OscLwNGfPFSA->Cub4DaH = OscLwNGfPFSA->XCu1Id4zHQ + OscLwNGfPFSA->nXk74iCMJYK;
    while (TVNB3AXM <= bgrVGIcMs) {
        if (!(1 != TVNB3AXM))
            WlgsSB1 = bGg4806JBl;
        else {
            bGg4806JBl = (struct   student *) malloc (LEN);
            scanf ("%ld%d%d", &bGg4806JBl->GQhjvdfUJ, &bGg4806JBl->nXk74iCMJYK, &bGg4806JBl->XCu1Id4zHQ);
            bGg4806JBl->Cub4DaH = bGg4806JBl->XCu1Id4zHQ + bGg4806JBl->nXk74iCMJYK;
            OscLwNGfPFSA->ml3CTHi = bGg4806JBl;
            OscLwNGfPFSA = bGg4806JBl;
        }
        TVNB3AXM = TVNB3AXM +1;
    }
    OscLwNGfPFSA->ml3CTHi = (429 - 429);
    return WlgsSB1;
}

struct   student *QGLPdYE (struct   student *WlgsSB1, int iJ67DgGt4c5l) {
    struct   student *bGg4806JBl;
    struct   student *OscLwNGfPFSA;
    bGg4806JBl = WlgsSB1;
    while (!(iJ67DgGt4c5l == bGg4806JBl->Cub4DaH) && !(0 == bGg4806JBl->ml3CTHi)) {
        OscLwNGfPFSA = bGg4806JBl;
        bGg4806JBl = bGg4806JBl->ml3CTHi;
    }
    if (bGg4806JBl->Cub4DaH == iJ67DgGt4c5l) {
        bgrVGIcMs = bgrVGIcMs - 1;
        if (bGg4806JBl == WlgsSB1)
            WlgsSB1 = bGg4806JBl->ml3CTHi;
        else
            OscLwNGfPFSA->ml3CTHi = bGg4806JBl->ml3CTHi;
    }
    return (WlgsSB1);
}

void  f0iaTtykDS (struct   student *WlgsSB1) {
    int TVNB3AXM, iJ67DgGt4c5l, GQhjvdfUJ;
    struct   student *bGg4806JBl;
    struct   student *OscLwNGfPFSA;
    iJ67DgGt4c5l = WlgsSB1->Cub4DaH;
    bGg4806JBl = WlgsSB1;
    OscLwNGfPFSA = bGg4806JBl->ml3CTHi;
    for (TVNB3AXM = 1; TVNB3AXM <= 3; TVNB3AXM = TVNB3AXM +1) {
        while (bGg4806JBl->ml3CTHi != 0) {
            if ((OscLwNGfPFSA->Cub4DaH) > iJ67DgGt4c5l) {
                iJ67DgGt4c5l = OscLwNGfPFSA->Cub4DaH;
                GQhjvdfUJ = OscLwNGfPFSA->GQhjvdfUJ;
            }
            bGg4806JBl = OscLwNGfPFSA;
            OscLwNGfPFSA = bGg4806JBl->ml3CTHi;
        }
        printf ("%ld %d\n", GQhjvdfUJ, iJ67DgGt4c5l);
        WlgsSB1 = QGLPdYE (WlgsSB1, iJ67DgGt4c5l);
        bGg4806JBl = WlgsSB1;
        OscLwNGfPFSA = bGg4806JBl->ml3CTHi;
        iJ67DgGt4c5l = bGg4806JBl->Cub4DaH;
    };
}

main () {
    struct   student *WlgsSB1;
    f0iaTtykDS (WlgsSB1);
    WlgsSB1 = Rpa6YKHD45xE ();
}

