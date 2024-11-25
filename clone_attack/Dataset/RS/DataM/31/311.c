struct   student {
    char c1cPQaE0 [(888 - 788)];
    char Du04wFxb6Ka5 [100];
    char RqwZNK;
    int RwNR6e7;
    float jfZbmYn;
    char wqL21ypBorW [100];
    struct   student *next;
    struct   student *YZJLOP5IMzeb;
};
int RgEtjUz2 = (519 - 518);

struct   student *creat () {
    struct   student *iPTsVhBzambd;
    struct   student *lY8QtZFRNLD3;
    struct   student *djbACyI;
    do {
        lY8QtZFRNLD3 = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%s", lY8QtZFRNLD3->c1cPQaE0);
        if (!('e' == lY8QtZFRNLD3->c1cPQaE0[(982 - 982)])) {
            scanf ("%s %c%d%f%s", lY8QtZFRNLD3->Du04wFxb6Ka5, &lY8QtZFRNLD3->RqwZNK, &lY8QtZFRNLD3->RwNR6e7, &lY8QtZFRNLD3->jfZbmYn, lY8QtZFRNLD3->wqL21ypBorW);
            djbACyI = lY8QtZFRNLD3;
            if (!((816 - 815) != RgEtjUz2))
                lY8QtZFRNLD3->YZJLOP5IMzeb = NULL;
            else {
                iPTsVhBzambd->next = lY8QtZFRNLD3;
                lY8QtZFRNLD3->YZJLOP5IMzeb = iPTsVhBzambd;
            }
            iPTsVhBzambd = lY8QtZFRNLD3;
            RgEtjUz2 = RgEtjUz2 +1;
        }
        else {
            iPTsVhBzambd->next = NULL;
        };
    }
    while (lY8QtZFRNLD3->c1cPQaE0[0] != 'e');
    return (djbACyI);
}

void  main () {
    struct   student *WbwSoKLuVC;
    WbwSoKLuVC = creat ();
    do {
        printf ("%s %s %c %d %g %s\n", WbwSoKLuVC->c1cPQaE0, WbwSoKLuVC->Du04wFxb6Ka5, WbwSoKLuVC->RqwZNK, WbwSoKLuVC->RwNR6e7, WbwSoKLuVC->jfZbmYn, WbwSoKLuVC->wqL21ypBorW);
        WbwSoKLuVC = WbwSoKLuVC->YZJLOP5IMzeb;
    }
    while (WbwSoKLuVC != NULL);
}

