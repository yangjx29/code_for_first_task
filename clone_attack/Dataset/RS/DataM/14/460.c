struct   student {
    int ds3Ncj;
    int WtbawS;
}
cxyNUTsf0 [100000];

int main () {
    int tempSum;
    int geW3gYZB;
    int bmzqEJ3;
    int qtL7UDZhHn;
    int G5gz0LPJyW1;
    int r36xCKLouO;
    int SBMS4ZuO6YI;
    int bs2LDwHevplJ;
    int pEo9qNQL0rD;
    int bVwYa23if [3] = {(256 - 256)};
    scanf ("%d", &geW3gYZB);
    {
        bmzqEJ3 = 0;
        while (bmzqEJ3 < geW3gYZB) {
            scanf ("%d", &cxyNUTsf0[bmzqEJ3].ds3Ncj);
            cxyNUTsf0[bmzqEJ3].WtbawS = 0;
            tempSum = 0;
            {
                qtL7UDZhHn = 0;
                while (qtL7UDZhHn < 2) {
                    qtL7UDZhHn++;
                    scanf ("%d", &tempSum);
                    cxyNUTsf0[bmzqEJ3].WtbawS += tempSum;
                };
            }
            bmzqEJ3++;
        };
    }
    {
        SBMS4ZuO6YI = 0;
        while (SBMS4ZuO6YI < 3) {
            pEo9qNQL0rD = 0;
            {
                r36xCKLouO = SBMS4ZuO6YI;
                while (r36xCKLouO < geW3gYZB) {
                    if (cxyNUTsf0[r36xCKLouO].WtbawS > pEo9qNQL0rD) {
                        pEo9qNQL0rD = cxyNUTsf0[r36xCKLouO].WtbawS;
                        bVwYa23if[SBMS4ZuO6YI] = r36xCKLouO;
                    }
                    r36xCKLouO++;
                };
            }
            G5gz0LPJyW1 = cxyNUTsf0[SBMS4ZuO6YI].ds3Ncj;
            cxyNUTsf0[SBMS4ZuO6YI].ds3Ncj = cxyNUTsf0[bVwYa23if[SBMS4ZuO6YI]].ds3Ncj;
            cxyNUTsf0[bVwYa23if[SBMS4ZuO6YI]].ds3Ncj = G5gz0LPJyW1;
            G5gz0LPJyW1 = cxyNUTsf0[SBMS4ZuO6YI].WtbawS;
            cxyNUTsf0[SBMS4ZuO6YI].WtbawS = cxyNUTsf0[bVwYa23if[SBMS4ZuO6YI]].WtbawS;
            cxyNUTsf0[bVwYa23if[SBMS4ZuO6YI]].WtbawS = G5gz0LPJyW1;
            SBMS4ZuO6YI++;
        };
    }
    {
        r36xCKLouO = 0;
        while (r36xCKLouO < 3) {
            printf ("%d %d\n", cxyNUTsf0[r36xCKLouO].ds3Ncj, cxyNUTsf0[r36xCKLouO].WtbawS);
            r36xCKLouO++;
        };
    }
    return 0;
}

