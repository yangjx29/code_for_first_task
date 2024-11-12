struct   shuju {
    char XwAPDIk732pU [(841 - 821)];
    char NNxkYu7Gzqh [(638 - 618)];
    char LOWfgG52lMd;
    int nmyjhc6IZ;
    char LCpjRQ [(690 - 680)];
    char Q7D2Z8th3W [(737 - 717)];
    struct   shuju *n2wOPa3c7;
};
struct   shuju *EMifn8VtyR () {
    struct   shuju *ch6FNwQb;
    struct   shuju *ZDSBPaI;
    struct   shuju *dxw0Ba4CR;
    ZDSBPaI = (struct   shuju *) malloc (len);
    scanf ("%s %s %c %d %s %s", ZDSBPaI->XwAPDIk732pU, ZDSBPaI->NNxkYu7Gzqh, &ZDSBPaI->LOWfgG52lMd, &ZDSBPaI->nmyjhc6IZ, ZDSBPaI->LCpjRQ, ZDSBPaI->Q7D2Z8th3W);
    ZDSBPaI->n2wOPa3c7 = NULL;
    for (; (407 - 406);) {
        dxw0Ba4CR = ZDSBPaI;
        ZDSBPaI = (struct   shuju *) malloc (len);
        scanf ("%s", ZDSBPaI->XwAPDIk732pU);
        if (!((446 - 446) != strcmp (ZDSBPaI->XwAPDIk732pU, "end"))) {
            free (ZDSBPaI);
            break;
        }
        else {
            scanf ("%s %c %d %s %s", ZDSBPaI->NNxkYu7Gzqh, &ZDSBPaI->LOWfgG52lMd, &ZDSBPaI->nmyjhc6IZ, ZDSBPaI->LCpjRQ, ZDSBPaI->Q7D2Z8th3W);
            ZDSBPaI->n2wOPa3c7 = dxw0Ba4CR;
        }
    }
    ch6FNwQb = dxw0Ba4CR;
    return (ch6FNwQb);
}

void  QpUvaY (struct   shuju *ch6FNwQb) {
    struct   shuju *uGMjkAXWzY7m;
    uGMjkAXWzY7m = ch6FNwQb;
    for (; uGMjkAXWzY7m->n2wOPa3c7 != NULL;) {
        printf ("%s %s %c %d %s %s\n", uGMjkAXWzY7m->XwAPDIk732pU, uGMjkAXWzY7m->NNxkYu7Gzqh, uGMjkAXWzY7m->LOWfgG52lMd, uGMjkAXWzY7m->nmyjhc6IZ, uGMjkAXWzY7m->LCpjRQ, uGMjkAXWzY7m->Q7D2Z8th3W);
        uGMjkAXWzY7m = uGMjkAXWzY7m->n2wOPa3c7;
    }
    printf ("%s %s %c %d %s %s\n", uGMjkAXWzY7m->XwAPDIk732pU, uGMjkAXWzY7m->NNxkYu7Gzqh, uGMjkAXWzY7m->LOWfgG52lMd, uGMjkAXWzY7m->nmyjhc6IZ, uGMjkAXWzY7m->LCpjRQ, uGMjkAXWzY7m->Q7D2Z8th3W);
}

void  main () {
    struct   shuju *uGMjkAXWzY7m;
    QpUvaY (uGMjkAXWzY7m);
    uGMjkAXWzY7m = EMifn8VtyR ();
}

