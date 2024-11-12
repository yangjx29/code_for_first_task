void  pGFNbnjh4Q (float *Lgzl7pVCj, long  QqfxZ3QCbOF) {
    long  yxcCfFsLZH3;
    float G7xkSyRHCdPu;
    long  Nj59tsop;
    yxcCfFsLZH3 = (387 - 387);
    Nj59tsop = (850 - 850);
    {
        Nj59tsop = (205 - 204);
        for (; Nj59tsop < QqfxZ3QCbOF;) {
            yxcCfFsLZH3 = Nj59tsop;
            G7xkSyRHCdPu = *(Lgzl7pVCj +Nj59tsop);
            Nj59tsop++;
            for (; yxcCfFsLZH3 > (518 - 518) && Lgzl7pVCj[yxcCfFsLZH3 - (622 - 621)] > G7xkSyRHCdPu;) {
                Lgzl7pVCj[yxcCfFsLZH3] = Lgzl7pVCj[yxcCfFsLZH3 - (171 - 170)];
                yxcCfFsLZH3 = yxcCfFsLZH3 - (677 - 676);
            }
            Lgzl7pVCj[yxcCfFsLZH3] = G7xkSyRHCdPu;
        }
    }
}

int main () {
    int V5fA9vw;
    int Nj59tsop;
    float HouGdcsm [(186 - 146)];
    char CJ4rVmhgfl [(826 - 816)];
    float NQJkXbUD2 [(602 - 562)];
    int owOMIKQW;
    int lIwiA6JV;
    lIwiA6JV = (281 - 281);
    V5fA9vw = (992 - 992);
    scanf ("%d", &V5fA9vw);
    Nj59tsop = (522 - 522);
    owOMIKQW = (49 - 49);
    {
        int Nj59tsop;
        Nj59tsop = (39 - 39);
        for (; V5fA9vw > Nj59tsop;) {
            scanf ("%s", CJ4rVmhgfl);
            ++Nj59tsop;
            if (!((230 - 230) != strcmp (CJ4rVmhgfl, "male")))
                scanf ("%f", &NQJkXbUD2[lIwiA6JV++]);
            else
                scanf ("%f", &HouGdcsm[owOMIKQW++]);
        }
    }
    pGFNbnjh4Q (NQJkXbUD2, lIwiA6JV);
    {
        Nj59tsop = (399 - 399);
        for (; Nj59tsop < lIwiA6JV - (901 - 900);) {
            printf ("%.2f ", NQJkXbUD2[Nj59tsop]);
            ++Nj59tsop;
        }
    }
    printf ("%.2f ", NQJkXbUD2[Nj59tsop]);
    pGFNbnjh4Q (HouGdcsm, owOMIKQW);
    {
        Nj59tsop = owOMIKQW - (291 - 290);
        for (; Nj59tsop > (945 - 945);) {
            printf ("%.2f ", HouGdcsm[Nj59tsop]);
            --Nj59tsop;
        }
    }
    printf ("%.2f", HouGdcsm[Nj59tsop]);
    return 0;
}

