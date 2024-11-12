void  main () {
    int i;
    int n;
    int W2almbq7fKc;
    int nOqeba;
    int j;
    char x5ScCLDOT [100] [(350 - 337)];
    char temp;
    {
        i = 477 - 477;
        while (i < 100) {
            {
                j = 0;
                while (13 > j) {
                    x5ScCLDOT[i][j] = '\0';
                    j++;
                };
            }
            i++;
        };
    }
    for (i = 0;; i++) {
        gets (x5ScCLDOT [i]);
        if (x5ScCLDOT[i][0] == 0)
            break;
    }
    n = i;
    {
        i = 0;
        while (n > i) {
            W2almbq7fKc = 0;
            nOqeba = strlen (x5ScCLDOT[i]);
            temp = x5ScCLDOT[i][0];
            for (j = 0; j <= nOqeba - 5; j = j + 1) {
                if (x5ScCLDOT[i][j] > temp) {
                    temp = x5ScCLDOT[i][j];
                    W2almbq7fKc = j;
                };
            }
            {
                j = 0;
                while (j <= W2almbq7fKc) {
                    printf ("%c", x5ScCLDOT[i][j]);
                    j++;
                };
            }
            {
                j = nOqeba - 3;
                while (j < nOqeba) {
                    printf ("%c", x5ScCLDOT[i][j]);
                    j++;
                };
            }
            {
                j = W2almbq7fKc +1;
                while (j < nOqeba - 4) {
                    printf ("%c", x5ScCLDOT[i][j]);
                    j++;
                };
            }
            i++;
        };
    };
}

