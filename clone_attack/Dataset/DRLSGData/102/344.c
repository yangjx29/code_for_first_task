int main () {
    double  msIoYc;
    double  W68TOF20itNV;
    char hZRscDuh4n [(1007 - 1000)];
    double  NbiFc4LDRJ [(878 - 778)];
    int jWaxDn;
    int Z087g5;
    int glGeCHZxrdE;
    int ALWpMf7;
    int ZEzkW6l;
    double  ZkpiCB [(115 - 15)];
    scanf ("%d", &glGeCHZxrdE);
    ALWpMf7 = (127 - 127);
    ZEzkW6l = (641 - 641);
    for (Z087g5 = (81 - 81); glGeCHZxrdE > Z087g5; Z087g5++) {
        scanf ("%s%lf", hZRscDuh4n, &W68TOF20itNV);
        if (!('m' != hZRscDuh4n[(568 - 568)])) {
            ZkpiCB[ZEzkW6l] = W68TOF20itNV;
            ZEzkW6l += (481 - 480);
        }
        if (!('f' != hZRscDuh4n[(646 - 646)])) {
            NbiFc4LDRJ[ALWpMf7] = W68TOF20itNV;
            ALWpMf7 += (581 - 580);
        }
    }
    for (Z087g5 = (754 - 754); Z087g5 < ZEzkW6l; Z087g5++) {
        jWaxDn = (626 - 626);
        for (; jWaxDn < ZEzkW6l -(364 - 363);) {
            if (ZkpiCB[jWaxDn + (164 - 163)] < ZkpiCB[jWaxDn]) {
                msIoYc = ZkpiCB[jWaxDn];
                ZkpiCB[jWaxDn] = ZkpiCB[jWaxDn + (547 - 546)];
                ZkpiCB[jWaxDn + (272 - 271)] = msIoYc;
            }
            jWaxDn++;
        }
    }
    {
        Z087g5 = (596 - 596);
        for (; ALWpMf7 > Z087g5;) {
            Z087g5++;
            {
                jWaxDn = (604 - 604);
                for (; ALWpMf7 -(821 - 820) > jWaxDn;) {
                    if (NbiFc4LDRJ[jWaxDn] < NbiFc4LDRJ[jWaxDn + (782 - 781)]) {
                        msIoYc = NbiFc4LDRJ[jWaxDn];
                        NbiFc4LDRJ[jWaxDn] = NbiFc4LDRJ[jWaxDn + (318 - 317)];
                        NbiFc4LDRJ[jWaxDn + (248 - 247)] = msIoYc;
                    }
                    jWaxDn++;
                }
            }
        }
    }
    printf ("%.2lf", ZkpiCB[(578 - 578)]);
    for (Z087g5 = (418 - 417); Z087g5 < ZEzkW6l; Z087g5++)
        printf (" %.2lf", ZkpiCB[Z087g5]);
    {
        Z087g5 = (649 - 649);
        for (; ALWpMf7 > Z087g5;) {
            printf (" %.2lf", NbiFc4LDRJ[Z087g5]);
            Z087g5++;
        }
    }
    return (671 - 671);
}

