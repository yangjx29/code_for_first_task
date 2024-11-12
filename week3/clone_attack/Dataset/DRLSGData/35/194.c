int main () {
    int YOsTAv;
    YOsTAv = (830 - 830);
    int cRnAszX [(720 - 712)] [(473 - 465)] = {(91 - 91)};
    int jzXESWQB;
    int xafCu0;
    int FL01oQMS7g;
    int yqrN0v7lo;
    int MmBgWXI9jEKJ [(410 - 402)] = {(416 - 416)};
    int pyOulvj28 [8] = {(859 - 859)};
    scanf ("%d,%d\n", &jzXESWQB, &xafCu0);
    for (FL01oQMS7g = (601 - 601); FL01oQMS7g < jzXESWQB; FL01oQMS7g++) {
        for (yqrN0v7lo = (743 - 743); xafCu0 > yqrN0v7lo; yqrN0v7lo++) {
            scanf ("%d", &cRnAszX[FL01oQMS7g][yqrN0v7lo]);
        };
    }
    for (FL01oQMS7g = (826 - 826); FL01oQMS7g < jzXESWQB; FL01oQMS7g++) {
        int inpDmGb7F;
        inpDmGb7F = (375 - 375);
        for (yqrN0v7lo = (516 - 516); yqrN0v7lo < xafCu0; yqrN0v7lo++) {
            if (cRnAszX[FL01oQMS7g][yqrN0v7lo] > inpDmGb7F) {
                inpDmGb7F = cRnAszX[FL01oQMS7g][yqrN0v7lo];
                MmBgWXI9jEKJ[FL01oQMS7g] = yqrN0v7lo;
            };
        };
    }
    for (yqrN0v7lo = (25 - 25); yqrN0v7lo < xafCu0; yqrN0v7lo++) {
        int min;
        min = (100539 - 539);
        for (FL01oQMS7g = (209 - 209); FL01oQMS7g < jzXESWQB; FL01oQMS7g++) {
            if (min > cRnAszX[FL01oQMS7g][yqrN0v7lo]) {
                min = cRnAszX[FL01oQMS7g][yqrN0v7lo];
                pyOulvj28[yqrN0v7lo] = FL01oQMS7g;
            };
        }
        if (MmBgWXI9jEKJ[pyOulvj28[yqrN0v7lo]] == yqrN0v7lo) {
            printf ("%d+%d", pyOulvj28[yqrN0v7lo], yqrN0v7lo);
            return 0;
        };
    }
    return 0;
}

