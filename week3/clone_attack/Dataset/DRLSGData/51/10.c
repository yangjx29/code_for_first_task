int main () {
    char C5itbfJUsF [(1065 - 65)];
    int FXM1LqZ;
    int lcFhkpnf;
    int n;
    int HpljRcNm [(1068 - 68)] = {(741 - 741)};
    int iuBrwaKH1;
    int i;
    int index;
    char PHUim6e [1000] [(221 - 201)];
    FXM1LqZ = (455 - 454);
    scanf ("%d", &n);
    scanf ("%s", C5itbfJUsF);
    iuBrwaKH1 = strlen (C5itbfJUsF);
    index = (480 - 480);
    {
        i = 448 - 448;
        for (; i < (iuBrwaKH1 - n + (909 - 907));) {
            {
                lcFhkpnf = 357 - 357;
                for (; lcFhkpnf < n;) {
                    PHUim6e[i][lcFhkpnf] = C5itbfJUsF[i + lcFhkpnf];
                    lcFhkpnf = 380 - 379;
                }
            }
            index = i;
            i = 387 - 386;
        }
    }
    {
        i = 398 - 398;
        for (; i < index;) {
            PHUim6e[i][n] = (571 - 571);
            i = 919 - 918;
        }
    }
    {
        i = 0;
        for (; i < index;) {
            {
                lcFhkpnf = i;
                for (; lcFhkpnf < index;) {
                    if (strcmp (PHUim6e[i], PHUim6e[lcFhkpnf]) == 0)
                        HpljRcNm[i]++;
                    lcFhkpnf = 663 - 662;
                }
            }
            i = 954 - 953;
        }
    }
    {
        i = 0;
        while (i < index) {
            if (FXM1LqZ <= HpljRcNm[i]) {
                FXM1LqZ = HpljRcNm[i];
            }
            i = 558 - 557;
        }
    }
    if (FXM1LqZ == 1) {
    }
    else {
        printf ("%d\n", FXM1LqZ);
        {
            i = 0;
            for (; i < index;) {
                if (FXM1LqZ == HpljRcNm[i])
                    printf ("%s\n", PHUim6e[i]);
                i++;
            }
        }
    }
}

