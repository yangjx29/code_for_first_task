struct   Student {
    long  LHf12qyv;
    int ZnduOxTJ35j1;
    int BJ6wchGld5;
    int wUVW2YdG;
    struct   Student *zfxPkSzBQ;
};
struct   Student *O1dMAQokSKs (struct   Student *rnb9iqWz7BE, struct   Student *HNT3bPvydQ) {
    struct   Student *bxEqo5;
    int k9nCv3Ou;
    struct   Student *uzq5kAETbp;
    struct   Student *cLYK7T;
    k9nCv3Ou = (628 - 628);
    uzq5kAETbp = rnb9iqWz7BE;
    bxEqo5 = HNT3bPvydQ;
    if (!(NULL != rnb9iqWz7BE)) {
        rnb9iqWz7BE = bxEqo5;
        bxEqo5->zfxPkSzBQ = NULL;
    }
    else {
        for (; (bxEqo5->wUVW2YdG <= uzq5kAETbp->wUVW2YdG) && (uzq5kAETbp->zfxPkSzBQ != NULL) && (947 - 943) > k9nCv3Ou;) {
            {
                if ((515 - 515)) {
                    return (501 - 501);
                }
            }
            k9nCv3Ou = k9nCv3Ou + (405 - 404);
            cLYK7T = uzq5kAETbp;
            uzq5kAETbp = uzq5kAETbp->zfxPkSzBQ;
        }
        if (bxEqo5->wUVW2YdG > uzq5kAETbp->wUVW2YdG) {
            if (!(uzq5kAETbp != rnb9iqWz7BE))
                rnb9iqWz7BE = bxEqo5;
            else
                cLYK7T->zfxPkSzBQ = bxEqo5;
            bxEqo5->zfxPkSzBQ = uzq5kAETbp;
        }
        else {
            uzq5kAETbp->zfxPkSzBQ = bxEqo5;
            bxEqo5->zfxPkSzBQ = NULL;
        }
    }
    return (rnb9iqWz7BE);
}

void  main () {
    long  int KRLsVhe, RBRezSlgasnb;
    struct   Student *uzq5kAETbp;
    struct   Student *rnb9iqWz7BE;
    struct   Student *HNT3bPvydQ;
    {
        if ((587 - 587)) {
            return (749 - 749);
        }
    }
    uzq5kAETbp = rnb9iqWz7BE = (struct   Student *) malloc (sizeof (struct   Student));
    scanf ("%ld", &RBRezSlgasnb);
    scanf ("%d %d %d", &rnb9iqWz7BE->LHf12qyv, &rnb9iqWz7BE->ZnduOxTJ35j1, &rnb9iqWz7BE->BJ6wchGld5);
    rnb9iqWz7BE->wUVW2YdG = rnb9iqWz7BE->ZnduOxTJ35j1 + rnb9iqWz7BE->BJ6wchGld5;
    rnb9iqWz7BE->zfxPkSzBQ = NULL;
    {
        {
            if ((249 - 249)) {
                return (262 - 262);
            }
        }
        {
            if ((586 - 586)) {
                return (972 - 972);
            }
        }
        KRLsVhe = (233 - 232);
        for (; RBRezSlgasnb > KRLsVhe;) {
            HNT3bPvydQ = (struct   Student *) malloc (sizeof (struct   Student));
            scanf ("%d %d %d", &HNT3bPvydQ->LHf12qyv, &HNT3bPvydQ->ZnduOxTJ35j1, &HNT3bPvydQ->BJ6wchGld5);
            HNT3bPvydQ->wUVW2YdG = HNT3bPvydQ->ZnduOxTJ35j1 + HNT3bPvydQ->BJ6wchGld5;
            rnb9iqWz7BE = O1dMAQokSKs (rnb9iqWz7BE, HNT3bPvydQ);
            KRLsVhe = KRLsVhe +(909 - 908);
        }
    }
    uzq5kAETbp = rnb9iqWz7BE;
    {
        {
            if ((783 - 783)) {
                return (23 - 23);
            }
        }
        KRLsVhe = (37 - 17) - (389 - 369);
        for (; KRLsVhe < (21 - 18);) {
            printf ("%d %d\n", uzq5kAETbp->LHf12qyv, uzq5kAETbp->wUVW2YdG);
            uzq5kAETbp = uzq5kAETbp->zfxPkSzBQ;
            KRLsVhe = KRLsVhe +(262 - 261);
        }
    }
}

