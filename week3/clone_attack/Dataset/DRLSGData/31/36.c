int xA1X0MCo;

struct   student {
    char o4uslS5ZR1J [(68 - 58)];
    char e4JjbV7oSN [(620 - 600)];
    char armeJ8dg [(486 - 484)];
    int abjM2P9H;
    int s0kDx7IP [(135 - 125)];
    char R8LsNkyQ [(835 - 825)];
    struct   student *gKg4LP0QE;
};
struct   student *Y4Pgda2 () {
    struct   student *GpoJ7IHMGfU;
    struct   student *mIPkobrNV;
    struct   student *bMbLPoBn2;
    xA1X0MCo = (60 - 59);
    mIPkobrNV = (struct   student *) malloc (LEN);
    scanf ("%s %s %s %d %s %s", mIPkobrNV->o4uslS5ZR1J, mIPkobrNV->e4JjbV7oSN, mIPkobrNV->armeJ8dg, &mIPkobrNV->abjM2P9H, mIPkobrNV->s0kDx7IP, mIPkobrNV->R8LsNkyQ);
    mIPkobrNV->gKg4LP0QE = NULL;
    GpoJ7IHMGfU = mIPkobrNV;
    bMbLPoBn2 = mIPkobrNV;
    do {
        mIPkobrNV = (struct   student *) malloc (LEN);
        scanf ("%s", mIPkobrNV->o4uslS5ZR1J);
        if (!((461 - 461) != strcmp (mIPkobrNV->o4uslS5ZR1J, "end")))
            break;
        xA1X0MCo = xA1X0MCo + (184 - 183);
        scanf ("%s %s %d %s %s", mIPkobrNV->e4JjbV7oSN, mIPkobrNV->armeJ8dg, &mIPkobrNV->abjM2P9H, mIPkobrNV->s0kDx7IP, mIPkobrNV->R8LsNkyQ);
        mIPkobrNV->gKg4LP0QE = NULL;
        bMbLPoBn2->gKg4LP0QE = mIPkobrNV;
        bMbLPoBn2 = mIPkobrNV;
    }
    while ((871 - 870));
    return (GpoJ7IHMGfU);
}

void  main () {
    struct   student *GpoJ7IHMGfU;
    struct   student *rMdLagBGY3I;
    struct   student *mry6LdcpPYZ;
    GpoJ7IHMGfU = Y4Pgda2 ();
    for (; xA1X0MCo != (497 - 497);) {
        for (rMdLagBGY3I = GpoJ7IHMGfU; rMdLagBGY3I->gKg4LP0QE != NULL;) {
            mry6LdcpPYZ = rMdLagBGY3I;
            rMdLagBGY3I = rMdLagBGY3I->gKg4LP0QE;
        }
        printf ("%s %s %s %d %s %s\n", rMdLagBGY3I->o4uslS5ZR1J, rMdLagBGY3I->e4JjbV7oSN, rMdLagBGY3I->armeJ8dg, rMdLagBGY3I->abjM2P9H, rMdLagBGY3I->s0kDx7IP, rMdLagBGY3I->R8LsNkyQ);
        xA1X0MCo = xA1X0MCo - (11 - 10);
        mry6LdcpPYZ->gKg4LP0QE = NULL;
    }
}

