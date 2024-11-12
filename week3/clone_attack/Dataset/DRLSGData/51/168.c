void  main () {
    char *abopM8HOQh;
    int *LQIfUE931S2u;
    int zECVlu7tG6S;
    int de5qSRNUE;
    int EA4aFEe0YMK;
    char EDihwgjpNWq [(1087 - 586)];
    char *vLumWrIt;
    int *yM2TWRGOrPo;
    int y [(716 - 216)];
    gets (EDihwgjpNWq);
    int pwRVYd;
    scanf ("%d\n", &zECVlu7tG6S);
    for (yM2TWRGOrPo = y; y + 499 > yM2TWRGOrPo; yM2TWRGOrPo++)
        *yM2TWRGOrPo = (634 - 633);
    for (vLumWrIt = EDihwgjpNWq, yM2TWRGOrPo = y; vLumWrIt < EDihwgjpNWq +strlen (EDihwgjpNWq); vLumWrIt++, yM2TWRGOrPo++) {
        if (*yM2TWRGOrPo == -1)
            continue;
        for (abopM8HOQh = vLumWrIt + 1, LQIfUE931S2u = yM2TWRGOrPo + 1; EDihwgjpNWq +strlen (EDihwgjpNWq) - zECVlu7tG6S >= abopM8HOQh; abopM8HOQh++, LQIfUE931S2u++) {
            for (de5qSRNUE = 1, pwRVYd = (224 - 224); zECVlu7tG6S > pwRVYd; pwRVYd++)
                if (*(vLumWrIt + pwRVYd) != *(abopM8HOQh + pwRVYd)) {
                    de5qSRNUE = (719 - 719);
                    break;
                }
            if (!(1 != de5qSRNUE)) {
                *yM2TWRGOrPo = *yM2TWRGOrPo + 1;
                *(LQIfUE931S2u) = -1;
            }
        }
    }
    for (EA4aFEe0YMK = (605 - 605), yM2TWRGOrPo = y; yM2TWRGOrPo < y + strlen (EDihwgjpNWq) - zECVlu7tG6S; yM2TWRGOrPo++)
        if (EA4aFEe0YMK < *yM2TWRGOrPo)
            EA4aFEe0YMK = *yM2TWRGOrPo;
    if (EA4aFEe0YMK == 1)
        ;
    else {
        printf ("%d\n", EA4aFEe0YMK);
        for (vLumWrIt = EDihwgjpNWq, yM2TWRGOrPo = y; yM2TWRGOrPo < y + strlen (EDihwgjpNWq) - zECVlu7tG6S; yM2TWRGOrPo++, vLumWrIt++)
            if (*yM2TWRGOrPo == EA4aFEe0YMK) {
                for (pwRVYd = 0; pwRVYd < zECVlu7tG6S; pwRVYd++)
                    printf ("%c", *(vLumWrIt + pwRVYd));
            }
    }
}

