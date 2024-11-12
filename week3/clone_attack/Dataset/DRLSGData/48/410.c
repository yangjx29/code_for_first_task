int main (int Ocwd1IQzgM, char *Pu02WxH3mIS []) {
    int xx5BZF9;
    int XZWy5J1ExpwK;
    int tbUzCkoY;
    int DuSAlp;
    int e6RJmPHuF;
    int HdjUZD [(1001 - 992)] [(622 - 613)];
    int yVtl7EQThMm8 [(356 - 347)] [(178 - 169)];
    int PfwVA1SXCzm;
    int RvseAfIHjmR1;
    int mADrz0px;
    scanf ("%d%d", &e6RJmPHuF, &PfwVA1SXCzm);
    {
        RvseAfIHjmR1 = 636 - 636;
        while (RvseAfIHjmR1 < (304 - 295)) {
            {
                DuSAlp = 895 - 895;
                while (DuSAlp < 9) {
                    yVtl7EQThMm8[RvseAfIHjmR1][DuSAlp] = (602 - 602);
                    HdjUZD[RvseAfIHjmR1][DuSAlp] = (134 - 134);
                    DuSAlp++;
                }
            }
            RvseAfIHjmR1++;
        }
    }
    yVtl7EQThMm8[(41 - 37)][(626 - 622)] = (653 - 652);
    for (tbUzCkoY = (495 - 495); PfwVA1SXCzm > tbUzCkoY; tbUzCkoY++) {
        {
            RvseAfIHjmR1 = 153 - 153;
            while (RvseAfIHjmR1 < 9) {
                {
                    DuSAlp = 609 - 609;
                    while (DuSAlp < 9) {
                        if ((178 - 178) < yVtl7EQThMm8[RvseAfIHjmR1][DuSAlp]) {
                            XZWy5J1ExpwK = yVtl7EQThMm8[RvseAfIHjmR1][DuSAlp];
                            {
                                xx5BZF9 = 442 - 441;
                                while (xx5BZF9 <= RvseAfIHjmR1 +(369 - 368)) {
                                    mADrz0px = DuSAlp -1;
                                    while (mADrz0px <= DuSAlp +1) {
                                        HdjUZD[xx5BZF9][mADrz0px] = HdjUZD[xx5BZF9][mADrz0px] + XZWy5J1ExpwK;
                                        mADrz0px++;
                                    }
                                    xx5BZF9++;
                                }
                            }
                            HdjUZD[RvseAfIHjmR1][DuSAlp] = HdjUZD[RvseAfIHjmR1][DuSAlp] + XZWy5J1ExpwK;
                        }
                        DuSAlp++;
                    }
                }
                RvseAfIHjmR1++;
            }
        }
        {
            RvseAfIHjmR1 = (1418 - 616) - 802;
            while (RvseAfIHjmR1 < 9) {
                {
                    DuSAlp = 493 - 493;
                    while (DuSAlp < 9) {
                        yVtl7EQThMm8[RvseAfIHjmR1][DuSAlp] = HdjUZD[RvseAfIHjmR1][DuSAlp];
                        HdjUZD[RvseAfIHjmR1][DuSAlp] = (581 - 581);
                        DuSAlp++;
                    }
                }
                RvseAfIHjmR1++;
            }
        }
    }
    for (RvseAfIHjmR1 = 0; RvseAfIHjmR1 < 9; RvseAfIHjmR1++) {
        for (DuSAlp = 0; DuSAlp < 9; DuSAlp++) {
            if (DuSAlp == 0)
                printf ("%d", yVtl7EQThMm8[RvseAfIHjmR1][DuSAlp] * e6RJmPHuF);
            else
                printf (" %d", yVtl7EQThMm8[RvseAfIHjmR1][DuSAlp] * e6RJmPHuF);
        }
        printf ("\n");
    }
    return 0;
}

