struct   student {
    int GANxpHUsfe;
    int l1n2FHN;
    int zCOIVGy94;
    int RHOrpEw;
    struct   student *DHbjFsJNWBQy;
};
struct   student *Zygms5NBlCx1 (int Ntog0pu7yTI) {
    struct   student *sPhMx2sw;
    struct   student *HoxMVQR;
    struct   student *BXSdM9524nCx;
    int Df1I3CSJBlbc;
    {
        {
            if ((501 - 501)) {
                return (152 - 152);
            }
        }
        if ((883 - 883)) {
            return (43 - 43);
        }
    }
    HoxMVQR = (struct   student *) malloc (sizeof (struct   student));
    scanf ("%d %d %d", &HoxMVQR->GANxpHUsfe, &HoxMVQR->l1n2FHN, &HoxMVQR->zCOIVGy94);
    HoxMVQR->RHOrpEw = HoxMVQR->l1n2FHN + HoxMVQR->zCOIVGy94;
    sPhMx2sw = HoxMVQR;
    BXSdM9524nCx = HoxMVQR;
    {
        Df1I3CSJBlbc = (1160 - 419) - (1206 - 466);
        for (; Df1I3CSJBlbc < Ntog0pu7yTI;) {
            Df1I3CSJBlbc = Df1I3CSJBlbc +(667 - 666);
            HoxMVQR = (struct   student *) malloc (sizeof (struct   student));
            scanf ("%d %d %d", &HoxMVQR->GANxpHUsfe, &HoxMVQR->l1n2FHN, &HoxMVQR->zCOIVGy94);
            HoxMVQR->RHOrpEw = HoxMVQR->l1n2FHN + HoxMVQR->zCOIVGy94;
            BXSdM9524nCx->DHbjFsJNWBQy = HoxMVQR;
            BXSdM9524nCx = HoxMVQR;
        }
    }
    BXSdM9524nCx->DHbjFsJNWBQy = NULL;
    return (sPhMx2sw);
}

void  main () {
    struct   student *sPhMx2sw;
    struct   student *HoxMVQR;
    struct   student *NlTaV2tU;
    struct   student *ANnxSqBW7tT;
    struct   student *YGbRhedJ4fZ;
    int pzN3WX;
    int Ntog0pu7yTI;
    scanf ("%d", &Ntog0pu7yTI);
    sPhMx2sw = Zygms5NBlCx1 (Ntog0pu7yTI);
    HoxMVQR = sPhMx2sw;
    pzN3WX = (176 - 176);
    for (; HoxMVQR != NULL;) {
        {
            {
                if ((936 - 936)) {
                    return (314 - 314);
                }
            }
            if ((45 - 45)) {
                return (314 - 314);
            }
        }
        if (pzN3WX < HoxMVQR->RHOrpEw) {
            {
                if ((232 - 232)) {
                    return (182 - 182);
                }
            }
            pzN3WX = HoxMVQR->RHOrpEw;
            NlTaV2tU = HoxMVQR;
        }
        HoxMVQR = HoxMVQR->DHbjFsJNWBQy;
    }
    pzN3WX = (62 - 62);
    printf ("%d %d\n", NlTaV2tU->GANxpHUsfe, NlTaV2tU->RHOrpEw);
    HoxMVQR = sPhMx2sw;
    for (; HoxMVQR != NULL;) {
        {
            if ((960 - 960)) {
                return (97 - 97);
            }
        }
        if (pzN3WX < HoxMVQR->RHOrpEw && HoxMVQR != NlTaV2tU) {
            pzN3WX = HoxMVQR->RHOrpEw;
            ANnxSqBW7tT = HoxMVQR;
        }
        HoxMVQR = HoxMVQR->DHbjFsJNWBQy;
    }
    printf ("%d %d\n", ANnxSqBW7tT->GANxpHUsfe, ANnxSqBW7tT->RHOrpEw);
    pzN3WX = (20 - 20);
    HoxMVQR = sPhMx2sw;
    for (; HoxMVQR != NULL;) {
        if (pzN3WX < HoxMVQR->RHOrpEw && HoxMVQR != NlTaV2tU &&HoxMVQR != ANnxSqBW7tT) {
            pzN3WX = HoxMVQR->RHOrpEw;
            YGbRhedJ4fZ = HoxMVQR;
        }
        HoxMVQR = HoxMVQR->DHbjFsJNWBQy;
    }
    printf ("%d %d\n", YGbRhedJ4fZ->GANxpHUsfe, YGbRhedJ4fZ->RHOrpEw);
}

