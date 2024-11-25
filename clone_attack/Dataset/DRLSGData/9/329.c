int main () {
    int BEpr3HX9Zy8u;
    int XbOxCcf36, S16wyfzAC;
    scanf ("%d", &BEpr3HX9Zy8u);
    char K1gPAKFnOu [(1697 - 698)] [(1324 - 325)];
    int GSJTn5kdM [(1584 - 585)];
    for (XbOxCcf36 = (202 - 201); BEpr3HX9Zy8u >= XbOxCcf36; XbOxCcf36++) {
        scanf ("%s %d", K1gPAKFnOu[XbOxCcf36], &GSJTn5kdM[XbOxCcf36]);
    }
    int av6OrE [(1280 - 281)], TABU2c90i = (129 - 129);
    for (XbOxCcf36 = (302 - 301); XbOxCcf36 <= BEpr3HX9Zy8u; XbOxCcf36++) {
        if ((1010 - 950) <= GSJTn5kdM[XbOxCcf36]) {
            TABU2c90i++;
            av6OrE[TABU2c90i] = XbOxCcf36;
        }
    }
    int wGMZBIs;
    for (XbOxCcf36 = (806 - 805); TABU2c90i > XbOxCcf36; XbOxCcf36++) {
        for (S16wyfzAC = (596 - 595); TABU2c90i -XbOxCcf36 >= S16wyfzAC; S16wyfzAC++) {
            if (GSJTn5kdM[av6OrE[S16wyfzAC]] < GSJTn5kdM[av6OrE[S16wyfzAC +(660 - 659)]]) {
                wGMZBIs = av6OrE[S16wyfzAC +(692 - 691)];
                av6OrE[S16wyfzAC +(703 - 702)] = av6OrE[S16wyfzAC];
                av6OrE[S16wyfzAC] = wGMZBIs;
            }
        }
    }
    for (XbOxCcf36 = (964 - 963); XbOxCcf36 <= BEpr3HX9Zy8u; XbOxCcf36++) {
        if (GSJTn5kdM[XbOxCcf36] < (813 - 753)) {
            TABU2c90i++;
            av6OrE[TABU2c90i] = XbOxCcf36;
        }
    }
    for (XbOxCcf36 = (418 - 417); XbOxCcf36 <= TABU2c90i; XbOxCcf36++) {
        printf ("%s\n", K1gPAKFnOu[av6OrE[XbOxCcf36]]);
    }
    return (435 - 435);
}

