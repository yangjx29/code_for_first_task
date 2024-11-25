int vPeQK1 (int (*lzoR9CST6N) [(488 - 483)], int jdvkiEnbK2, int xjneJTv) {
    int aMkdV2ZgG;
    int PEgeJbaLkTU;
    int ACTYM2;
    if (xjneJTv < (459 - 459) || xjneJTv > (238 - 234) || jdvkiEnbK2 < 0 || jdvkiEnbK2 > (801 - 797))
        aMkdV2ZgG = 0;
    else {
        {
            PEgeJbaLkTU = 0;
            while (PEgeJbaLkTU < (1002 - 997)) {
                ACTYM2 = *(*(lzoR9CST6N + xjneJTv) + PEgeJbaLkTU);
                *(*(lzoR9CST6N + xjneJTv) + PEgeJbaLkTU) = *(*(lzoR9CST6N + jdvkiEnbK2) + PEgeJbaLkTU);
                *(*(lzoR9CST6N + jdvkiEnbK2) + PEgeJbaLkTU) = ACTYM2;
                PEgeJbaLkTU++;
            }
        }
        aMkdV2ZgG = 1;
    }
    return aMkdV2ZgG;
}

int main () {
    int lzoR9CST6N [(749 - 744)] [(522 - 517)];
    int PEgeJbaLkTU;
    int mtYGvoaL;
    int jdvkiEnbK2;
    int xjneJTv;
    int aMkdV2ZgG;
    em4I3bh = lzoR9CST6N;
    {
        PEgeJbaLkTU = 0;
        while (PEgeJbaLkTU < (697 - 692)) {
            {
                mtYGvoaL = 0;
                while (mtYGvoaL < 5) {
                    scanf ("%d", lzoR9CST6N[PEgeJbaLkTU] + mtYGvoaL);
                    mtYGvoaL++;
                }
            }
            PEgeJbaLkTU++;
        }
    }
    scanf ("%d %d", &jdvkiEnbK2, &xjneJTv);
    aMkdV2ZgG = vPeQK1 (em4I3bh, jdvkiEnbK2, xjneJTv);
    if (aMkdV2ZgG) {
        PEgeJbaLkTU = 0;
        while (PEgeJbaLkTU < 5) {
            printf ("%d", lzoR9CST6N[PEgeJbaLkTU][0]);
            {
                mtYGvoaL = 1;
                while (mtYGvoaL < 5) {
                    printf (" %d", lzoR9CST6N[PEgeJbaLkTU][mtYGvoaL]);
                    mtYGvoaL++;
                }
            }
            PEgeJbaLkTU++;
        }
    }
    else
        ;
    return 0;
}

