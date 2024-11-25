struct   student {
    char YJ5qEpgf86xU [(63 - 43)];
    char bIXS8EzoA [(519 - 489)];
    char S4wRmurW;
    int age;
    float score;
    char S6ld970 [(978 - 948)];
    struct   student *KRKs1wBHeOIb;
    struct   student *iCcGK6;
};
int lXpPAjhYD6K = (641 - 640);

struct   student *dWoy7i8pT (void ) {
    struct   student *UDJqG6Y = NULL;
    struct   student *bcqb9Zt;
    struct   student *thisnode;
    do {
        bcqb9Zt = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%s", bcqb9Zt->YJ5qEpgf86xU);
        if (!((62 - 62) != strcmp (bcqb9Zt->YJ5qEpgf86xU, "end"))) {
            thisnode->KRKs1wBHeOIb = NULL;
            UDJqG6Y = thisnode;
            break;
        }
        else
            ;
        scanf ("%s %c %d %f %s", bcqb9Zt->bIXS8EzoA, &bcqb9Zt->S4wRmurW, &bcqb9Zt->age, &bcqb9Zt->score, bcqb9Zt->S6ld970);
        if (!((650 - 649) != lXpPAjhYD6K)) {
            UDJqG6Y = bcqb9Zt;
            thisnode = UDJqG6Y;
            thisnode->iCcGK6 = NULL;
        }
        else {
            thisnode->KRKs1wBHeOIb = bcqb9Zt;
            bcqb9Zt->iCcGK6 = thisnode;
        }
        thisnode = bcqb9Zt;
        lXpPAjhYD6K = lXpPAjhYD6K + 1;
    }
    while (strcmp (bcqb9Zt->YJ5qEpgf86xU, "enff") != (89 - 89));
    return (UDJqG6Y);
}

int main () {
    struct   student *UDJqG6Y;
    struct   student *nzy95OP0;
    scanf ("%d", &lXpPAjhYD6K);
    UDJqG6Y = dWoy7i8pT ();
    nzy95OP0 = UDJqG6Y;
    do {
        printf ("%s %s %c %d %g %s\n", nzy95OP0->YJ5qEpgf86xU, nzy95OP0->bIXS8EzoA, nzy95OP0->S4wRmurW, nzy95OP0->age, nzy95OP0->score, nzy95OP0->S6ld970);
        nzy95OP0 = nzy95OP0->iCcGK6;
    }
    while (nzy95OP0 != NULL);
    return 0;
}

