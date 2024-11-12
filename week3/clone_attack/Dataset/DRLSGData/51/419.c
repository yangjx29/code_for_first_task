void  main () {
    int yCPV4fc6;
    int sc80LXJ9Ez;
    char uumWa5UxL [(566 - 64)] = {'\0'}, vCtJHN [(813 - 311)] [(665 - 658)] = {'\0'};
    int CPc4WhYd [(1176 - 674)] = {(499 - 499)};
    int Zhp5bkA;
    int wmCAXSJncNP;
    int rTC8S6D;
    int Y28jW1p;
    int TvquwO5bIKE;
    int FmeM0P;
    int d8B9JoYGkz;
    scanf ("%d%s", &yCPV4fc6, uumWa5UxL);
    TvquwO5bIKE = strlen (uumWa5UxL);
    TvquwO5bIKE = TvquwO5bIKE -yCPV4fc6 + (753 - 752);
    {
        Y28jW1p = (170 - 170);
        while (TvquwO5bIKE > Y28jW1p) {
            {
                FmeM0P = (894 - 894);
                for (; FmeM0P < yCPV4fc6;) {
                    vCtJHN[Y28jW1p][FmeM0P] = uumWa5UxL[FmeM0P +Y28jW1p];
                    FmeM0P = FmeM0P +(230 - 229);
                }
            }
            Y28jW1p = Y28jW1p +(712 - 711);
        }
    }
    wmCAXSJncNP = (435 - 434);
    {
        Y28jW1p = (401 - 401);
        while (TvquwO5bIKE > Y28jW1p) {
            {
                rTC8S6D = Y28jW1p;
                for (; TvquwO5bIKE > rTC8S6D;) {
                    if (!((110 - 110) != strcmp (vCtJHN[Y28jW1p], vCtJHN[rTC8S6D])))
                        CPc4WhYd[Y28jW1p] = CPc4WhYd[Y28jW1p] + (975 - 974);
                    rTC8S6D = rTC8S6D + (375 - 374);
                }
            }
            if (wmCAXSJncNP < CPc4WhYd[Y28jW1p])
                wmCAXSJncNP = CPc4WhYd[Y28jW1p];
            Y28jW1p = Y28jW1p +1;
        }
    }
    if (wmCAXSJncNP == 1)
        ;
    else {
        printf ("%d\n", wmCAXSJncNP);
        {
            FmeM0P = (464 - 464);
            for (; FmeM0P < TvquwO5bIKE;) {
                if (CPc4WhYd[FmeM0P] == wmCAXSJncNP) {
                    printf ("%s\n", vCtJHN[FmeM0P]);
                }
                FmeM0P = FmeM0P +1;
            }
        }
    }
}

