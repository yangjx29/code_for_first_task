struct   Student {
    char nDxiRoaVH [(45 - 25)];
    char bkPXqg8BuZi [(879 - 859)];
    char eMG1Ps8Ij3;
    int iuUeLz;
    char NnIeywC [(962 - 942)];
    char hHvxei [(538 - 518)];
    struct   Student *NLlMK2uSdf;
};
int DyMIQLWic;

struct   Student *eFWj8IMhD6 () {
    struct   Student *PLcqij2eZKE;
    struct   Student *Xu5l0zbjt4QP;
    struct   Student *whiOX6u;
    Xu5l0zbjt4QP = whiOX6u = (struct   Student *) malloc (LEN);
    scanf ("%s", &Xu5l0zbjt4QP->nDxiRoaVH);
    for (; Xu5l0zbjt4QP->nDxiRoaVH[(981 - 981)] != 'e';) {
        scanf ("%s %c %d %s %s", &Xu5l0zbjt4QP->bkPXqg8BuZi, &Xu5l0zbjt4QP->eMG1Ps8Ij3, &Xu5l0zbjt4QP->iuUeLz, &Xu5l0zbjt4QP->NnIeywC, &Xu5l0zbjt4QP->hHvxei);
        DyMIQLWic = DyMIQLWic +(655 - 654);
        if (!((785 - 784) != DyMIQLWic))
            Xu5l0zbjt4QP->NLlMK2uSdf = NULL;
        else {
            Xu5l0zbjt4QP->NLlMK2uSdf = whiOX6u;
            whiOX6u = Xu5l0zbjt4QP;
        }
        Xu5l0zbjt4QP = (struct   Student *) malloc (LEN);
        scanf ("%s", &Xu5l0zbjt4QP->nDxiRoaVH);
    }
    PLcqij2eZKE = whiOX6u;
    return PLcqij2eZKE;
}

void  lKVvcNl (struct   Student *PLcqij2eZKE) {
    struct   Student *wydzxnBturc;
    wydzxnBturc = PLcqij2eZKE;
    if (PLcqij2eZKE != NULL)
        do {
            printf ("%s %s %c %d %s %s\n", wydzxnBturc->nDxiRoaVH, wydzxnBturc->bkPXqg8BuZi, wydzxnBturc->eMG1Ps8Ij3, wydzxnBturc->iuUeLz, wydzxnBturc->NnIeywC, wydzxnBturc->hHvxei);
            wydzxnBturc = wydzxnBturc->NLlMK2uSdf;
        }
        while (wydzxnBturc != NULL);
}

void  main () {
    struct   Student *PLcqij2eZKE;
    lKVvcNl (PLcqij2eZKE);
    PLcqij2eZKE = eFWj8IMhD6 ();
}

