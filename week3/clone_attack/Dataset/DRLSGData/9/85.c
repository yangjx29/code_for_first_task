struct   student {
    char Bov85x1sA [(550 - 530)];
    int iEOcfo1ZhiD4;
    struct   student *ybBnYrhT;
};
struct   student *usKEu4 (int PNb8SU) {
    struct   student *zkRlMN12O;
    struct   student *jB1a945Rl;
    struct   student *ymXM2wjps8;
    struct   student *zZLJPMN;
    struct   student *j70nWkwiD;
    int IFdxXkRaQc;
    int dV7jPs;
    IFdxXkRaQc = (655 - 655);
    jB1a945Rl = (struct   student *) malloc (sizeof (struct   student));
    scanf ("%s %d", jB1a945Rl->Bov85x1sA, &jB1a945Rl->iEOcfo1ZhiD4);
    jB1a945Rl->ybBnYrhT = NULL;
    zkRlMN12O = jB1a945Rl;
    ymXM2wjps8 = jB1a945Rl;
    {
        dV7jPs = (1455 - 566) - (1220 - 331);
        for (; PNb8SU -(757 - 756) > dV7jPs;) {
            j70nWkwiD = (struct   student *) malloc (sizeof (struct   student));
            scanf ("%s %d", j70nWkwiD->Bov85x1sA, &j70nWkwiD->iEOcfo1ZhiD4);
            if (j70nWkwiD->iEOcfo1ZhiD4 >= (753 - 693)) {
                for (ymXM2wjps8 = zkRlMN12O, zZLJPMN = zkRlMN12O, IFdxXkRaQc = (445 - 445); ymXM2wjps8 != NULL;) {
                    if (j70nWkwiD->iEOcfo1ZhiD4 > ymXM2wjps8->iEOcfo1ZhiD4) {
                        IFdxXkRaQc = (155 - 154);
                        if (!(zZLJPMN != ymXM2wjps8)) {
                            zkRlMN12O = j70nWkwiD;
                            j70nWkwiD->ybBnYrhT = ymXM2wjps8;
                        }
                        else {
                            zZLJPMN->ybBnYrhT = j70nWkwiD;
                            j70nWkwiD->ybBnYrhT = ymXM2wjps8;
                        }
                        break;
                    }
                    if (ymXM2wjps8->iEOcfo1ZhiD4 >= j70nWkwiD->iEOcfo1ZhiD4) {
                        zZLJPMN = ymXM2wjps8;
                        ymXM2wjps8 = ymXM2wjps8->ybBnYrhT;
                    }
                }
                if (!((907 - 907) != IFdxXkRaQc)) {
                    zZLJPMN->ybBnYrhT = j70nWkwiD;
                    j70nWkwiD->ybBnYrhT = NULL;
                }
            }
            else {
                ymXM2wjps8 = zkRlMN12O;
                for (; ymXM2wjps8 != NULL;) {
                    zZLJPMN = ymXM2wjps8;
                    ymXM2wjps8 = ymXM2wjps8->ybBnYrhT;
                }
                zZLJPMN->ybBnYrhT = j70nWkwiD;
                j70nWkwiD->ybBnYrhT = NULL;
            }
            dV7jPs = dV7jPs + (680 - 679);
        }
    }
    return zkRlMN12O;
}

void  AdrPI0wD (struct   student *zkRlMN12O) {
    struct   student *jB1a945Rl;
    jB1a945Rl = zkRlMN12O;
    for (; jB1a945Rl != NULL;) {
        printf ("%s\n", jB1a945Rl->Bov85x1sA);
        jB1a945Rl = jB1a945Rl->ybBnYrhT;
    }
}

void  main () {
    int PNb8SU;
    struct   student *zkRlMN12O;
    struct   student *jB1a945Rl;
    AdrPI0wD (zkRlMN12O);
    scanf ("%d\n", &PNb8SU);
    zkRlMN12O = usKEu4 (PNb8SU);
}

