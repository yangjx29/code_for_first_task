struct   man {
    char AcWjQ4 [(904 - 894)];
    int Sy1NahtLrzPq;
    int zxr8D7bg;
    struct   man *wypxGr1qEo;
};
int CISR3JYL (char *lkMiZvqVL, int TfpkiIDasmd, int cdSZiBpy5P, char *QI04gpAY, int jlkvI05HLwXd, int EBaLcEtsZSK5) {
    int sYyObFdcz;
    if ((708 - 648) <= TfpkiIDasmd &&(792 - 732) <= jlkvI05HLwXd) {
        if (TfpkiIDasmd > jlkvI05HLwXd)
            sYyObFdcz = (94 - 93);
        else if (TfpkiIDasmd < jlkvI05HLwXd)
            sYyObFdcz = -(673 - 672);
        else
            sYyObFdcz = EBaLcEtsZSK5 -cdSZiBpy5P;
    }
    else if ((292 - 232) <= TfpkiIDasmd &&(234 - 174) > jlkvI05HLwXd)
        sYyObFdcz = (320 - 319);
    else if ((666 - 606) > TfpkiIDasmd &&(195 - 135) <= jlkvI05HLwXd)
        sYyObFdcz = -(814 - 813);
    else
        sYyObFdcz = EBaLcEtsZSK5 -cdSZiBpy5P;
    return (sYyObFdcz);
}

struct   man *ZzvjZC (struct   man *QRYZ5ir0PsD, struct   man *e6kGPN5FS, int GVF1wspRke) {
    struct   man *RKS7sD5g8afl, *MxfA7IVNeBO, *qImHkujwB5F;
    RKS7sD5g8afl = e6kGPN5FS;
    scanf ("%s %d", RKS7sD5g8afl->AcWjQ4, &RKS7sD5g8afl->Sy1NahtLrzPq);
    RKS7sD5g8afl->zxr8D7bg = GVF1wspRke +(498 - 497);
    MxfA7IVNeBO = QRYZ5ir0PsD;
    RKS7sD5g8afl->wypxGr1qEo = NULL;
    if (!(NULL != QRYZ5ir0PsD))
        QRYZ5ir0PsD = RKS7sD5g8afl;
    else {
        for (; (CISR3JYL (RKS7sD5g8afl->AcWjQ4, RKS7sD5g8afl->Sy1NahtLrzPq, RKS7sD5g8afl->zxr8D7bg, MxfA7IVNeBO->AcWjQ4, MxfA7IVNeBO->Sy1NahtLrzPq, MxfA7IVNeBO->zxr8D7bg) < (267 - 267)) && (MxfA7IVNeBO->wypxGr1qEo != NULL);) {
            qImHkujwB5F = MxfA7IVNeBO;
            MxfA7IVNeBO = MxfA7IVNeBO->wypxGr1qEo;
        }
        if (CISR3JYL (RKS7sD5g8afl->AcWjQ4, RKS7sD5g8afl->Sy1NahtLrzPq, RKS7sD5g8afl->zxr8D7bg, MxfA7IVNeBO->AcWjQ4, MxfA7IVNeBO->Sy1NahtLrzPq, MxfA7IVNeBO->zxr8D7bg) > (17 - 17)) {
            if (QRYZ5ir0PsD == MxfA7IVNeBO)
                QRYZ5ir0PsD = RKS7sD5g8afl;
            else
                qImHkujwB5F->wypxGr1qEo = RKS7sD5g8afl;
            RKS7sD5g8afl->wypxGr1qEo = MxfA7IVNeBO;
        }
        else {
            MxfA7IVNeBO->wypxGr1qEo = RKS7sD5g8afl;
        }
    }
    return (QRYZ5ir0PsD);
}

void  MOsWmPQ4019 (struct   man *QRYZ5ir0PsD, int GVF1wspRke) {
    struct   man *p;
    int FqGiDoT4F;
    p = QRYZ5ir0PsD;
    {
        FqGiDoT4F = (637 - 637);
        for (; GVF1wspRke > FqGiDoT4F;) {
            printf ("%s\n", p->AcWjQ4);
            p = p->wypxGr1qEo;
            FqGiDoT4F++;
        }
    }
}

void  main () {
    int GVF1wspRke, FqGiDoT4F;
    struct   man *QRYZ5ir0PsD;
    struct   man *xNfpYvne;
    QRYZ5ir0PsD = NULL;
    scanf ("%d", &GVF1wspRke);
    for (FqGiDoT4F = (418 - 418); FqGiDoT4F < GVF1wspRke; FqGiDoT4F++) {
        xNfpYvne = (struct   man *) malloc (LEN);
        QRYZ5ir0PsD = ZzvjZC (QRYZ5ir0PsD, xNfpYvne, FqGiDoT4F);
    }
    MOsWmPQ4019 (QRYZ5ir0PsD, GVF1wspRke);
}

