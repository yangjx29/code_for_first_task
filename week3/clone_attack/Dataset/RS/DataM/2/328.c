struct   x {
    int num;
    char author [26];
    int BobxAtBIW;
};
void  main () {
    struct   x ryCASa [999];
    int OMhcnDuSB9NA;
    int max_;
    int c6PXdZ9;
    int C9tSwhPMIzA;
    int d3xZn5o;
    OMhcnDuSB9NA = 0;
    max_ = 0;
    int hKjXm0l;
    int BobxAtBIW [91] = {0};
    scanf ("%d", &d3xZn5o);
    for (c6PXdZ9 = 0; d3xZn5o > c6PXdZ9; c6PXdZ9 = c6PXdZ9 + 1) {
        scanf ("%d %s", &ryCASa[c6PXdZ9].num, ryCASa[c6PXdZ9].author);
        ryCASa[c6PXdZ9].BobxAtBIW = strlen (ryCASa[c6PXdZ9].author);
    }
    for (c6PXdZ9 = 0; d3xZn5o > c6PXdZ9; c6PXdZ9++) {
        for (C9tSwhPMIzA = 0; ryCASa[c6PXdZ9].BobxAtBIW > C9tSwhPMIzA; C9tSwhPMIzA++) {
            for (hKjXm0l = 'A'; hKjXm0l < 'Z'; hKjXm0l++) {
                if (hKjXm0l = ryCASa[c6PXdZ9].author[C9tSwhPMIzA]) {
                    BobxAtBIW[hKjXm0l]++;
                    break;
                };
            };
        };
    }
    {
        c6PXdZ9 = 'A';
        while ('Z' > c6PXdZ9) {
            if (OMhcnDuSB9NA < BobxAtBIW[c6PXdZ9]) {
                OMhcnDuSB9NA = BobxAtBIW[c6PXdZ9];
                max_ = c6PXdZ9;
            }
            c6PXdZ9 = c6PXdZ9 + 1;
        };
    }
    printf ("%c\n", max_);
    printf ("%d\n", OMhcnDuSB9NA);
    {
        c6PXdZ9 = 0;
        while (c6PXdZ9 < d3xZn5o) {
            {
                C9tSwhPMIzA = 0;
                while (ryCASa[c6PXdZ9].BobxAtBIW > C9tSwhPMIzA) {
                    if (ryCASa[c6PXdZ9].author[C9tSwhPMIzA] == max_) {
                        printf ("%d\n", ryCASa[c6PXdZ9].num);
                    }
                    C9tSwhPMIzA = C9tSwhPMIzA +1;
                };
            }
            c6PXdZ9 = c6PXdZ9 + 1;
        };
    };
}

