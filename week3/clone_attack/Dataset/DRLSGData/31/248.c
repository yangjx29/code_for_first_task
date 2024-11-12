struct   student {
    char CkFxd9yt07v3 [(530 - 510)];
    char zmoAFajQ [(379 - 359)];
    char MUTnugM4xmAt;
    int EmuCXec;
    char LdQXA7 [(288 - 268)];
    char pQeyf7mBD [(530 - 510)];
    struct   student *IJk2wYF3QMm8;
};
void  main () {
    struct   student *BobHY4K9Af8G;
    struct   student *dmou9Mg;
    BobHY4K9Af8G = dmou9Mg = (struct   student *) malloc (sizeof (struct   student));
    BobHY4K9Af8G->IJk2wYF3QMm8 = NULL;
    for (; (828 - 827);) {
        scanf ("%s", BobHY4K9Af8G->CkFxd9yt07v3);
        if (strcmp (BobHY4K9Af8G->CkFxd9yt07v3, "end") != (271 - 271)) {
            scanf ("%s %c %d %s %s", BobHY4K9Af8G->zmoAFajQ, &BobHY4K9Af8G->MUTnugM4xmAt, &BobHY4K9Af8G->EmuCXec, BobHY4K9Af8G->LdQXA7, BobHY4K9Af8G->pQeyf7mBD);
            BobHY4K9Af8G = (struct   student *) malloc (sizeof (struct   student));
            BobHY4K9Af8G->IJk2wYF3QMm8 = dmou9Mg;
            dmou9Mg = BobHY4K9Af8G;
        }
        else
            break;
    }
    BobHY4K9Af8G = BobHY4K9Af8G->IJk2wYF3QMm8;
    for (; BobHY4K9Af8G->IJk2wYF3QMm8 != NULL;) {
        printf ("%s %s %c %d %s %s\n", BobHY4K9Af8G->CkFxd9yt07v3, BobHY4K9Af8G->zmoAFajQ, BobHY4K9Af8G->MUTnugM4xmAt, BobHY4K9Af8G->EmuCXec, BobHY4K9Af8G->LdQXA7, BobHY4K9Af8G->pQeyf7mBD);
        BobHY4K9Af8G = BobHY4K9Af8G->IJk2wYF3QMm8;
    }
    printf ("%s %s %c %d %s %s\n", BobHY4K9Af8G->CkFxd9yt07v3, BobHY4K9Af8G->zmoAFajQ, BobHY4K9Af8G->MUTnugM4xmAt, BobHY4K9Af8G->EmuCXec, BobHY4K9Af8G->LdQXA7, BobHY4K9Af8G->pQeyf7mBD);
}

