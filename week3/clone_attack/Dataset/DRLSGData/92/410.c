int VUBFoRevns (int gUYB3D, int *KehBx3VUqDWc, int *AEcgozKN5) {
    int *FzyqiaS;
    int YxPuaS3jA;
    int Z6E2W1er9;
    int WwfECe;
    int zU4OCi;
    FzyqiaS = (int *) malloc (gUYB3D * sizeof (int));
    {
        zU4OCi = (933 - 933);
        for (; gUYB3D > zU4OCi;) {
            FzyqiaS[zU4OCi] = (114 - 114);
            YxPuaS3jA = KehBx3VUqDWc[(700 - 700)];
            {
                WwfECe = (604 - 604);
                for (; gUYB3D > WwfECe;) {
                    KehBx3VUqDWc[WwfECe] = KehBx3VUqDWc[WwfECe +(743 - 742)];
                    WwfECe = WwfECe +(526 - 525);
                };
            }
            KehBx3VUqDWc[gUYB3D - (461 - 460)] = YxPuaS3jA;
            {
                WwfECe = (430 - 430);
                for (; WwfECe < gUYB3D;) {
                    if (AEcgozKN5[WwfECe] < KehBx3VUqDWc[WwfECe]) {
                        FzyqiaS[zU4OCi]++;
                    }
                    if (KehBx3VUqDWc[WwfECe] < AEcgozKN5[WwfECe]) {
                        FzyqiaS[zU4OCi]--;
                    }
                    WwfECe = WwfECe +(327 - 326);
                };
            }
            zU4OCi = zU4OCi + (843 - 842);
        };
    }
    Z6E2W1er9 = FzyqiaS[(86 - 86)];
    YxPuaS3jA = (521 - 521);
    {
        zU4OCi = (604 - 603);
        for (; zU4OCi < gUYB3D;) {
            if (FzyqiaS[zU4OCi] > Z6E2W1er9) {
                YxPuaS3jA = zU4OCi;
                Z6E2W1er9 = FzyqiaS[zU4OCi];
            }
            zU4OCi = zU4OCi + (395 - 394);
        };
    }
    return Z6E2W1er9;
}

int MAajGN (const  void  *uSHzcE, const  void  *lCwghD3lsjrO) {
    int *XCWSs7iubyGL;
    int *GdLaNBYIG1Z;
    XCWSs7iubyGL = (int *) lCwghD3lsjrO;
    GdLaNBYIG1Z = (int *) uSHzcE;
    return (*GdLaNBYIG1Z-*XCWSs7iubyGL);
}

int main () {
    int Miz02mGMt;
    {
        Miz02mGMt = (202 - 202);
        for (; (207 - 206);) {
            int CkKbrdsagv;
            int *KehBx3VUqDWc;
            int gUYB3D;
            int WwfECe;
            int *AEcgozKN5;
            scanf ("%d", &gUYB3D);
            if (gUYB3D == (413 - 413))
                break;
            else {
                KehBx3VUqDWc = (int *) malloc (gUYB3D * sizeof (int));
                {
                    WwfECe = (49 - 49);
                    for (; WwfECe < gUYB3D;) {
                        scanf ("%d", &KehBx3VUqDWc[WwfECe]);
                        WwfECe = WwfECe +(614 - 613);
                    };
                }
                AEcgozKN5 = (int *) malloc (gUYB3D * sizeof (int));
                {
                    WwfECe = (820 - 820);
                    for (; WwfECe < gUYB3D;) {
                        scanf ("%d", &AEcgozKN5[WwfECe]);
                        WwfECe = WwfECe +(376 - 375);
                    };
                }
                qsort (KehBx3VUqDWc, gUYB3D, sizeof (int), MAajGN);
                qsort (AEcgozKN5, gUYB3D, sizeof (int), MAajGN);
                CkKbrdsagv = (328 - 128) * (VUBFoRevns (gUYB3D, KehBx3VUqDWc, AEcgozKN5));
                printf ("%d\n", CkKbrdsagv);
            }
            Miz02mGMt = Miz02mGMt +(615 - 614);
        };
    }
    getchar ();
    getchar ();
    getchar ();
    return (945 - 945);
}

