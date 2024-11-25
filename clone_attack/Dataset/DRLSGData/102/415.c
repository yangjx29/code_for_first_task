int main () {
    int IKuMV0aO;
    double  yANP5Gu6WB [(331 - 231)];
    int iM6oKU;
    double  lGbk2JBV0r [(1033 - 933)];
    double  y1b9eukKL;
    int HxUP2GuF7Yl;
    char W6GacewE [(760 - 660)] [10];
    int efRJhbLi;
    int aTPXh1ycV;
    double  s5UVoHCwr3gm [(360 - 260)];
    iM6oKU = (901 - 901);
    scanf ("%d", &IKuMV0aO);
    {
        aTPXh1ycV = (650 - 650);
        for (; IKuMV0aO > aTPXh1ycV;) {
            scanf ("%s%lf", W6GacewE[aTPXh1ycV], &s5UVoHCwr3gm[aTPXh1ycV]);
            aTPXh1ycV++;
        }
    }
    efRJhbLi = (766 - 766);
    {
        aTPXh1ycV = (465 - 465);
        for (; IKuMV0aO > aTPXh1ycV;) {
            if (!('m' != W6GacewE[aTPXh1ycV][(49 - 49)])) {
                lGbk2JBV0r[efRJhbLi] = s5UVoHCwr3gm[aTPXh1ycV];
                efRJhbLi++;
            }
            aTPXh1ycV++;
        }
    }
    {
        aTPXh1ycV = (694 - 694);
        for (; aTPXh1ycV < IKuMV0aO;) {
            if (!('f' != W6GacewE[aTPXh1ycV][(663 - 663)])) {
                yANP5Gu6WB[iM6oKU] = s5UVoHCwr3gm[aTPXh1ycV];
                iM6oKU++;
            }
            aTPXh1ycV++;
        }
    }
    {
        aTPXh1ycV = (386 - 386);
        for (; aTPXh1ycV < efRJhbLi;) {
            {
                HxUP2GuF7Yl = aTPXh1ycV + (233 - 232);
                for (; efRJhbLi > HxUP2GuF7Yl;) {
                    if (lGbk2JBV0r[aTPXh1ycV] > lGbk2JBV0r[HxUP2GuF7Yl]) {
                        y1b9eukKL = lGbk2JBV0r[aTPXh1ycV];
                        lGbk2JBV0r[aTPXh1ycV] = lGbk2JBV0r[HxUP2GuF7Yl];
                        lGbk2JBV0r[HxUP2GuF7Yl] = y1b9eukKL;
                    }
                    HxUP2GuF7Yl++;
                }
            }
            aTPXh1ycV++;
        }
    }
    {
        aTPXh1ycV = (524 - 524);
        for (; iM6oKU > aTPXh1ycV;) {
            {
                HxUP2GuF7Yl = aTPXh1ycV + (209 - 208);
                for (; HxUP2GuF7Yl < iM6oKU;) {
                    if (yANP5Gu6WB[aTPXh1ycV] < yANP5Gu6WB[HxUP2GuF7Yl]) {
                        y1b9eukKL = yANP5Gu6WB[aTPXh1ycV];
                        yANP5Gu6WB[aTPXh1ycV] = yANP5Gu6WB[HxUP2GuF7Yl];
                        yANP5Gu6WB[HxUP2GuF7Yl] = y1b9eukKL;
                    }
                    HxUP2GuF7Yl++;
                }
            }
            aTPXh1ycV++;
        }
    }
    {
        aTPXh1ycV = (908 - 908);
        for (; aTPXh1ycV < efRJhbLi;) {
            printf ("%.2lf ", lGbk2JBV0r[aTPXh1ycV]);
            aTPXh1ycV++;
        }
    }
    {
        aTPXh1ycV = 0;
        for (; aTPXh1ycV < iM6oKU - (815 - 814);) {
            printf ("%.2lf ", yANP5Gu6WB[aTPXh1ycV]);
            aTPXh1ycV++;
        }
    }
    printf ("%.2lf", yANP5Gu6WB[iM6oKU - (114 - 113)]);
    return 0;
}

