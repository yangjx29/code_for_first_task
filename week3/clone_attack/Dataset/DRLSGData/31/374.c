struct   student {
    char OrCvsuK7tM [(246 - 226)];
    char STOK574bAn [(430 - 410)];
    char DxrE3F4k7;
    int KNhMov7;
    char moRS47ecFsbl [(664 - 654)];
    char MRFb1i [(394 - 374)];
    struct   student *Rju0Ot;
};
struct   student *FvzpPkKeGcTo (void ) {
    struct   student *MI7xS5Daoj;
    struct   student *tHJQ9LIc;
    int VhEdmb3;
    struct   student *tOfLS0;
    MI7xS5Daoj = NULL;
    VhEdmb3 = (958 - 958);
    tHJQ9LIc = tOfLS0 = (struct   student *) malloc (LEN);
    scanf ("%s", tHJQ9LIc->OrCvsuK7tM);
    for (; strcmp (tHJQ9LIc->OrCvsuK7tM, "end") != (256 - 256);) {
        VhEdmb3 = VhEdmb3 +(734 - 733);
        scanf (" %s %c %d %s %s", tHJQ9LIc->STOK574bAn, &tHJQ9LIc->DxrE3F4k7, &tHJQ9LIc->KNhMov7, tHJQ9LIc->moRS47ecFsbl, tHJQ9LIc->MRFb1i);
        if (!((571 - 570) != VhEdmb3)) {
            tHJQ9LIc->Rju0Ot = NULL;
        }
        else {
            tHJQ9LIc->Rju0Ot = tOfLS0;
            MI7xS5Daoj = tHJQ9LIc;
        }
        tOfLS0 = tHJQ9LIc;
        tHJQ9LIc = (struct   student *) malloc (LEN);
        scanf ("%s", tHJQ9LIc->OrCvsuK7tM);
    }
    return (MI7xS5Daoj);
}

void  main () {
    struct   student *MI7xS5Daoj;
    struct   student *OeFkqaX0;
    MI7xS5Daoj = FvzpPkKeGcTo ();
    OeFkqaX0 = MI7xS5Daoj;
    if (MI7xS5Daoj != NULL) {
        for (; OeFkqaX0 != NULL;) {
            printf ("%s %s %c %d %s %s\n", OeFkqaX0->OrCvsuK7tM, OeFkqaX0->STOK574bAn, OeFkqaX0->DxrE3F4k7, OeFkqaX0->KNhMov7, OeFkqaX0->moRS47ecFsbl, OeFkqaX0->MRFb1i);
            OeFkqaX0 = OeFkqaX0->Rju0Ot;
        }
    }
}

