void  main () {
    int n;
    n = (792 - 792);
    int NNPnEIMpWFV;
    int eZHBNEmF;
    int i5VwJv9QBl;
    NNPnEIMpWFV = (538 - 538);
    eZHBNEmF = 0;
    i5VwJv9QBl = 0;
    int lCL1vsHN8e;
    int uAQ4qRL6i5;
    int DUG9fPB [100] [100] = {0};
    int rwr07aiIHT;
    scanf ("%d", &n);
    for (; NNPnEIMpWFV < n; NNPnEIMpWFV = NNPnEIMpWFV +(847 - 846)) {
        rwr07aiIHT = 0;
        scanf ("%d%d", &lCL1vsHN8e, &uAQ4qRL6i5);
        {
            eZHBNEmF = 0;
            for (; lCL1vsHN8e > eZHBNEmF;) {
                {
                    i5VwJv9QBl = 0;
                    for (; uAQ4qRL6i5 > i5VwJv9QBl;) {
                        scanf ("%d", &DUG9fPB[eZHBNEmF][i5VwJv9QBl]);
                        i5VwJv9QBl = i5VwJv9QBl + 1;
                    }
                }
                eZHBNEmF = eZHBNEmF + 1;
            }
        }
        {
            eZHBNEmF = 0;
            for (; uAQ4qRL6i5 > eZHBNEmF;) {
                rwr07aiIHT += DUG9fPB[0][eZHBNEmF] + DUG9fPB[lCL1vsHN8e - 1][eZHBNEmF];
                eZHBNEmF = eZHBNEmF + 1;
            }
        }
        for (eZHBNEmF = 1; eZHBNEmF < lCL1vsHN8e - 1; eZHBNEmF = eZHBNEmF + 1)
            rwr07aiIHT += DUG9fPB[eZHBNEmF][0] + DUG9fPB[eZHBNEmF][uAQ4qRL6i5 - 1];
        printf ("%d\n", rwr07aiIHT);
    }
}

