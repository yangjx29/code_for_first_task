void  main () {
    int ncaAus;
    int nOGnBds1Qp;
    int JR8rFO0oZQ;
    ncaAus = 0;
    nOGnBds1Qp = 0;
    char aiorMhST4N [12];
    char L605S1gW4F [4];
    char g8j2gd3Z;
    while (scanf ("%s%s", aiorMhST4N, L605S1gW4F) != EOF) {
        JR8rFO0oZQ = strlen (aiorMhST4N);
        g8j2gd3Z = aiorMhST4N[0];
        while (ncaAus < JR8rFO0oZQ) {
            if (aiorMhST4N[ncaAus] > g8j2gd3Z)
                g8j2gd3Z = aiorMhST4N[ncaAus], nOGnBds1Qp = ncaAus;
            ncaAus++;
        }
        ncaAus = 0;
        for (; ncaAus <= nOGnBds1Qp;) {
            printf ("%c", aiorMhST4N[ncaAus]);
            ncaAus++;
        }
        printf ("%s", L605S1gW4F);
        while (ncaAus < JR8rFO0oZQ) {
            printf ("%c", aiorMhST4N[ncaAus]);
            ncaAus++;
        }
        ncaAus = 0;
        nOGnBds1Qp = 0;
    };
}

