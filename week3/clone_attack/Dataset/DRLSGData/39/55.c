struct   Student {
    char cpcCtOkVBa [50];
    int K7hVExPvA, tGUNnK, cRVkrdp4iX, Zr3EVH9;
    char xIlodsXp, wHesY2zb;
    struct   Student *DkgiYRA3;
}
*OpwaNCg, *yRNUsaQko2T, *O9bYJ2wt4, *EIsTD6FBJwy0, *SHT459pg1;

int main () {
    int YrW1fkd;
    int KKuHoIk0;
    int Zr3EVH9;
    int r9FagP;
    int duQzpDx;
    scanf ("%d", &KKuHoIk0);
    O9bYJ2wt4 = NULL;
    Zr3EVH9 = 0;
    duQzpDx = 0;
    for (duQzpDx = 0; KKuHoIk0 > duQzpDx; duQzpDx = duQzpDx + 1) {
        OpwaNCg = (struct   Student *) malloc (Len);
        if (!(0 != duQzpDx))
            O9bYJ2wt4 = OpwaNCg;
        else
            yRNUsaQko2T->DkgiYRA3 = OpwaNCg;
        yRNUsaQko2T = OpwaNCg;
        scanf ("%s%d%d %c %c%d", OpwaNCg->cpcCtOkVBa, &OpwaNCg->K7hVExPvA, &OpwaNCg->tGUNnK, &OpwaNCg->xIlodsXp, &OpwaNCg->wHesY2zb, &OpwaNCg->cRVkrdp4iX);
        OpwaNCg->Zr3EVH9 = 0;
    }
    EIsTD6FBJwy0 = O9bYJ2wt4;
    OpwaNCg->DkgiYRA3 = NULL;
    do {
        if (80 < EIsTD6FBJwy0->K7hVExPvA && EIsTD6FBJwy0->cRVkrdp4iX >= 1)
            EIsTD6FBJwy0->Zr3EVH9 += 8000;
        if (80 < EIsTD6FBJwy0->tGUNnK && !('Y' != EIsTD6FBJwy0->xIlodsXp))
            EIsTD6FBJwy0->Zr3EVH9 += 850;
        if (85 < EIsTD6FBJwy0->K7hVExPvA && EIsTD6FBJwy0->tGUNnK > 80)
            EIsTD6FBJwy0->Zr3EVH9 += 4000;
        if (EIsTD6FBJwy0->K7hVExPvA > 85 && EIsTD6FBJwy0->wHesY2zb == 'Y')
            EIsTD6FBJwy0->Zr3EVH9 += 1000;
        if (EIsTD6FBJwy0->K7hVExPvA > 90)
            EIsTD6FBJwy0->Zr3EVH9 += 2000;
        EIsTD6FBJwy0 = EIsTD6FBJwy0->DkgiYRA3;
    }
    while (EIsTD6FBJwy0);
    EIsTD6FBJwy0 = O9bYJ2wt4;
    SHT459pg1 = (struct   Student *) malloc (Len);
    SHT459pg1->Zr3EVH9 = 0;
    do {
        Zr3EVH9 += EIsTD6FBJwy0->Zr3EVH9;
        if (EIsTD6FBJwy0->Zr3EVH9 > SHT459pg1->Zr3EVH9)
            SHT459pg1 = EIsTD6FBJwy0;
        EIsTD6FBJwy0 = EIsTD6FBJwy0->DkgiYRA3;
    }
    while (EIsTD6FBJwy0);
    printf ("%s\n%d\n%d", SHT459pg1->cpcCtOkVBa, SHT459pg1->Zr3EVH9, Zr3EVH9);
    return 0;
}

