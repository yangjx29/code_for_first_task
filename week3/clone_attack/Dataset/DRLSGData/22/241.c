int main () {
    int lI5H8B4;
    int GGN08iy7Z;
    int bDpx7E;
    int BH4D5oQxCew [300];
    int FvXWsYoy1r;
    char IiBksbSKz;
    int onCN9P;
    int dz8opiGx;
    for (bDpx7E = 0; bDpx7E < 300; bDpx7E++) {
        IiBksbSKz = getchar ();
        if (IiBksbSKz == '\n')
            break;
        scanf ("%d", &BH4D5oQxCew[bDpx7E]);
    }
    onCN9P = 0;
    FvXWsYoy1r = 0;
    if (bDpx7E == 0)
        ;
    else {
        for (lI5H8B4 = 0; lI5H8B4 < bDpx7E; lI5H8B4++) {
            if (BH4D5oQxCew[lI5H8B4] == BH4D5oQxCew[lI5H8B4 + 1])
                onCN9P++;
        }
        if (onCN9P == bDpx7E)
            ;
        else {
            for (lI5H8B4 = 1; lI5H8B4 <= bDpx7E; lI5H8B4++) {
                for (dz8opiGx = 0; dz8opiGx <= bDpx7E - lI5H8B4; dz8opiGx++) {
                    if (BH4D5oQxCew[dz8opiGx] < BH4D5oQxCew[dz8opiGx + 1]) {
                        GGN08iy7Z = BH4D5oQxCew[dz8opiGx];
                        BH4D5oQxCew[dz8opiGx] = BH4D5oQxCew[dz8opiGx + 1];
                        BH4D5oQxCew[dz8opiGx + 1] = GGN08iy7Z;
                    }
                }
            }
            for (lI5H8B4 = 0; lI5H8B4 <= bDpx7E; lI5H8B4++) {
                if (BH4D5oQxCew[lI5H8B4] > BH4D5oQxCew[lI5H8B4 + 1]) {
                    FvXWsYoy1r = 1;
                    printf ("%d", BH4D5oQxCew[lI5H8B4 + 1]);
                    break;
                }
            }
            if (FvXWsYoy1r == 0) {
            }
        }
    }
}

