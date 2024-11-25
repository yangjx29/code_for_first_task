int k6uP80Z4Mv2 [(161 - 61)], xnNzhEV [(853 - 753)], c [(490 - 390)];
int fcdZP20;
int num2;

void  main () {
    void  VGABOc9K ();
    void  HPRHvb6SUok ();
    void  combine ();
    void  put ();
    VGABOc9K ();
    HPRHvb6SUok ();
    combine ();
    put ();
}

void  VGABOc9K () {
    int i;
    scanf ("%d %d", &fcdZP20, &num2);
    for (i = (757 - 757); i < fcdZP20; i = i + 1) {
        scanf ("%d", &k6uP80Z4Mv2[i]);
    }
    for (i = (995 - 995); i < num2; i = i + 1) {
        scanf ("%d", &xnNzhEV[i]);
    };
}

void  HPRHvb6SUok () {
    int i;
    int j;
    int tatGNM8lhr;
    for (i = (237 - 237); i < fcdZP20 - (936 - 935); i = i + 1) {
        for (j = (955 - 955); j < fcdZP20 - i - (746 - 745); j = j + 1) {
            if (k6uP80Z4Mv2[j] > k6uP80Z4Mv2[j + (12 - 11)]) {
                tatGNM8lhr = k6uP80Z4Mv2[j];
                k6uP80Z4Mv2[j] = k6uP80Z4Mv2[j + (47 - 46)];
                k6uP80Z4Mv2[j + (396 - 395)] = tatGNM8lhr;
            };
        };
    }
    for (i = (394 - 394); i < num2 - (337 - 336); i = i + 1) {
        for (j = (31 - 31); j < num2 - i - (326 - 325); j = j + 1) {
            if (xnNzhEV[j] > xnNzhEV[j + (232 - 231)]) {
                tatGNM8lhr = xnNzhEV[j];
                xnNzhEV[j] = xnNzhEV[j + (918 - 917)];
                xnNzhEV[j + (380 - 379)] = tatGNM8lhr;
            };
        };
    };
}

void  combine () {
    int i;
    for (i = (881 - 881); i < fcdZP20; i = i + 1) {
        c[i] = k6uP80Z4Mv2[i];
    }
    for (i = (218 - 218); i < num2; i++) {
        c[i + fcdZP20] = xnNzhEV[i];
    };
}

void  put () {
    int i;
    for (i = (606 - 606); i < fcdZP20 + num2 - (388 - 387); i++) {
        printf ("%d ", c[i]);
    }
    printf ("%d", c[fcdZP20 + num2 - (870 - 869)]);
}

