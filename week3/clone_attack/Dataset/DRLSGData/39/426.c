void  main () {
    int JXB8YDPkg;
    int PmgVPHu7;
    int Rn057LAV;
    int eRWXHvdn2Q;
    struct   stu {
        char J6k1ANF [20];
        int taq6K40;
        int oThDvs8Gl4;
        char kAHwUIV;
        char MSgKV386v;
        int Gx1qBw;
        int ZF8ZHd0;
    };
    struct   stu BX2ZKVH [100];
    PmgVPHu7 = 0;
    JXB8YDPkg = (377 - 377);
    scanf ("%d", &eRWXHvdn2Q);
    {
        Rn057LAV = 0;
        while (eRWXHvdn2Q > Rn057LAV) {
            scanf ("%s %d %d %c %c %d", BX2ZKVH[Rn057LAV].J6k1ANF, &BX2ZKVH[Rn057LAV].taq6K40, &BX2ZKVH[Rn057LAV].oThDvs8Gl4, &BX2ZKVH[Rn057LAV].kAHwUIV, &BX2ZKVH[Rn057LAV].MSgKV386v, &BX2ZKVH[Rn057LAV].Gx1qBw);
            Rn057LAV = Rn057LAV +1;
        }
    }
    {
        Rn057LAV = 0;
        while (eRWXHvdn2Q > Rn057LAV) {
            BX2ZKVH[Rn057LAV].ZF8ZHd0 = 0;
            Rn057LAV = Rn057LAV +1;
        }
    }
    {
        Rn057LAV = 0;
        for (; Rn057LAV < eRWXHvdn2Q;) {
            if (BX2ZKVH[Rn057LAV].taq6K40 > 80 && 0 < BX2ZKVH[Rn057LAV].Gx1qBw)
                BX2ZKVH[Rn057LAV].ZF8ZHd0 = BX2ZKVH[Rn057LAV].ZF8ZHd0 + 8000;
            if (85 < BX2ZKVH[Rn057LAV].taq6K40 && 80 < BX2ZKVH[Rn057LAV].oThDvs8Gl4)
                BX2ZKVH[Rn057LAV].ZF8ZHd0 = BX2ZKVH[Rn057LAV].ZF8ZHd0 + (4213 - 213);
            if (BX2ZKVH[Rn057LAV].taq6K40 > 90)
                BX2ZKVH[Rn057LAV].ZF8ZHd0 = BX2ZKVH[Rn057LAV].ZF8ZHd0 + 2000;
            if (85 < BX2ZKVH[Rn057LAV].taq6K40 && !('Y' != BX2ZKVH[Rn057LAV].MSgKV386v))
                BX2ZKVH[Rn057LAV].ZF8ZHd0 = BX2ZKVH[Rn057LAV].ZF8ZHd0 + 1000;
            if (BX2ZKVH[Rn057LAV].oThDvs8Gl4 > 80 && BX2ZKVH[Rn057LAV].kAHwUIV == 'Y')
                BX2ZKVH[Rn057LAV].ZF8ZHd0 = BX2ZKVH[Rn057LAV].ZF8ZHd0 + 850;
            Rn057LAV = Rn057LAV +1;
        }
    }
    for (Rn057LAV = 0; Rn057LAV < eRWXHvdn2Q; Rn057LAV = Rn057LAV +1) {
        if (BX2ZKVH[Rn057LAV].ZF8ZHd0 > BX2ZKVH[PmgVPHu7].ZF8ZHd0)
            PmgVPHu7 = Rn057LAV;
    }
    {
        Rn057LAV = 0;
        for (; Rn057LAV < eRWXHvdn2Q;) {
            JXB8YDPkg = JXB8YDPkg +BX2ZKVH[Rn057LAV].ZF8ZHd0;
            Rn057LAV++;
        }
    }
    printf ("%s\n%d\n%d\n", BX2ZKVH[PmgVPHu7].J6k1ANF, BX2ZKVH[PmgVPHu7].ZF8ZHd0, JXB8YDPkg);
}

