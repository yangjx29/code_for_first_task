struct   student {
    char gf4CZOP [(1070 - 970)];
    char wwGNdBgYe [(521 - 421)];
    char Bc3f7rCt2V;
    int lPmaEbBu9dc;
    float ldslj7euRK;
    char ZXdWIy [(1069 - 969)];
    struct   student *n9TryuQK;
};
int txfwyGO;

struct   student *bbQw1pG () {
    struct   student *uy8veuPxS, *rNPKmQzJU;
    uy8veuPxS = (struct   student *) malloc (LEN);
    rNPKmQzJU = (struct   student *) malloc (LEN);
    scanf ("%s %s %c %d %f %s", &uy8veuPxS->wwGNdBgYe, &uy8veuPxS->gf4CZOP, &uy8veuPxS->Bc3f7rCt2V, &uy8veuPxS->lPmaEbBu9dc, &uy8veuPxS->ldslj7euRK, &uy8veuPxS->ZXdWIy);
    uy8veuPxS->n9TryuQK = (563 - 563);
    txfwyGO = (558 - 558);
    for (; strcmp (rNPKmQzJU->wwGNdBgYe, "end") != (675 - 675);) {
        txfwyGO = txfwyGO + (540 - 539);
        if (!((985 - 984) != txfwyGO))
            scanf ("%s %s %c %d %f %s", &rNPKmQzJU->wwGNdBgYe, &rNPKmQzJU->gf4CZOP, &rNPKmQzJU->Bc3f7rCt2V, &rNPKmQzJU->lPmaEbBu9dc, &rNPKmQzJU->ldslj7euRK, &rNPKmQzJU->ZXdWIy);
        else
            scanf ("%s %c %d %f %s", &rNPKmQzJU->gf4CZOP, &rNPKmQzJU->Bc3f7rCt2V, &rNPKmQzJU->lPmaEbBu9dc, &rNPKmQzJU->ldslj7euRK, &rNPKmQzJU->ZXdWIy);
        rNPKmQzJU->n9TryuQK = uy8veuPxS;
        uy8veuPxS = rNPKmQzJU;
        rNPKmQzJU = (struct   student *) malloc (LEN);
        scanf ("%s", &rNPKmQzJU->wwGNdBgYe);
    }
    return uy8veuPxS;
}

void  main () {
    struct   student *M1bPvxVhmFBX;
    M1bPvxVhmFBX = bbQw1pG ();
    printf ("%s %s %c %d %g %s\n", M1bPvxVhmFBX->wwGNdBgYe, M1bPvxVhmFBX->gf4CZOP, M1bPvxVhmFBX->Bc3f7rCt2V, M1bPvxVhmFBX->lPmaEbBu9dc, M1bPvxVhmFBX->ldslj7euRK, M1bPvxVhmFBX->ZXdWIy);
    while (M1bPvxVhmFBX->n9TryuQK != 0) {
        M1bPvxVhmFBX = M1bPvxVhmFBX->n9TryuQK;
        printf ("%s %s %c %d %g %s\n", M1bPvxVhmFBX->wwGNdBgYe, M1bPvxVhmFBX->gf4CZOP, M1bPvxVhmFBX->Bc3f7rCt2V, M1bPvxVhmFBX->lPmaEbBu9dc, M1bPvxVhmFBX->ldslj7euRK, M1bPvxVhmFBX->ZXdWIy);
    }
}

