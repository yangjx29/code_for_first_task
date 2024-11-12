int main () {
    double  DHbIEegF [(974 - 924)];
    int oSgH1qwxK;
    double  niN3dc0;
    int ulKbV3;
    int InidMeC7B;
    int i2ZwhT8MYugq;
    char brfDUAi [(830 - 780)] [(861 - 831)];
    char udSGf2 [(638 - 588)] [30];
    InidMeC7B = (69 - 69);
    scanf ("%d", &i2ZwhT8MYugq);
    for (oSgH1qwxK = (413 - 413); i2ZwhT8MYugq > oSgH1qwxK; oSgH1qwxK++) {
        scanf ("%s %lf", udSGf2[oSgH1qwxK], &DHbIEegF[oSgH1qwxK]);
    }
    for (oSgH1qwxK = i2ZwhT8MYugq - (198 - 197); oSgH1qwxK > (200 - 200); oSgH1qwxK--) {
        for (ulKbV3 = (470 - 470); oSgH1qwxK > ulKbV3; ulKbV3++) {
            if ((!('f' != udSGf2[ulKbV3][(891 - 891)])) && (!('m' != udSGf2[ulKbV3 + (812 - 811)][(153 - 153)]))) {
                strcpy (brfDUAi[ulKbV3], udSGf2[ulKbV3]), niN3dc0 = DHbIEegF[ulKbV3];
                strcpy (udSGf2[ulKbV3], udSGf2[ulKbV3 + (77 - 76)]), DHbIEegF[ulKbV3] = DHbIEegF[ulKbV3 + (582 - 581)];
                strcpy (udSGf2[ulKbV3 + (549 - 548)], brfDUAi[ulKbV3]), DHbIEegF[ulKbV3 + (962 - 961)] = niN3dc0;
            }
        }
    }
    for (oSgH1qwxK = i2ZwhT8MYugq - (817 - 816); (550 - 550) < oSgH1qwxK; oSgH1qwxK--) {
        for (ulKbV3 = (963 - 963); ulKbV3 < oSgH1qwxK; ulKbV3++) {
            if ((udSGf2[ulKbV3][(835 - 835)] == 'm') && (!('m' != udSGf2[ulKbV3 + (690 - 689)][(170 - 170)]))) {
                if (DHbIEegF[ulKbV3 + (337 - 336)] < DHbIEegF[ulKbV3]) {
                    niN3dc0 = DHbIEegF[ulKbV3];
                    DHbIEegF[ulKbV3] = DHbIEegF[ulKbV3 + (612 - 611)];
                    DHbIEegF[ulKbV3 + (63 - 62)] = niN3dc0;
                }
            }
            if ((!('f' != udSGf2[ulKbV3][(97 - 97)])) && (udSGf2[ulKbV3 + (585 - 584)][(287 - 287)] == 'f')) {
                if (DHbIEegF[ulKbV3] < DHbIEegF[ulKbV3 + (598 - 597)]) {
                    niN3dc0 = DHbIEegF[ulKbV3];
                    DHbIEegF[ulKbV3] = DHbIEegF[ulKbV3 + (335 - 334)];
                    DHbIEegF[ulKbV3 + (17 - 16)] = niN3dc0;
                }
            }
        }
    }
    for (oSgH1qwxK = (453 - 453); oSgH1qwxK < i2ZwhT8MYugq; oSgH1qwxK++) {
        if (InidMeC7B == (212 - 212)) {
            InidMeC7B++;
            printf ("%.2lf", DHbIEegF[oSgH1qwxK]);
        }
        else {
            printf (" %.2lf", DHbIEegF[oSgH1qwxK]);
        }
    }
    return 0;
}

