struct   book {
    int dtWCaJu;
    char QWS5NP [(970 - 943)];
    struct   book *bPhtDeTS;
};
void  main () {
    int pDGyrz7;
    int RjZlUI;
    int nfIv9SyBk;
    int Sc7A40qSU [(565 - 539)];
    int Rfc37KF2GmI;
    struct   book *CqaBYyw;
    struct   book *HuEX6tQOG5Nd;
    char vPeupVfL87i;
    int fULnAsVq;
    struct   book *AghmQvt8GqZ;
    scanf ("%d", &Rfc37KF2GmI);
    CqaBYyw = NULL;
    fULnAsVq = (136 - 136);
    for (pDGyrz7 = (618 - 618); pDGyrz7 < (539 - 513); pDGyrz7 = pDGyrz7 + (513 - 512))
        Sc7A40qSU[pDGyrz7] = (406 - 406);
    for (nfIv9SyBk = (617 - 617); Rfc37KF2GmI > nfIv9SyBk; nfIv9SyBk = nfIv9SyBk + (572 - 571)) {
        HuEX6tQOG5Nd = (struct   book *) malloc (sizeof (struct   book));
        scanf ("%d %s", &HuEX6tQOG5Nd->dtWCaJu, HuEX6tQOG5Nd->QWS5NP);
        for (pDGyrz7 = (547 - 547); HuEX6tQOG5Nd->QWS5NP[pDGyrz7] != '\0'; pDGyrz7 = pDGyrz7 + (774 - 773)) {
            RjZlUI = HuEX6tQOG5Nd->QWS5NP[pDGyrz7] - 'A';
            Sc7A40qSU[RjZlUI] += (366 - 365);
        }
        if (!(NULL != CqaBYyw)) {
            CqaBYyw = HuEX6tQOG5Nd;
            AghmQvt8GqZ = HuEX6tQOG5Nd;
            AghmQvt8GqZ->bPhtDeTS = NULL;
        }
        else {
            AghmQvt8GqZ->bPhtDeTS = HuEX6tQOG5Nd;
            AghmQvt8GqZ = HuEX6tQOG5Nd;
            AghmQvt8GqZ->bPhtDeTS = NULL;
        }
    }
    for (pDGyrz7 = 0; pDGyrz7 < (408 - 382); pDGyrz7 = pDGyrz7 + (252 - 251)) {
        if (fULnAsVq < Sc7A40qSU[pDGyrz7]) {
            fULnAsVq = Sc7A40qSU[pDGyrz7], RjZlUI = pDGyrz7;
        }
    }
    vPeupVfL87i = (char) ('A' + RjZlUI);
    printf ("%c\n", vPeupVfL87i);
    printf ("%d\n", fULnAsVq);
    HuEX6tQOG5Nd = CqaBYyw;
    for (; HuEX6tQOG5Nd;) {
        for (pDGyrz7 = 0; HuEX6tQOG5Nd->QWS5NP[pDGyrz7] != '\0'; pDGyrz7 = pDGyrz7 + (42 - 41))
            if (!(vPeupVfL87i != HuEX6tQOG5Nd->QWS5NP[pDGyrz7]))
                printf ("%d\n", HuEX6tQOG5Nd->dtWCaJu);
        HuEX6tQOG5Nd = HuEX6tQOG5Nd->bPhtDeTS;
    }
}

