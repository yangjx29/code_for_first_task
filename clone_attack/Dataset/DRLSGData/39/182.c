void  main () {
    struct   student {
        char jsqiR8S4 [1000];
        int NPcMlSANrgI, mM7FijgGPv, v1vgljo, QH2V1ziBAd, qaLIuUOq3SzZ, rlgcU5Vb1HM;
        struct   student *NwtNGdx62Q15;
    }
    *quLdV0hFvCp;
    struct   student {
        char jsqiR8S4 [1000];
        int NPcMlSANrgI, mM7FijgGPv, v1vgljo, QH2V1ziBAd, qaLIuUOq3SzZ, rlgcU5Vb1HM;
        struct   student *NwtNGdx62Q15;
    }
    *mU1laRk0i;
    long  q9GHta5K = 0;
    int bdClOVrqLj3X;
    int KDCIMsSqbL;
    int cTVx1RY;
    int Zm6gFe1;
    int irUT5XM;
    bdClOVrqLj3X = 0;
    irUT5XM = sizeof (struct   student);
    Zm6gFe1 = 1;
    scanf ("%d", &KDCIMsSqbL);
    mU1laRk0i = (struct   student *) malloc (irUT5XM);
    quLdV0hFvCp = mU1laRk0i;
    quLdV0hFvCp->NwtNGdx62Q15 = NULL;
    for (cTVx1RY = 0; cTVx1RY < KDCIMsSqbL; cTVx1RY++) {
        scanf ("%s %d %d %c %c %d", quLdV0hFvCp->jsqiR8S4, &quLdV0hFvCp->NPcMlSANrgI, &quLdV0hFvCp->mM7FijgGPv, &quLdV0hFvCp->v1vgljo, &quLdV0hFvCp->QH2V1ziBAd, &quLdV0hFvCp->qaLIuUOq3SzZ);
        quLdV0hFvCp->QH2V1ziBAd = quLdV0hFvCp->QH2V1ziBAd - 'N';
        quLdV0hFvCp->v1vgljo = quLdV0hFvCp->v1vgljo - 'N';
        if (KDCIMsSqbL -cTVx1RY - 1) {
            quLdV0hFvCp->NwtNGdx62Q15 = malloc (irUT5XM);
            quLdV0hFvCp = quLdV0hFvCp->NwtNGdx62Q15;
            quLdV0hFvCp->NwtNGdx62Q15 = NULL;
        }
    }
    quLdV0hFvCp = mU1laRk0i;
    do {
        quLdV0hFvCp->rlgcU5Vb1HM = 0;
        if (80 < quLdV0hFvCp->NPcMlSANrgI && quLdV0hFvCp->qaLIuUOq3SzZ)
            quLdV0hFvCp->rlgcU5Vb1HM = quLdV0hFvCp->rlgcU5Vb1HM + 8000;
        if (85 < quLdV0hFvCp->NPcMlSANrgI && 80 < quLdV0hFvCp->mM7FijgGPv)
            quLdV0hFvCp->rlgcU5Vb1HM = quLdV0hFvCp->rlgcU5Vb1HM + 4000;
        if (quLdV0hFvCp->NPcMlSANrgI > 90)
            quLdV0hFvCp->rlgcU5Vb1HM = quLdV0hFvCp->rlgcU5Vb1HM + 2000;
        if (quLdV0hFvCp->NPcMlSANrgI > 85 && quLdV0hFvCp->QH2V1ziBAd)
            quLdV0hFvCp->rlgcU5Vb1HM += 1000;
        if (quLdV0hFvCp->mM7FijgGPv > 80 && quLdV0hFvCp->v1vgljo)
            quLdV0hFvCp->rlgcU5Vb1HM = quLdV0hFvCp->rlgcU5Vb1HM + 850;
        if (quLdV0hFvCp->rlgcU5Vb1HM > bdClOVrqLj3X)
            bdClOVrqLj3X = quLdV0hFvCp->rlgcU5Vb1HM;
        quLdV0hFvCp = quLdV0hFvCp->NwtNGdx62Q15;
    }
    while (quLdV0hFvCp);
    quLdV0hFvCp = mU1laRk0i;
    do {
        if (quLdV0hFvCp->rlgcU5Vb1HM == bdClOVrqLj3X && Zm6gFe1) {
            Zm6gFe1 = 0;
            printf ("%s\n%d\n", quLdV0hFvCp->jsqiR8S4, quLdV0hFvCp->rlgcU5Vb1HM);
        }
        q9GHta5K = q9GHta5K + quLdV0hFvCp->rlgcU5Vb1HM;
        quLdV0hFvCp = quLdV0hFvCp->NwtNGdx62Q15;
    }
    while (quLdV0hFvCp);
    printf ("%ld", q9GHta5K);
}

