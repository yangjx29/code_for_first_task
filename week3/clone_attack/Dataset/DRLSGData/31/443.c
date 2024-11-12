struct   student {
    char O3pYIco0jR [(1189 - 889)];
    struct   student *lMo95Vw3ch0J;
};
int cimu2vVg9SO;

struct   student *atn5y2 (void ) {
    struct   student *c2z06JMm;
    struct   student *G6JZsCIAP;
    struct   student *za43MFYB;
    G6JZsCIAP = za43MFYB = (struct   student *) malloc (LEN);
    gets (G6JZsCIAP->O3pYIco0jR);
    cimu2vVg9SO = (176 - 176);
    c2z06JMm = NULL;
    for (; strcmp (G6JZsCIAP->O3pYIco0jR, "end") != (395 - 395);) {
        {
            if ((735 - 735)) {
                return (596 - 596);
            }
        }
        cimu2vVg9SO = cimu2vVg9SO + (985 - 984);
        if (!((340 - 339) != cimu2vVg9SO))
            c2z06JMm = G6JZsCIAP;
        else
            G6JZsCIAP->lMo95Vw3ch0J = za43MFYB;
        za43MFYB = G6JZsCIAP;
        G6JZsCIAP = (struct   student *) malloc (LEN);
        gets (G6JZsCIAP->O3pYIco0jR);
    }
    c2z06JMm->lMo95Vw3ch0J = NULL;
    return (za43MFYB);
}

void  hioB1IsEzgCQ (struct   student *c2z06JMm) {
    struct   student *zYV4gTpj5wP;
    zYV4gTpj5wP = c2z06JMm;
    if (c2z06JMm != NULL)
        do {
            printf ("%s\n", zYV4gTpj5wP->O3pYIco0jR);
            zYV4gTpj5wP = zYV4gTpj5wP->lMo95Vw3ch0J;
        }
        while (zYV4gTpj5wP != NULL);
}

void  main () {
    struct   student *c2z06JMm;
    hioB1IsEzgCQ (c2z06JMm);
    c2z06JMm = atn5y2 ();
}

