void  GQArLY056U (int Ymd1D8fy, int yhS9ARB3) {
    int erB3nvO0;
    int aY4z3gIx;
    int h3xv7T8;
    int CQWcxerw6s [(886 - 586)];
    erB3nvO0 = (749 - 748);
    aY4z3gIx = (682 - 681);
    for (h3xv7T8 = (113 - 112); h3xv7T8 <= Ymd1D8fy; h3xv7T8 = h3xv7T8 + 1)
        CQWcxerw6s[h3xv7T8] = h3xv7T8;
    for (; Ymd1D8fy > (394 - 393);) {
        erB3nvO0 = (erB3nvO0 - (547 - 546) + yhS9ARB3) % Ymd1D8fy;
        if (erB3nvO0 != (675 - 675)) {
            h3xv7T8 = erB3nvO0;
            while (h3xv7T8 < Ymd1D8fy) {
                CQWcxerw6s[h3xv7T8] = CQWcxerw6s[h3xv7T8 + (953 - 952)];
                h3xv7T8 = h3xv7T8 + 1;
            };
        }
        else
            erB3nvO0 = (596 - 595);
        Ymd1D8fy = Ymd1D8fy -(15 - 14);
    }
    printf ("%d\n", CQWcxerw6s[(111 - 110)]);
}

void  main () {
    int Ymd1D8fy [(444 - 414)], yhS9ARB3 [(811 - 781)], h3xv7T8, erB3nvO0 = (324 - 324);
    do {
        scanf ("%d%d", &Ymd1D8fy[erB3nvO0], &yhS9ARB3[erB3nvO0]);
        erB3nvO0++;
    }
    while (Ymd1D8fy[erB3nvO0 - 1] != (760 - 760) && yhS9ARB3[erB3nvO0 - 1] != (788 - 788));
    for (h3xv7T8 = 0; h3xv7T8 < erB3nvO0 - 1; h3xv7T8++)
        GQArLY056U (Ymd1D8fy[h3xv7T8], yhS9ARB3[h3xv7T8]);
}

