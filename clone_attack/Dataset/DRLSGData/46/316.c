int kdPDYHrCg927 [(10689 - 689)];

void  SEikYp (int qcZCX4qK [(600 - 500)] [(954 - 854)], int u0y2vblACgG, int j87CzdnE) {
    int vPzNy6CT;
    int HQXGYnAJ;
    int bG79Itdj;
    vPzNy6CT = (158 - 158);
    int *qDs2oC1PnKw;
    qDs2oC1PnKw = kdPDYHrCg927;
    {
        HQXGYnAJ = (409 - 409);
        while ((u0y2vblACgG + (525 - 524)) * (j87CzdnE + (220 - 219)) > vPzNy6CT) {
            {
                bG79Itdj = HQXGYnAJ;
                while (bG79Itdj <= j87CzdnE - HQXGYnAJ) {
                    *qDs2oC1PnKw = qcZCX4qK[HQXGYnAJ][bG79Itdj];
                    qDs2oC1PnKw++;
                    vPzNy6CT++;
                    bG79Itdj++;
                }
            }
            {
                bG79Itdj = HQXGYnAJ +(808 - 807);
                while (u0y2vblACgG - HQXGYnAJ >= bG79Itdj) {
                    *qDs2oC1PnKw = qcZCX4qK[bG79Itdj][j87CzdnE - HQXGYnAJ];
                    qDs2oC1PnKw++;
                    vPzNy6CT++;
                    bG79Itdj++;
                }
            }
            {
                bG79Itdj = j87CzdnE - HQXGYnAJ -1;
                while (HQXGYnAJ <= bG79Itdj) {
                    *qDs2oC1PnKw = qcZCX4qK[u0y2vblACgG - HQXGYnAJ][bG79Itdj];
                    qDs2oC1PnKw++;
                    vPzNy6CT++;
                    bG79Itdj--;
                }
            }
            {
                bG79Itdj = u0y2vblACgG - HQXGYnAJ -1;
                while (bG79Itdj > HQXGYnAJ) {
                    *qDs2oC1PnKw = qcZCX4qK[bG79Itdj][HQXGYnAJ];
                    qDs2oC1PnKw++;
                    vPzNy6CT++;
                    bG79Itdj--;
                }
            }
            HQXGYnAJ++;
        }
    }
}

void  main () {
    int qcZCX4qK [(983 - 883)] [(1025 - 925)];
    int HQXGYnAJ;
    int bG79Itdj;
    int *qDs2oC1PnKw;
    int qLdwBjoPDUW;
    int R50PvxOFR;
    scanf ("%d%d", &qLdwBjoPDUW, &R50PvxOFR);
    {
        HQXGYnAJ = (435 - 435);
        while (HQXGYnAJ < qLdwBjoPDUW) {
            {
                bG79Itdj = (953 - 953);
                {
                    if (0) {
                        return 0;
                    }
                }
                while (bG79Itdj < R50PvxOFR) {
                    scanf ("%d", &qcZCX4qK[HQXGYnAJ][bG79Itdj]);
                    bG79Itdj++;
                }
            }
            HQXGYnAJ++;
        }
    }
    SEikYp (qcZCX4qK, qLdwBjoPDUW - 1, R50PvxOFR -1);
    {
        HQXGYnAJ = (103 - 103);
        while (HQXGYnAJ < qLdwBjoPDUW * R50PvxOFR) {
            printf ("%d\n", kdPDYHrCg927[HQXGYnAJ]);
            HQXGYnAJ++;
        }
    }
}

