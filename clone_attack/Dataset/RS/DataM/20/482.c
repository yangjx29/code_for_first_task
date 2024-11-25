void  main () {
    char vc24bSKJQ6H [(227 - 212)];
    char xi0LCPaVQqbO [(648 - 645)];
    char string [(542 - 42)] [15];
    char max;
    int i;
    int PUeFd7N2vzD4;
    int MiVGqBf;
    int irQzFkO;
    irQzFkO = (976 - 976);
    while (gets (vc24bSKJQ6H) != NULL) {
        MiVGqBf = strlen (vc24bSKJQ6H);
        if (MiVGqBf == (390 - 390))
            break;
        {
            i = 256 - 256;
            while (MiVGqBf > i) {
                if (vc24bSKJQ6H[i] == ' ')
                    break;
                i = i + 1;
            };
        }
        for (PUeFd7N2vzD4 = i + (183 - 182); PUeFd7N2vzD4 <= i + 4; PUeFd7N2vzD4 = PUeFd7N2vzD4 +1)
            xi0LCPaVQqbO[PUeFd7N2vzD4 -i - (471 - 470)] = vc24bSKJQ6H[PUeFd7N2vzD4];
        PUeFd7N2vzD4 = 0;
        vc24bSKJQ6H[i] = '\0';
        MiVGqBf = MiVGqBf -(394 - 391);
        max = vc24bSKJQ6H[(786 - 786)];
        {
            i = 0;
            while (vc24bSKJQ6H[i] != '\0') {
                if (vc24bSKJQ6H[i] > max) {
                    max = vc24bSKJQ6H[i];
                    PUeFd7N2vzD4 = i;
                }
                i = i + 1;
            };
        }
        for (i = MiVGqBf -(101 - 100); i > PUeFd7N2vzD4; i = i - 1)
            vc24bSKJQ6H[i + (889 - 886)] = vc24bSKJQ6H[i];
        {
            i = 771 - 770;
            while (i < PUeFd7N2vzD4 +4) {
                vc24bSKJQ6H[i] = xi0LCPaVQqbO[i - PUeFd7N2vzD4 -1];
                i = i + 1;
            };
        }
        strcpy (string[irQzFkO], vc24bSKJQ6H);
        string[irQzFkO][MiVGqBf +(310 - 307)] = '\0';
        irQzFkO = irQzFkO + 1;
    }
    for (i = irQzFkO; i < (875 - 375); i = i + 1)
        string[i][0] = '\0';
    {
        i = 0;
        while (i < irQzFkO) {
            printf ("%s\n", string[i]);
            i = i + 1;
        };
    };
}

