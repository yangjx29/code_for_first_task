int eYCKvc0qSwb3 = (325 - 325);

struct   student {
    char hex1VAkG [(912 - 892)];
    char HNO1HvI985VE [(255 - 235)];
    char BjPFdZAqJ;
    char YpEovsA [(333 - 313)];
    char PxcjWD [(297 - 277)];
    char uLvH3waITg [20];
    struct   student *ze6MpUvmF;
};
struct   student *Q9DxSch1Va (void ) {
    struct   student *h1obWOUw7n0;
    struct   student *G0vi5y;
    struct   student *ffCFoOESki;
    G0vi5y = ffCFoOESki = (struct   student *) malloc (LEN);
    h1obWOUw7n0 = NULL;
    scanf ("%s ", G0vi5y->hex1VAkG);
    if (!('e' != G0vi5y->hex1VAkG[(687 - 687)]))
        return (h1obWOUw7n0);
    scanf ("%s %c %s %s %s", G0vi5y->HNO1HvI985VE, &G0vi5y->BjPFdZAqJ, G0vi5y->YpEovsA, G0vi5y->PxcjWD, G0vi5y->uLvH3waITg);
    G0vi5y->ze6MpUvmF = NULL;
    {
        for (; true;) {
            h1obWOUw7n0 = G0vi5y;
            eYCKvc0qSwb3 = eYCKvc0qSwb3 + (728 - 727);
            if ((349 - 348) < eYCKvc0qSwb3)
                G0vi5y->ze6MpUvmF = ffCFoOESki;
            ffCFoOESki = G0vi5y;
            G0vi5y = (struct   student *) malloc (LEN);
            scanf ("%s", G0vi5y->hex1VAkG);
            if (strcmp (G0vi5y->hex1VAkG, "end") == (868 - 868)) {
                G0vi5y = NULL;
                break;
            }
            scanf ("%s %c %s %s %s", G0vi5y->HNO1HvI985VE, &G0vi5y->BjPFdZAqJ, G0vi5y->YpEovsA, G0vi5y->PxcjWD, G0vi5y->uLvH3waITg);
        }
    }
    return (h1obWOUw7n0);
}

void  Urq5ZhdR2CzA (struct   student *h1obWOUw7n0) {
    struct   student *TbZx1jDA;
    TbZx1jDA = h1obWOUw7n0;
    if (h1obWOUw7n0 != NULL)
        do {
            printf ("%s %s %c %s %s %s\n", TbZx1jDA->hex1VAkG, TbZx1jDA->HNO1HvI985VE, TbZx1jDA->BjPFdZAqJ, TbZx1jDA->YpEovsA, TbZx1jDA->PxcjWD, TbZx1jDA->uLvH3waITg);
            TbZx1jDA = TbZx1jDA->ze6MpUvmF;
        }
        while (TbZx1jDA != NULL);
}

void  main () {
    struct   student *h1obWOUw7n0;
    Urq5ZhdR2CzA (h1obWOUw7n0);
    h1obWOUw7n0 = Q9DxSch1Va ();
}

