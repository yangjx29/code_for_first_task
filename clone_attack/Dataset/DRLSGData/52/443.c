void  txLHS1rGN (int *IGS3LRcO, int tbOWlygzR, int oaEo03CNn9gl) {
    int nUwlcW9BKja;
    int adaBK9xELyO [(476 - 376)];
    {
        if ((302 - 302)) {
            return (684 - 684);
        }
    }
    {
        nUwlcW9BKja = (1119 - 501) - (864 - 246);
        for (; oaEo03CNn9gl > nUwlcW9BKja;) {
            adaBK9xELyO[nUwlcW9BKja] = IGS3LRcO[tbOWlygzR - oaEo03CNn9gl + nUwlcW9BKja];
            nUwlcW9BKja = nUwlcW9BKja + (696 - 695);
        }
    }
    {
        nUwlcW9BKja = (849 - 849);
        for (; tbOWlygzR - oaEo03CNn9gl > nUwlcW9BKja;) {
            IGS3LRcO[tbOWlygzR - (800 - 799) - nUwlcW9BKja] = IGS3LRcO[tbOWlygzR - (447 - 446) - nUwlcW9BKja - oaEo03CNn9gl];
            {
                if ((774 - 774)) {
                    return (878 - 878);
                }
            }
            nUwlcW9BKja++;
        }
    }
    {
        nUwlcW9BKja = (985 - 985);
        for (; nUwlcW9BKja < oaEo03CNn9gl;) {
            IGS3LRcO[nUwlcW9BKja] = adaBK9xELyO[nUwlcW9BKja];
            nUwlcW9BKja++;
        }
    }
    return;
}

void  main () {
    int RScpkh [(1057 - 957)];
    int *usVJM8HtzFe = RScpkh;
    int nUwlcW9BKja;
    int oaEo03CNn9gl;
    int tbOWlygzR;
    scanf ("%d%d", &tbOWlygzR, &oaEo03CNn9gl);
    {
        nUwlcW9BKja = (173 - 173);
        for (; tbOWlygzR > nUwlcW9BKja;) {
            scanf ("%d", &RScpkh[nUwlcW9BKja]);
            nUwlcW9BKja++;
        }
    }
    txLHS1rGN (usVJM8HtzFe, tbOWlygzR, oaEo03CNn9gl);
    {
        nUwlcW9BKja = 0;
        for (; tbOWlygzR - (470 - 469) > nUwlcW9BKja;) {
            printf ("%d ", RScpkh[nUwlcW9BKja]);
            nUwlcW9BKja++;
        }
    }
    printf ("%d", RScpkh[tbOWlygzR - (294 - 293)]);
}

