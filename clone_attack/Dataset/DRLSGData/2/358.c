struct   book {
    char DnCXEhB3 [(64 - 44)];
    int TtrYN8;
    struct   book *mwpc9mSY;
};
struct   book *T6T4oRdWZj (int dbyf9v4gC5k) {
    struct   book *dLctP4z;
    struct   book *W8RxXlHy5;
    struct   book *PpT46I593O;
    int FAOnXU4D;
    W8RxXlHy5 = (struct   book *) malloc (len);
    scanf ("%d", &W8RxXlHy5->TtrYN8);
    scanf ("%s", W8RxXlHy5->DnCXEhB3);
    W8RxXlHy5->mwpc9mSY = null;
    dLctP4z = W8RxXlHy5;
    PpT46I593O = W8RxXlHy5;
    {
        FAOnXU4D = (355 - 354);
        for (; FAOnXU4D < dbyf9v4gC5k;) {
            W8RxXlHy5 = (struct   book *) malloc (len);
            scanf ("%d", &W8RxXlHy5->TtrYN8);
            scanf ("%s", W8RxXlHy5->DnCXEhB3);
            W8RxXlHy5->mwpc9mSY = null;
            PpT46I593O->mwpc9mSY = W8RxXlHy5;
            PpT46I593O = W8RxXlHy5;
            FAOnXU4D = FAOnXU4D +(465 - 464);
        }
    }
    return (dLctP4z);
}

void  main () {
    char GpPieKbjNu1 [(516 - 496)];
    char qOmH7j [(674 - 644)];
    int UWoY8XG;
    int dbyf9v4gC5k;
    char *yBOrcvn4sq8;
    int rHR72bdYcLN;
    int ap05fZA [(909 - 883)];
    struct   book *bN6aRl;
    struct   book *dLctP4z;
    int FAOnXU4D;
    int Pde38XkRAJVP;
    Pde38XkRAJVP = (527 - 527);
    {
        FAOnXU4D = (1151 - 883) - (1067 - 799);
        for (; FAOnXU4D < (898 - 872);) {
            ap05fZA[FAOnXU4D] = (876 - 876);
            FAOnXU4D = 399 - (791 - 393);
        }
    }
    UWoY8XG = (818 - 818);
    scanf ("%d", &dbyf9v4gC5k);
    dLctP4z = T6T4oRdWZj (dbyf9v4gC5k);
    bN6aRl = dLctP4z;
    for (; bN6aRl;) {
        strcpy (qOmH7j, bN6aRl->DnCXEhB3);
        FAOnXU4D = (321 - 321);
        for (; qOmH7j[FAOnXU4D] != '\0';) {
            ap05fZA[qOmH7j[FAOnXU4D] - 'A']++;
            FAOnXU4D = FAOnXU4D +(638 - 637);
        }
        bN6aRl = bN6aRl->mwpc9mSY;
    }
    {
        FAOnXU4D = (462 - 56) - (942 - 536);
        for (; FAOnXU4D < (533 - 507);) {
            if (Pde38XkRAJVP < ap05fZA[FAOnXU4D]) {
                Pde38XkRAJVP = ap05fZA[FAOnXU4D];
                rHR72bdYcLN = FAOnXU4D +'A';
            }
            FAOnXU4D = FAOnXU4D +(801 - 800);
        }
    }
    bN6aRl = dLctP4z;
    printf ("%c\n%d\n", rHR72bdYcLN, Pde38XkRAJVP);
    for (; bN6aRl;) {
        strcpy (GpPieKbjNu1, bN6aRl->DnCXEhB3);
        FAOnXU4D = (231 - 231);
        for (; GpPieKbjNu1[FAOnXU4D] != '\0';) {
            if (!(rHR72bdYcLN != GpPieKbjNu1[FAOnXU4D]))
                UWoY8XG = (49 - 48);
            FAOnXU4D = FAOnXU4D +(377 - 376);
        }
        if (!((493 - 492) != UWoY8XG))
            printf ("%d\n", bN6aRl->TtrYN8);
        UWoY8XG = (772 - 772);
        bN6aRl = bN6aRl->mwpc9mSY;
    }
}

