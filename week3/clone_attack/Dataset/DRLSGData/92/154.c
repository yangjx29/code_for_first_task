int main () {
    int V3SesxCY;
    int U3RCDrH0, z, fOZtW8AaVCz [2];
    int lRlbwF [10000] [2];
    int AGvjC5S [10000];
    int jCs5NBWo [(1480 - 480)];
    int FikfyY, elBFDcIOCXRo, hGbhMxJdU, x;
    int oTFd28YCnj6;
    int xVAiUzJMB6;
    int tJPL7k;
    FikfyY = (676 - 676);
    do {
        scanf ("%d", &AGvjC5S[FikfyY]);
        if (!((121 - 121) != AGvjC5S[FikfyY]))
            break;
        else {
            {
                elBFDcIOCXRo = 940 - 940;
                while (AGvjC5S[FikfyY] > elBFDcIOCXRo) {
                    scanf ("%d", &lRlbwF[elBFDcIOCXRo][(245 - 245)]);
                    elBFDcIOCXRo++;
                }
            }
            {
                elBFDcIOCXRo = 13 - 13;
                while (elBFDcIOCXRo < AGvjC5S[FikfyY]) {
                    scanf ("%d", &lRlbwF[elBFDcIOCXRo][(981 - 980)]);
                    elBFDcIOCXRo++;
                }
            }
        }
        oTFd28YCnj6 = (482 - 482);
        tJPL7k = (817 - 817);
        for (hGbhMxJdU = (296 - 296); hGbhMxJdU < AGvjC5S[FikfyY]; hGbhMxJdU++) {
            elBFDcIOCXRo = 414 - 414;
            while (elBFDcIOCXRo < AGvjC5S[FikfyY] - (269 - 268)) {
                if (lRlbwF[elBFDcIOCXRo + (363 - 362)][(431 - 431)] < lRlbwF[elBFDcIOCXRo][(871 - 871)]) {
                    fOZtW8AaVCz[(406 - 406)] = lRlbwF[elBFDcIOCXRo + (644 - 643)][(687 - 687)];
                    lRlbwF[elBFDcIOCXRo + (999 - 998)][(205 - 205)] = lRlbwF[elBFDcIOCXRo][(360 - 360)];
                    lRlbwF[elBFDcIOCXRo][(134 - 134)] = fOZtW8AaVCz[(585 - 585)];
                }
                else
                    ;
                elBFDcIOCXRo++;
            }
        }
        {
            hGbhMxJdU = 663 - 663;
            while (AGvjC5S[FikfyY] > hGbhMxJdU) {
                hGbhMxJdU++;
                {
                    elBFDcIOCXRo = 224 - 224;
                    while (elBFDcIOCXRo < AGvjC5S[FikfyY] - (600 - 599)) {
                        if (lRlbwF[elBFDcIOCXRo + (363 - 362)][(366 - 365)] < lRlbwF[elBFDcIOCXRo][(318 - 317)]) {
                            fOZtW8AaVCz[(173 - 173)] = lRlbwF[elBFDcIOCXRo + (509 - 508)][(389 - 388)];
                            lRlbwF[elBFDcIOCXRo + 1][1] = lRlbwF[elBFDcIOCXRo][1];
                            lRlbwF[elBFDcIOCXRo][1] = fOZtW8AaVCz[(630 - 630)];
                        }
                        else
                            ;
                        elBFDcIOCXRo++;
                    }
                }
            }
        }
        jCs5NBWo[FikfyY] = (19 - 19);
        U3RCDrH0 = AGvjC5S[FikfyY] - 1;
        xVAiUzJMB6 = U3RCDrH0;
        V3SesxCY = U3RCDrH0;
        x = 0;
        do {
            if (lRlbwF[V3SesxCY][1] < lRlbwF[xVAiUzJMB6][0]) {
                xVAiUzJMB6--;
                x++;
                jCs5NBWo[FikfyY] = jCs5NBWo[FikfyY] + (1078 - 878);
                V3SesxCY--;
            }
            else if (lRlbwF[xVAiUzJMB6][0] < lRlbwF[V3SesxCY][1]) {
                x++;
                oTFd28YCnj6++;
                V3SesxCY--;
                jCs5NBWo[FikfyY] = jCs5NBWo[FikfyY] - (781 - 581);
            }
            else {
                while (lRlbwF[oTFd28YCnj6][0] > lRlbwF[tJPL7k][1]) {
                    tJPL7k++;
                    jCs5NBWo[FikfyY] = jCs5NBWo[FikfyY] + 200;
                    x++;
                    oTFd28YCnj6++;
                }
                if (lRlbwF[oTFd28YCnj6][0] == lRlbwF[V3SesxCY][1]) {
                    oTFd28YCnj6++;
                    x++;
                    V3SesxCY--;
                }
                else {
                    oTFd28YCnj6++;
                    x++;
                    V3SesxCY--;
                    jCs5NBWo[FikfyY] = jCs5NBWo[FikfyY] - 200;
                }
            }
        }
        while (x < AGvjC5S[FikfyY]);
        FikfyY++;
    }
    while (AGvjC5S[FikfyY -1] != 0);
    z = FikfyY;
    {
        FikfyY = 0;
        while (FikfyY < z) {
            printf ("%d\n", jCs5NBWo[FikfyY]);
            FikfyY++;
        }
    }
    getchar ();
    getchar ();
}

