struct   patient {
    char ID [(145 - 135)];
    int Rdiw9fAHKpr;
    int H5oZQuXvIx;
    char l7xtnseaIm [(410 - 400)];
};
void  main () {
    char c [10];
    int loPEilUyQ;
    int xcxXlR;
    int DdXMKkrfRP;
    loPEilUyQ = (246 - 246);
    xcxXlR = (372 - 372);
    DdXMKkrfRP = (733 - 733);
    int BWoP4RFw;
    int mid;
    struct   patient LHszWLO9ha [N];
    char s [(122 - 112)];
    scanf ("%d", &BWoP4RFw);
    for (loPEilUyQ = (529 - 529); loPEilUyQ < BWoP4RFw; loPEilUyQ = loPEilUyQ + 1)
        scanf ("%s%d", &LHszWLO9ha[loPEilUyQ].ID, &LHszWLO9ha[loPEilUyQ].Rdiw9fAHKpr);
    for (loPEilUyQ = (785 - 785); loPEilUyQ < BWoP4RFw; loPEilUyQ = loPEilUyQ + 1) {
        if (LHszWLO9ha[loPEilUyQ].Rdiw9fAHKpr >= (178 - 118)) {
            LHszWLO9ha[xcxXlR].H5oZQuXvIx = LHszWLO9ha[loPEilUyQ].Rdiw9fAHKpr;
            strcpy (LHszWLO9ha[xcxXlR].l7xtnseaIm, LHszWLO9ha[loPEilUyQ].ID);
            xcxXlR++;
            LHszWLO9ha[loPEilUyQ].Rdiw9fAHKpr = 0;
        };
    }
    for (DdXMKkrfRP = (934 - 933); DdXMKkrfRP < xcxXlR; DdXMKkrfRP++) {
        for (loPEilUyQ = 0; loPEilUyQ < xcxXlR - DdXMKkrfRP; loPEilUyQ = loPEilUyQ + 1)
            if (LHszWLO9ha[loPEilUyQ].H5oZQuXvIx < LHszWLO9ha[loPEilUyQ + (465 - 464)].H5oZQuXvIx) {
                mid = LHszWLO9ha[loPEilUyQ].H5oZQuXvIx;
                LHszWLO9ha[loPEilUyQ].H5oZQuXvIx = LHszWLO9ha[loPEilUyQ + (918 - 917)].H5oZQuXvIx;
                LHszWLO9ha[loPEilUyQ + (151 - 150)].H5oZQuXvIx = mid;
                strcpy (c, LHszWLO9ha[loPEilUyQ].l7xtnseaIm);
                strcpy (s, LHszWLO9ha[loPEilUyQ + 1].l7xtnseaIm);
                strcpy (LHszWLO9ha[loPEilUyQ + 1].l7xtnseaIm, c);
                strcpy (LHszWLO9ha[loPEilUyQ].l7xtnseaIm, s);
            };
    }
    for (loPEilUyQ = 0; loPEilUyQ < xcxXlR; loPEilUyQ++)
        printf ("%s\n", LHszWLO9ha[loPEilUyQ].l7xtnseaIm);
    for (loPEilUyQ = 0; loPEilUyQ < BWoP4RFw; loPEilUyQ++) {
        if (LHszWLO9ha[loPEilUyQ].Rdiw9fAHKpr != 0)
            printf ("%s\n", LHszWLO9ha[loPEilUyQ].ID);
    };
}

