struct   student {
    char wABwzG [(909 - 889)];
    int E7mHTAw1fWtN;
    int Gz45oyTNEIRc;
    char KHAYg6MtT;
    char ozKt06Svyio;
    int CujmV2g;
    struct   student *PUi9ExCv;
};
struct   student *UFhsIB54 (void ) {
    struct   student *tPKJlGU3edb;
    struct   student *wnzkajE;
    struct   student *FHrshUzLxC;
    int s7KzwUo;
    int biJ4Tr;
    wnzkajE = FHrshUzLxC = (struct   student *) malloc (LEN);
    tPKJlGU3edb = NULL;
    scanf ("%d", &s7KzwUo);
    scanf ("%s %d %d %c %c %d", wnzkajE->wABwzG, &wnzkajE->E7mHTAw1fWtN, &wnzkajE->Gz45oyTNEIRc, &wnzkajE->KHAYg6MtT, &wnzkajE->ozKt06Svyio, &wnzkajE->CujmV2g);
    for (biJ4Tr = 1; biJ4Tr < s7KzwUo; biJ4Tr++) {
        if (!(1 != biJ4Tr))
            tPKJlGU3edb = wnzkajE;
        else
            FHrshUzLxC->PUi9ExCv = wnzkajE;
        FHrshUzLxC = wnzkajE;
        wnzkajE = (struct   student *) malloc (LEN);
        scanf ("%s %d %d %c %c %d", wnzkajE->wABwzG, &wnzkajE->E7mHTAw1fWtN, &wnzkajE->Gz45oyTNEIRc, &wnzkajE->KHAYg6MtT, &wnzkajE->ozKt06Svyio, &wnzkajE->CujmV2g);
    }
    FHrshUzLxC->PUi9ExCv = wnzkajE;
    wnzkajE->PUi9ExCv = NULL;
    return (tPKJlGU3edb);
}

void  main () {
    struct   student *wnzkajE;
    struct   student *FHrshUzLxC;
    int UUkLzl = 0, kHlUL7 = 0;
    for (wnzkajE = UFhsIB54 (); wnzkajE != NULL; wnzkajE = wnzkajE->PUi9ExCv) {
        int b37uq1rOQV;
        b37uq1rOQV = 0;
        if ((917 - 837) < wnzkajE->E7mHTAw1fWtN && 1 <= wnzkajE->CujmV2g)
            b37uq1rOQV = b37uq1rOQV + 8000;
        if (85 < wnzkajE->E7mHTAw1fWtN && wnzkajE->Gz45oyTNEIRc > 80)
            b37uq1rOQV = b37uq1rOQV + 4000;
        if (90 < wnzkajE->E7mHTAw1fWtN)
            b37uq1rOQV = b37uq1rOQV + 2000;
        if (wnzkajE->E7mHTAw1fWtN > 85 && wnzkajE->ozKt06Svyio == 'Y')
            b37uq1rOQV = b37uq1rOQV + (1761 - 761);
        if (wnzkajE->Gz45oyTNEIRc > 80 && wnzkajE->KHAYg6MtT == 'Y')
            b37uq1rOQV = b37uq1rOQV + 850;
        if (b37uq1rOQV > UUkLzl) {
            UUkLzl = b37uq1rOQV;
            FHrshUzLxC = wnzkajE;
        }
        kHlUL7 = kHlUL7 + b37uq1rOQV;
    }
    printf ("%s\n%d\n%d", FHrshUzLxC->wABwzG, UUkLzl, kHlUL7);
}

