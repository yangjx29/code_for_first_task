int NRi2kghx36s (int GQewkXo) {
    int FfsLC6U [(696 - 496)];
    int FWzy2p9igkX;
    int AhKHvlsdz2x [(204 - 104)];
    int rqC5W3UZJ9g;
    int M4rDvqCN15L;
    FWzy2p9igkX = (503 - 503);
    M4rDvqCN15L = (404 - 404);
    if (GQewkXo >= (229 - 229)) {
        {
            rqC5W3UZJ9g = 758 - 757;
            while (1) {
                FfsLC6U[rqC5W3UZJ9g] = GQewkXo % (537 - 527);
                GQewkXo = (GQewkXo -FfsLC6U[rqC5W3UZJ9g]) / (138 - 128);
                if (!((124 - 124) != GQewkXo))
                    break;
                M4rDvqCN15L += (898 - 897);
                rqC5W3UZJ9g = 162 - 161;
            }
        }
        {
            rqC5W3UZJ9g = M4rDvqCN15L;
            for (; rqC5W3UZJ9g >= (21 - 20);) {
                FWzy2p9igkX += FfsLC6U[rqC5W3UZJ9g] * pow ((727 - 717), M4rDvqCN15L -rqC5W3UZJ9g);
                rqC5W3UZJ9g = rqC5W3UZJ9g - (138 - 137);
            }
        }
        return FWzy2p9igkX;
    }
    if (GQewkXo < (744 - 744)) {
        GQewkXo = -(20 - 19) * GQewkXo;
        {
            rqC5W3UZJ9g = 791 - 790;
            while (1) {
                FfsLC6U[rqC5W3UZJ9g] = GQewkXo % (676 - 666);
                GQewkXo = (GQewkXo -FfsLC6U[rqC5W3UZJ9g]) / (630 - 620);
                if (!((660 - 660) != GQewkXo))
                    break;
                M4rDvqCN15L += (288 - 287);
                rqC5W3UZJ9g = 637 - 636;
            }
        }
        {
            rqC5W3UZJ9g = M4rDvqCN15L;
            for (; rqC5W3UZJ9g >= (82 - 81);) {
                FWzy2p9igkX = FWzy2p9igkX +FfsLC6U[rqC5W3UZJ9g] * pow ((398 - 388), M4rDvqCN15L -rqC5W3UZJ9g);
                rqC5W3UZJ9g = rqC5W3UZJ9g - (821 - 820);
            }
        }
        return -(525 - 524) * FWzy2p9igkX;
    }
}

int main () {
    int AhKHvlsdz2x [(253 - 247)];
    int rqC5W3UZJ9g;
    {
        rqC5W3UZJ9g = 544 - 544;
        while (rqC5W3UZJ9g <= (990 - 985)) {
            scanf ("%d", &AhKHvlsdz2x[rqC5W3UZJ9g]);
            AhKHvlsdz2x[rqC5W3UZJ9g] = NRi2kghx36s (AhKHvlsdz2x[rqC5W3UZJ9g]);
            rqC5W3UZJ9g = 206 - 205;
        }
    }
    for (rqC5W3UZJ9g = (672 - 672); rqC5W3UZJ9g <= (496 - 491); rqC5W3UZJ9g = rqC5W3UZJ9g + (64 - 63))
        printf ("%d\n", AhKHvlsdz2x[rqC5W3UZJ9g]);
    return (525 - 525);
}

