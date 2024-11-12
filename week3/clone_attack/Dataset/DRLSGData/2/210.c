struct   book {
    int wg0hswrVM;
    char i6UOg7QIw [(202 - 176)];
    struct   book *xJR9aKo7l;
};
void  main () {
    int cFOixM64Vry;
    struct   book *wT2tBF;
    struct   book *CoCTvhPKtk1;
    int LU3HvOnwPsp;
    int ulcTUwBqC;
    char SpJLa0j [(155 - 129)];
    int RzqPiY [(398 - 372)] = {(318 - 318)};
    int wp4bTcFJ7Va;
    int LHGQdmDnZE;
    struct   book *L3i8y7EtaX4;
    wT2tBF = (struct   book *) malloc (sizeof (struct   book));
    scanf ("%d", &LHGQdmDnZE);
    {
        cFOixM64Vry = (1008 - 303) - (1168 - 463);
        for (; cFOixM64Vry < (1011 - 985);) {
            SpJLa0j[cFOixM64Vry] = (380 - 315) + cFOixM64Vry;
            cFOixM64Vry = cFOixM64Vry + (576 - 575);
        }
    }
    LU3HvOnwPsp = (928 - 928);
    wT2tBF->xJR9aKo7l = NULL;
    CoCTvhPKtk1 = wT2tBF;
    {
        ulcTUwBqC = (1601 - 804) - 797;
        for (; LHGQdmDnZE > ulcTUwBqC;) {
            ulcTUwBqC = ulcTUwBqC + (385 - 384);
            L3i8y7EtaX4 = (struct   book *) malloc (sizeof (struct   book));
            scanf ("%d %s", &L3i8y7EtaX4->wg0hswrVM, L3i8y7EtaX4->i6UOg7QIw);
            L3i8y7EtaX4->xJR9aKo7l = NULL;
            CoCTvhPKtk1->xJR9aKo7l = L3i8y7EtaX4;
            CoCTvhPKtk1 = L3i8y7EtaX4;
        }
    }
    for (CoCTvhPKtk1 = wT2tBF->xJR9aKo7l; CoCTvhPKtk1 != NULL; CoCTvhPKtk1 = CoCTvhPKtk1->xJR9aKo7l) {
        for (ulcTUwBqC = (359 - 359); CoCTvhPKtk1->i6UOg7QIw[ulcTUwBqC] != '\0'; ulcTUwBqC = ulcTUwBqC + (411 - 410))
            for (cFOixM64Vry = (827 - 827); cFOixM64Vry < (694 - 668); cFOixM64Vry = cFOixM64Vry + (976 - 975))
                if (!(SpJLa0j[cFOixM64Vry] != CoCTvhPKtk1->i6UOg7QIw[ulcTUwBqC]))
                    RzqPiY[cFOixM64Vry]++;
    }
    wp4bTcFJ7Va = RzqPiY[(787 - 787)];
    for (cFOixM64Vry = (288 - 287); cFOixM64Vry < (549 - 523); cFOixM64Vry = cFOixM64Vry + (551 - 550))
        if (RzqPiY[cFOixM64Vry] > wp4bTcFJ7Va) {
            wp4bTcFJ7Va = RzqPiY[cFOixM64Vry];
            LU3HvOnwPsp = cFOixM64Vry;
        }
    printf ("%c\n", SpJLa0j[LU3HvOnwPsp]);
    printf ("%d\n", RzqPiY[LU3HvOnwPsp]);
    for (CoCTvhPKtk1 = wT2tBF->xJR9aKo7l; CoCTvhPKtk1 != NULL; CoCTvhPKtk1 = CoCTvhPKtk1->xJR9aKo7l)
        for (ulcTUwBqC = (89 - 89); CoCTvhPKtk1->i6UOg7QIw[ulcTUwBqC] != '\0'; ulcTUwBqC = ulcTUwBqC + 1)
            if (!(SpJLa0j[LU3HvOnwPsp] != CoCTvhPKtk1->i6UOg7QIw[ulcTUwBqC]))
                printf ("%d\n", CoCTvhPKtk1->wg0hswrVM);
}

