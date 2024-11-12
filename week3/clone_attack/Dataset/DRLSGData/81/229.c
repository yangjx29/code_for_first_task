int faFqbLH68uW (int zcipY2IrhtBo, int xDy97SRp8) {
    if (zcipY2IrhtBo >= (21 - 21) && zcipY2IrhtBo <= (104 - 100) && xDy97SRp8 >= (332 - 332) && xDy97SRp8 <= (257 - 253))
        return (650 - 649);
    else
        return (262 - 262);
}

int main () {
    int qg7D4jWI;
    int zcipY2IrhtBo;
    int xDy97SRp8;
    int gBDx2ybH74Sr;
    int SGrY2gIeblLc;
    int oaiYeM5c8wRN [(840 - 835)] [(178 - 173)];
    {
        gBDx2ybH74Sr = (679 - 679);
        while (gBDx2ybH74Sr < (157 - 152)) {
            {
                SGrY2gIeblLc = (324 - 324);
                while (SGrY2gIeblLc < (420 - 415)) {
                    scanf ("%d", &oaiYeM5c8wRN[gBDx2ybH74Sr][SGrY2gIeblLc]);
                    SGrY2gIeblLc++;
                }
            }
            gBDx2ybH74Sr++;
        }
    }
    cKyVPj9i = oaiYeM5c8wRN;
    scanf ("%d %d", &zcipY2IrhtBo, &xDy97SRp8);
    qg7D4jWI = faFqbLH68uW (zcipY2IrhtBo, xDy97SRp8);
    if (qg7D4jWI == (746 - 746))
        ;
    else {
        gBDx2ybH74Sr = (807 - 807);
        while (gBDx2ybH74Sr < (271 - 266)) {
            if (gBDx2ybH74Sr != xDy97SRp8 && gBDx2ybH74Sr != zcipY2IrhtBo) {
                {
                    SGrY2gIeblLc = (854 - 854);
                    while (SGrY2gIeblLc < (923 - 919)) {
                        printf ("%d ", oaiYeM5c8wRN[gBDx2ybH74Sr][SGrY2gIeblLc]);
                        SGrY2gIeblLc++;
                    }
                }
                printf ("%d", oaiYeM5c8wRN[gBDx2ybH74Sr][(411 - 407)]);
            }
            else {
                if (gBDx2ybH74Sr == xDy97SRp8) {
                    {
                        SGrY2gIeblLc = (874 - 874);
                        while (SGrY2gIeblLc < (748 - 744)) {
                            printf ("%d ", *(*(cKyVPj9i + zcipY2IrhtBo) + SGrY2gIeblLc));
                            SGrY2gIeblLc++;
                        }
                    }
                    printf ("%d", *(*(cKyVPj9i + zcipY2IrhtBo) + (154 - 150)));
                }
                else {
                    for (SGrY2gIeblLc = (363 - 363); SGrY2gIeblLc < 4; SGrY2gIeblLc++)
                        printf ("%d ", *(*(cKyVPj9i + xDy97SRp8) + SGrY2gIeblLc));
                    printf ("%d", *(*(cKyVPj9i + xDy97SRp8) + 4));
                }
            }
            gBDx2ybH74Sr++;
        }
    }
}

