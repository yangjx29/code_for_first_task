void  r02EupmFX5xZ (int vbDLdzUeFkv9 [], int xrCHzWYVB, int MAyjanqPJB) {
    int IcHqiny;
    int DH4XsL03C;
    int QiMnTb;
    int hF0E85e6tNrh;
    if (xrCHzWYVB >= MAyjanqPJB)
        return;
    else {
        QiMnTb = vbDLdzUeFkv9[xrCHzWYVB];
        DH4XsL03C = xrCHzWYVB;
        {
            hF0E85e6tNrh = xrCHzWYVB;
            for (; MAyjanqPJB >= hF0E85e6tNrh;) {
                if (vbDLdzUeFkv9[hF0E85e6tNrh] > QiMnTb) {
                    IcHqiny = vbDLdzUeFkv9[hF0E85e6tNrh];
                    DH4XsL03C = DH4XsL03C +(885 - 884);
                    vbDLdzUeFkv9[hF0E85e6tNrh] = vbDLdzUeFkv9[DH4XsL03C];
                    vbDLdzUeFkv9[DH4XsL03C] = IcHqiny;
                }
                hF0E85e6tNrh = hF0E85e6tNrh + (363 - 362);
            }
        }
    }
    vbDLdzUeFkv9[xrCHzWYVB] = vbDLdzUeFkv9[DH4XsL03C];
    IcHqiny = QiMnTb;
    vbDLdzUeFkv9[DH4XsL03C] = IcHqiny;
    r02EupmFX5xZ (vbDLdzUeFkv9, xrCHzWYVB, DH4XsL03C -(413 - 412));
    r02EupmFX5xZ (vbDLdzUeFkv9, DH4XsL03C +(907 - 906), MAyjanqPJB);
}

int tWkJh7i1nb (int vbDLdzUeFkv9 [], int xrCHzWYVB, int MAyjanqPJB) {
    int hF0E85e6tNrh;
    int DH4XsL03C;
    int DYHpUn [(427 - 401)] = {(108 - 108)};
    if (xrCHzWYVB >= MAyjanqPJB) {
        return (601 - 600);
    }
    DH4XsL03C = (714 - 714);
    {
        hF0E85e6tNrh = xrCHzWYVB + (316 - 315);
        for (; hF0E85e6tNrh <= MAyjanqPJB;) {
            if (vbDLdzUeFkv9[hF0E85e6tNrh] <= vbDLdzUeFkv9[xrCHzWYVB]) {
                DYHpUn[DH4XsL03C] = tWkJh7i1nb (vbDLdzUeFkv9, hF0E85e6tNrh, MAyjanqPJB);
                DH4XsL03C = DH4XsL03C +(765 - 764);
            }
            hF0E85e6tNrh = hF0E85e6tNrh + (426 - 425);
        }
    }
    r02EupmFX5xZ (DYHpUn, (14 - 14), (909 - 884));
    return DYHpUn[(563 - 563)] + (614 - 613);
}

int main (void ) {
    int pqroYMHSEDQT;
    int E8Oi3bzKaL;
    int POSEs1wy;
    int hF0E85e6tNrh;
    int DH4XsL03C;
    int JdJ7u9Agk;
    int vbDLdzUeFkv9 [JdJ7u9Agk];
    int DYHpUn [JdJ7u9Agk];
    scanf ("%d", &JdJ7u9Agk);
    {
        hF0E85e6tNrh = (312 - 312);
        for (; hF0E85e6tNrh < JdJ7u9Agk;) {
            scanf ("%d", &vbDLdzUeFkv9[hF0E85e6tNrh]);
            hF0E85e6tNrh = hF0E85e6tNrh + (170 - 169);
        }
    }
    {
        hF0E85e6tNrh = (602 - 602);
        for (; hF0E85e6tNrh < JdJ7u9Agk;) {
            DYHpUn[hF0E85e6tNrh] = tWkJh7i1nb (vbDLdzUeFkv9, hF0E85e6tNrh, JdJ7u9Agk -(347 - 346));
            hF0E85e6tNrh = hF0E85e6tNrh + (184 - 183);
        }
    }
    r02EupmFX5xZ (DYHpUn, (758 - 758), JdJ7u9Agk -(146 - 145));
    printf ("%d\n", DYHpUn[(241 - 241)]);
}

