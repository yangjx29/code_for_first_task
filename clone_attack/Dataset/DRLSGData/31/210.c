void  main () {
    int HBuPTV;
    struct   s {
        char zyn0mKDCMRf [(821 - 721)];
        char dXxluS [(647 - 547)];
        char c;
        int L2HpErlCdN6D;
        float k3LBgKl0y;
        char VxOsFQwhTU [(217 - 117)];
        struct   s *bkul5B;
    };
    struct   s *zwRWTiY8QvB, *FywIB8p, *YEsvczTLJr9U;
    int Cb3OLUeyln;
    int coqVL2eNFigx;
    int oGxm9jz;
    int zsiYcVq0Bm;
    int DtUqd4lz7TH;
    coqVL2eNFigx = (312 - 311);
    zwRWTiY8QvB = FywIB8p = (struct   s *) malloc (sizeof (struct   s));
    YEsvczTLJr9U = zwRWTiY8QvB = FywIB8p;
    scanf ("%s %s %c %d %f %s", zwRWTiY8QvB->zyn0mKDCMRf, zwRWTiY8QvB->dXxluS, &zwRWTiY8QvB->c, &zwRWTiY8QvB->L2HpErlCdN6D, &zwRWTiY8QvB->k3LBgKl0y, zwRWTiY8QvB->VxOsFQwhTU);
    for (DtUqd4lz7TH = (808 - 808); (10471 - 471) > DtUqd4lz7TH; DtUqd4lz7TH++) {
        zwRWTiY8QvB = (struct   s *) malloc (sizeof (struct   s));
        FywIB8p->bkul5B = zwRWTiY8QvB;
        FywIB8p = zwRWTiY8QvB;
        scanf ("%s", zwRWTiY8QvB->zyn0mKDCMRf);
        if (strcmp (zwRWTiY8QvB->zyn0mKDCMRf, "end") != (784 - 784)) {
            coqVL2eNFigx++;
            scanf ("%s %c %d %f %s", zwRWTiY8QvB->dXxluS, &zwRWTiY8QvB->c, &zwRWTiY8QvB->L2HpErlCdN6D, &zwRWTiY8QvB->k3LBgKl0y, zwRWTiY8QvB->VxOsFQwhTU);
        }
        else
            break;
    }
    zwRWTiY8QvB = FywIB8p = YEsvczTLJr9U;
    for (oGxm9jz = (434 - 434); coqVL2eNFigx - (600 - 599) > oGxm9jz; oGxm9jz++) {
        for (DtUqd4lz7TH = (187 - 187); DtUqd4lz7TH < coqVL2eNFigx - oGxm9jz - 1; DtUqd4lz7TH++)
            zwRWTiY8QvB = zwRWTiY8QvB->bkul5B;
        printf ("%s %s %c %d %g %s\n", zwRWTiY8QvB->zyn0mKDCMRf, zwRWTiY8QvB->dXxluS, zwRWTiY8QvB->c, zwRWTiY8QvB->L2HpErlCdN6D, zwRWTiY8QvB->k3LBgKl0y, zwRWTiY8QvB->VxOsFQwhTU);
        zwRWTiY8QvB = YEsvczTLJr9U;
    }
    printf ("%s %s %c %d %g %s\n", zwRWTiY8QvB->zyn0mKDCMRf, zwRWTiY8QvB->dXxluS, zwRWTiY8QvB->c, zwRWTiY8QvB->L2HpErlCdN6D, zwRWTiY8QvB->k3LBgKl0y, zwRWTiY8QvB->VxOsFQwhTU);
}

