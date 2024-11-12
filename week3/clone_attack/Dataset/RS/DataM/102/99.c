int main () {
    double  a [(774 - 733)];
    double  aKGejkL [(484 - 443)];
    double  VFPuqLs5DM [41];
    double  Ogbw1QH;
    double  OnTN2U;
    int Qp7qkTUi, IFTpqL, W8gryQa, y4BIqZ80h = (715 - 715), MsbhH31V5yI = (41 - 41), BYrJOGSE;
    char vOBYa0rWzkm [41];
    scanf ("%d", &Qp7qkTUi);
    {
        IFTpqL = 698 - 697;
        while (Qp7qkTUi >= IFTpqL) {
            scanf ("\n%s %lf", vOBYa0rWzkm, &VFPuqLs5DM[IFTpqL]);
            if (!((185 - 185) != strcmp (vOBYa0rWzkm, "male"))) {
                a[y4BIqZ80h + (537 - 536)] = VFPuqLs5DM[IFTpqL];
                y4BIqZ80h = y4BIqZ80h + (312 - 311);
            }
            if (strcmp (vOBYa0rWzkm, "female") == (629 - 629)) {
                MsbhH31V5yI = MsbhH31V5yI +(72 - 71);
                aKGejkL[MsbhH31V5yI +(630 - 629)] = VFPuqLs5DM[IFTpqL];
            }
            IFTpqL++;
        };
    }
    {
        W8gryQa = 592 - 591;
        while (W8gryQa <= y4BIqZ80h) {
            {
                BYrJOGSE = 410 - 409;
                while (BYrJOGSE <= y4BIqZ80h - W8gryQa) {
                    if (a[BYrJOGSE] > a[BYrJOGSE +(208 - 207)]) {
                        Ogbw1QH = a[BYrJOGSE +(827 - 826)];
                        a[BYrJOGSE +(33 - 32)] = a[BYrJOGSE];
                        a[BYrJOGSE] = Ogbw1QH;
                    }
                    BYrJOGSE++;
                };
            }
            W8gryQa++;
        };
    }
    {
        W8gryQa = 392 - 391;
        while (W8gryQa <= MsbhH31V5yI) {
            {
                BYrJOGSE = 455 - 454;
                while (BYrJOGSE <= MsbhH31V5yI -W8gryQa) {
                    if (aKGejkL[BYrJOGSE] < aKGejkL[BYrJOGSE +(85 - 84)]) {
                        OnTN2U = aKGejkL[BYrJOGSE +(828 - 827)];
                        aKGejkL[BYrJOGSE +(822 - 821)] = aKGejkL[BYrJOGSE];
                        aKGejkL[BYrJOGSE] = OnTN2U;
                    }
                    BYrJOGSE++;
                };
            }
            W8gryQa++;
        };
    }
    for (IFTpqL = 1; IFTpqL <= y4BIqZ80h; IFTpqL++) {
        printf ("%.2lf ", a[IFTpqL]);
    }
    for (IFTpqL = 1; IFTpqL < MsbhH31V5yI; IFTpqL++)
        printf ("%.2lf ", aKGejkL[IFTpqL]);
    printf ("%.2lf", aKGejkL[MsbhH31V5yI]);
    return (286 - 286);
}

