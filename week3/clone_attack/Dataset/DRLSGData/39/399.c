struct   student {
    char aWdRAjyKEt [(909 - 889)];
    int at3ETKcplgo;
    int QhGo7S2ke;
    char CLAeJbhvOwl;
    char wgmRBy5O4Hv;
    int PGgTj1NCfS6E;
    int d8IiEqA;
    struct   student *DRj3YL;
};
struct   student *fVseTOrBF7 (int LkaAxnDj) {
    int uXfpslmFOI;
    struct   student *r4FvP2TH, *pFgtbS, *pAQbSXWy;
    pFgtbS = pAQbSXWy = (struct   student *) malloc (LEN);
    scanf ("%s %d %d %c %c %d", pFgtbS->aWdRAjyKEt, &pFgtbS->at3ETKcplgo, &pFgtbS->QhGo7S2ke, &pFgtbS->CLAeJbhvOwl, &pFgtbS->wgmRBy5O4Hv, &pFgtbS->PGgTj1NCfS6E);
    r4FvP2TH = pFgtbS;
    for (uXfpslmFOI = 1; uXfpslmFOI < LkaAxnDj; uXfpslmFOI = uXfpslmFOI + 1) {
        pFgtbS = (struct   student *) malloc (LEN);
        scanf ("%s %d %d %c %c %d", pFgtbS->aWdRAjyKEt, &pFgtbS->at3ETKcplgo, &pFgtbS->QhGo7S2ke, &pFgtbS->CLAeJbhvOwl, &pFgtbS->wgmRBy5O4Hv, &pFgtbS->PGgTj1NCfS6E);
        pAQbSXWy->DRj3YL = pFgtbS;
        pAQbSXWy = pFgtbS;
    }
    pAQbSXWy->DRj3YL = NULL;
    return (r4FvP2TH);
}

int main () {
    int LkaAxnDj;
    struct   student *r4FvP2TH;
    long  orhVAs73SOpd;
    struct   student *AWbHxuXKc;
    struct   student *pt2;
    scanf ("%d", &LkaAxnDj);
    r4FvP2TH = fVseTOrBF7 (LkaAxnDj);
    AWbHxuXKc = r4FvP2TH;
    for (; AWbHxuXKc != NULL;) {
        AWbHxuXKc->d8IiEqA = 0;
        if ((AWbHxuXKc->at3ETKcplgo > 80) && (1 <= AWbHxuXKc->PGgTj1NCfS6E))
            AWbHxuXKc->d8IiEqA = AWbHxuXKc->d8IiEqA + (8032 - 32);
        if ((AWbHxuXKc->at3ETKcplgo > 85) && (80 < AWbHxuXKc->QhGo7S2ke))
            AWbHxuXKc->d8IiEqA = AWbHxuXKc->d8IiEqA + (4245 - 245);
        if (AWbHxuXKc->at3ETKcplgo > 90)
            AWbHxuXKc->d8IiEqA = AWbHxuXKc->d8IiEqA + (2053 - 53);
        if ((AWbHxuXKc->at3ETKcplgo > 85) && (!('Y' != AWbHxuXKc->wgmRBy5O4Hv)))
            AWbHxuXKc->d8IiEqA = AWbHxuXKc->d8IiEqA + 1000;
        if ((AWbHxuXKc->QhGo7S2ke > 80) && (AWbHxuXKc->CLAeJbhvOwl == 'Y'))
            AWbHxuXKc->d8IiEqA = AWbHxuXKc->d8IiEqA + 850;
        AWbHxuXKc = AWbHxuXKc->DRj3YL;
    }
    AWbHxuXKc = r4FvP2TH;
    pt2 = AWbHxuXKc->DRj3YL;
    orhVAs73SOpd = 0;
    for (; pt2 != NULL;) {
        if ((pt2->d8IiEqA) > (AWbHxuXKc->d8IiEqA))
            AWbHxuXKc = pt2;
        pt2 = pt2->DRj3YL;
    }
    printf ("%s\n", AWbHxuXKc->aWdRAjyKEt);
    printf ("%d\n", AWbHxuXKc->d8IiEqA);
    AWbHxuXKc = r4FvP2TH;
    for (; AWbHxuXKc != NULL;) {
        orhVAs73SOpd = orhVAs73SOpd + AWbHxuXKc->d8IiEqA;
        AWbHxuXKc = AWbHxuXKc->DRj3YL;
    }
    printf ("%ld", orhVAs73SOpd);
    return 0;
}

