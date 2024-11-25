int FZqW62XKk0Sr (char E3hciy [10]);

int main () {
    char b3U2NEdQ [10] = {'\0'};
    char bhsLnpHiCJ [10] = {'\0'};
    int bOHCL7Jka2di;
    int RBM1iJ;
    int zSlmPB;
    int m;
    int return1;
    int return2;
    {
        RBM1iJ = 0;
        while (RBM1iJ < 10) {
            scanf ("%c", &b3U2NEdQ[RBM1iJ]);
            if (b3U2NEdQ[RBM1iJ] == ' ') {
                b3U2NEdQ[RBM1iJ] = '\0';
                break;
            }
            RBM1iJ = RBM1iJ +1;
        };
    }
    bOHCL7Jka2di = strlen (b3U2NEdQ);
    scanf ("%s", bhsLnpHiCJ);
    m = strlen (bhsLnpHiCJ);
    if (!(bOHCL7Jka2di == m))
        ;
    else {
        {
            RBM1iJ = 0;
            while (bOHCL7Jka2di > RBM1iJ) {
                {
                    zSlmPB = 0;
                    while (zSlmPB < bOHCL7Jka2di) {
                        if (b3U2NEdQ[RBM1iJ] == bhsLnpHiCJ[zSlmPB]) {
                            b3U2NEdQ[RBM1iJ] = '\0';
                            bhsLnpHiCJ[zSlmPB] = '\0';
                            zSlmPB = bOHCL7Jka2di;
                        }
                        zSlmPB = zSlmPB + 1;
                    };
                }
                RBM1iJ = RBM1iJ +1;
            };
        }
        return1 = FZqW62XKk0Sr (b3U2NEdQ);
        return2 = FZqW62XKk0Sr (bhsLnpHiCJ);
        if (return1 == 0 && return2 == 0)
            printf ("YES");
        else
            printf ("NO");
    }
    return 0;
}

int FZqW62XKk0Sr (char E3hciy [10]) {
    int RnXthT;
    int RBM1iJ;
    RnXthT = 0;
    for (RBM1iJ = 0; RBM1iJ < 10; RBM1iJ = RBM1iJ +1)
        if (E3hciy[RBM1iJ] != '\0') {
            RnXthT = 1;
            break;
        }
    return (RnXthT);
}

