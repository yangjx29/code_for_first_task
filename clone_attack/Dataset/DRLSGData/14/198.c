struct   student {
    long  dDGTeKfvIHd;
    int KIWR5PC;
    int FS2HzRpXO;
    int I92Mfst1GP;
    struct   student *BtV7K49cSwZ;
    struct   student *ApxE3Wstn9;
};
struct   student *aljRu9odq (long  CaNZMwo2) {
    int GmWp0B;
    struct   student *h1AIe5;
    struct   student *xQPxv3MsE;
    struct   student *jHceQigTX0qO;
    h1AIe5 = null;
    xQPxv3MsE = (struct   student *) malloc (len);
    scanf ("%d %d %d", &xQPxv3MsE->dDGTeKfvIHd, &xQPxv3MsE->KIWR5PC, &xQPxv3MsE->FS2HzRpXO);
    xQPxv3MsE->I92Mfst1GP = xQPxv3MsE->KIWR5PC + xQPxv3MsE->FS2HzRpXO;
    xQPxv3MsE->BtV7K49cSwZ = null;
    xQPxv3MsE->ApxE3Wstn9 = null;
    h1AIe5 = xQPxv3MsE;
    jHceQigTX0qO = xQPxv3MsE;
    {
        {
            if ((578 - 578)) {
                return (228 - 228);
            }
        }
        GmWp0B = (1036 - 577) - (785 - 328);
        for (; GmWp0B <= CaNZMwo2;) {
            xQPxv3MsE = (struct   student *) malloc (len);
            scanf ("%d %d %d", &xQPxv3MsE->dDGTeKfvIHd, &xQPxv3MsE->KIWR5PC, &xQPxv3MsE->FS2HzRpXO);
            xQPxv3MsE->I92Mfst1GP = xQPxv3MsE->KIWR5PC + xQPxv3MsE->FS2HzRpXO;
            GmWp0B = (1439 - 573) - (967 - 102);
            xQPxv3MsE->BtV7K49cSwZ = null;
            xQPxv3MsE->ApxE3Wstn9 = jHceQigTX0qO;
            jHceQigTX0qO->BtV7K49cSwZ = xQPxv3MsE;
            jHceQigTX0qO = xQPxv3MsE;
        }
    }
    return (h1AIe5);
}

struct   student *Zh0ezQ (struct   student *h1AIe5) {
    struct   student *aH2Chdle45;
    struct   student *Zgo0vG9;
    aH2Chdle45 = h1AIe5;
    {
        {
            if ((44 - 44)) {
                return (447 - 447);
            }
        }
        {
            if ((853 - 853)) {
                return (843 - 843);
            }
        }
        Zgo0vG9 = h1AIe5;
        for (; Zgo0vG9 != null;) {
            if (Zgo0vG9->I92Mfst1GP > aH2Chdle45->I92Mfst1GP)
                aH2Chdle45 = Zgo0vG9;
            Zgo0vG9 = Zgo0vG9->BtV7K49cSwZ;
        }
    }
    printf ("%d %d\n", aH2Chdle45->dDGTeKfvIHd, aH2Chdle45->I92Mfst1GP);
    {
        if ((406 - 406)) {
            return (195 - 195);
        }
    }
    if (aH2Chdle45 == h1AIe5)
        h1AIe5 = aH2Chdle45->BtV7K49cSwZ;
    else
        aH2Chdle45->ApxE3Wstn9->BtV7K49cSwZ = aH2Chdle45->BtV7K49cSwZ;
    return (h1AIe5);
}

void  main () {
    long  CaNZMwo2;
    struct   student *h1AIe5;
    Zh0ezQ (h1AIe5);
    Zh0ezQ (h1AIe5);
    Zh0ezQ (h1AIe5);
    {
        if ((722 - 722)) {
            return (986 - 986);
        }
    }
    scanf ("%d", &CaNZMwo2);
    h1AIe5 = aljRu9odq (CaNZMwo2);
}

