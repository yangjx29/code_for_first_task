struct   student {
    char fqkGeC [(748 - 738)];
    char CHgNdqLaU [(365 - 335)];
    char mGwvmEOU;
    char oehVGDT [(381 - 378)];
    char LSthJei7Oyq [(156 - 150)];
    char WcyNau2Ag [(816 - 801)];
    struct   student *NaX6HjV1p;
    struct   student *xoMhU6mGd;
};
int l8Ix16o7kfc;

struct   student *c85tAhfceK2y () {
    struct   student *MJsBmR;
    struct   student *dTQNcOKtzag;
    struct   student *veYLUijG;
    struct   student *ypQEXyxO;
    l8Ix16o7kfc = (823 - 823);
    MJsBmR = NULL;
    veYLUijG = ypQEXyxO = (struct   student *) malloc ((829 - 729));
    scanf ("%s ", &veYLUijG->fqkGeC);
    do {
        scanf ("%s %c %s %s %s", &veYLUijG->CHgNdqLaU, &veYLUijG->mGwvmEOU, &veYLUijG->oehVGDT, &veYLUijG->LSthJei7Oyq, &veYLUijG->WcyNau2Ag);
        l8Ix16o7kfc = l8Ix16o7kfc + (722 - 721);
        if (l8Ix16o7kfc == (777 - 776)) {
            MJsBmR = veYLUijG;
            veYLUijG->xoMhU6mGd = NULL;
        }
        else {
            ypQEXyxO->NaX6HjV1p = veYLUijG;
            veYLUijG->xoMhU6mGd = ypQEXyxO;
            ypQEXyxO = veYLUijG;
        }
        veYLUijG = (struct   student *) malloc ((1098 - 998));
        scanf ("%s", &veYLUijG->fqkGeC);
    }
    while (veYLUijG->fqkGeC[(182 - 182)] != 'e');
    dTQNcOKtzag = ypQEXyxO;
    ypQEXyxO->NaX6HjV1p = NULL;
    return (dTQNcOKtzag);
}

void  main () {
    struct   student *veYLUijG;
    veYLUijG = c85tAhfceK2y ();
    do {
        printf ("%s %s %c %s %s %s\n", veYLUijG->fqkGeC, veYLUijG->CHgNdqLaU, veYLUijG->mGwvmEOU, veYLUijG->oehVGDT, veYLUijG->LSthJei7Oyq, veYLUijG->WcyNau2Ag);
        veYLUijG = veYLUijG->xoMhU6mGd;
    }
    while (veYLUijG != NULL);
}

