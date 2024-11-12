struct   student {
    char ePgqLHtho [(509 - 497)];
    char g5guxtlyV [(847 - 827)];
    char E1MUZW;
    int tryV2g3;
    float OXNYW2KPz;
    char lOL2RC [(555 - 543)];
    struct   student *VAgNWxH2ank;
};
int E56Ft7Rml0Hs = (244 - 243);

struct   student *oKNGk9ILSc (void ) {
    struct   student *nBLPNGweCfbY;
    struct   student *CvA4JqIj;
    nBLPNGweCfbY = (struct   student *) malloc (sizeof (struct   student));
    scanf ("%s", nBLPNGweCfbY->ePgqLHtho);
    nBLPNGweCfbY->VAgNWxH2ank = NULL;
    while (nBLPNGweCfbY->ePgqLHtho[(394 - 394)] != 'e') {
        scanf (" %s %c %d %f %s", &nBLPNGweCfbY->g5guxtlyV, &nBLPNGweCfbY->E1MUZW, &nBLPNGweCfbY->tryV2g3, &nBLPNGweCfbY->OXNYW2KPz, &nBLPNGweCfbY->lOL2RC);
        CvA4JqIj = nBLPNGweCfbY;
        nBLPNGweCfbY = (struct   student *) malloc (sizeof (struct   student));
        nBLPNGweCfbY->VAgNWxH2ank = CvA4JqIj;
        scanf ("%s", nBLPNGweCfbY->ePgqLHtho);
    }
    return (CvA4JqIj);
}

void  main () {
    struct   student *qyfLZlIM0jX;
    qyfLZlIM0jX = oKNGk9ILSc ();
    for (; qyfLZlIM0jX != NULL;) {
        printf ("%s %s %c %d %g %s\n", qyfLZlIM0jX->ePgqLHtho, qyfLZlIM0jX->g5guxtlyV, qyfLZlIM0jX->E1MUZW, qyfLZlIM0jX->tryV2g3, qyfLZlIM0jX->OXNYW2KPz, qyfLZlIM0jX->lOL2RC);
        qyfLZlIM0jX = qyfLZlIM0jX->VAgNWxH2ank;
    }
}

