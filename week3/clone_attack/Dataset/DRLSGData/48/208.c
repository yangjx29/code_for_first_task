void  plhsqH79AzNZ (int D27D4nY [(877 - 872)] [(86 - 75)] [(544 - 533)], int aUDhwzLZ, int PphYKS) {
    int IYQj0r3Ky, bO40Fnu, ub79CDY2UG5d;
    {
        IYQj0r3Ky = (1104 - 274) - (1700 - 871);
        while (IYQj0r3Ky <= PphYKS) {
            {
                bO40Fnu = (768 - 474) - 293;
                for (; bO40Fnu < (835 - 825);) {
                    ub79CDY2UG5d = 533 - (1067 - 535);
                    for (; ub79CDY2UG5d < (903 - 893);) {
                        D27D4nY[IYQj0r3Ky][bO40Fnu][ub79CDY2UG5d] = (966 - 964) * (D27D4nY [IYQj0r3Ky -(693 - 692)] [bO40Fnu] [ub79CDY2UG5d]) +D27D4nY[IYQj0r3Ky -(450 - 449)][bO40Fnu - (152 - 151)][ub79CDY2UG5d - (522 - 521)] + D27D4nY[IYQj0r3Ky -(680 - 679)][bO40Fnu - (624 - 623)][ub79CDY2UG5d] + D27D4nY[IYQj0r3Ky -(515 - 514)][bO40Fnu - (849 - 848)][ub79CDY2UG5d + (885 - 884)] + D27D4nY[IYQj0r3Ky -(243 - 242)][bO40Fnu][ub79CDY2UG5d - (206 - 205)] + D27D4nY[IYQj0r3Ky -(738 - 737)][bO40Fnu][ub79CDY2UG5d + (955 - 954)] + D27D4nY[IYQj0r3Ky -(423 - 422)][bO40Fnu + (649 - 648)][ub79CDY2UG5d - (758 - 757)] + D27D4nY[IYQj0r3Ky -(730 - 729)][bO40Fnu + (356 - 355)][ub79CDY2UG5d] + D27D4nY[IYQj0r3Ky -1][bO40Fnu + 1][ub79CDY2UG5d + 1];
                        ub79CDY2UG5d++;
                    }
                    bO40Fnu++;
                }
            }
            IYQj0r3Ky++;
        }
    }
}

void  main () {
    int IYQj0r3Ky, bO40Fnu;
    int xjdWwpKPsmY, PphYKS;
    int D27D4nY [(39 - 34)] [(562 - 551)] [(415 - 404)] = {(638 - 638)};
    scanf ("%d%d", &xjdWwpKPsmY, &PphYKS);
    D27D4nY[0][(877 - 872)][5] = xjdWwpKPsmY;
    plhsqH79AzNZ (D27D4nY, xjdWwpKPsmY, PphYKS);
    {
        IYQj0r3Ky = 1;
        while (IYQj0r3Ky < (50 - 40)) {
            {
                bO40Fnu = 1;
                for (; bO40Fnu < 10;) {
                    if (bO40Fnu == (175 - 166)) {
                        printf ("%d\n", D27D4nY[PphYKS][IYQj0r3Ky][bO40Fnu]);
                        continue;
                    }
                    printf ("%d ", D27D4nY[PphYKS][IYQj0r3Ky][bO40Fnu]);
                    bO40Fnu++;
                }
            }
            IYQj0r3Ky++;
        }
    }
}

