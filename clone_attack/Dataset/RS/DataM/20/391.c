void  main () {
    char HSbsAg [(405 - 385)] [10] = {'\0'};
    char SNjocU [(82 - 62)] [(116 - 113)];
    int xreXQ14MNg9;
    int NNPniO;
    int UEC04UIyb;
    int lJU0e2Gf;
    xreXQ14MNg9 = (927 - 927);
    while (scanf ("%s%s", HSbsAg[xreXQ14MNg9], SNjocU[xreXQ14MNg9]) != EOF)
        xreXQ14MNg9 = xreXQ14MNg9 + 1;
    {
        xreXQ14MNg9 = 420 - 420;
        while (!('\0' == HSbsAg[xreXQ14MNg9][(937 - 937)])) {
            lJU0e2Gf = (935 - 935);
            UEC04UIyb = HSbsAg[xreXQ14MNg9][(292 - 292)];
            {
                NNPniO = 0;
                while (HSbsAg[xreXQ14MNg9][NNPniO] != '\0') {
                    if (HSbsAg[xreXQ14MNg9][NNPniO] > UEC04UIyb) {
                        UEC04UIyb = HSbsAg[xreXQ14MNg9][NNPniO];
                        lJU0e2Gf = NNPniO;
                    }
                    NNPniO = NNPniO +1;
                };
            }
            {
                NNPniO = 0;
                while (NNPniO <= lJU0e2Gf) {
                    printf ("%c", HSbsAg[xreXQ14MNg9][NNPniO]);
                    NNPniO = NNPniO +1;
                };
            }
            {
                NNPniO = 0;
                while (NNPniO < 3) {
                    printf ("%c", SNjocU[xreXQ14MNg9][NNPniO]);
                    NNPniO++;
                };
            }
            {
                NNPniO = lJU0e2Gf + 1;
                while (HSbsAg[xreXQ14MNg9][NNPniO] != '\0') {
                    printf ("%c", HSbsAg[xreXQ14MNg9][NNPniO]);
                    NNPniO++;
                };
            }
            xreXQ14MNg9++;
        };
    };
}

