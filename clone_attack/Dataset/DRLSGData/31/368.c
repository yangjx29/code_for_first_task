struct   student {
    char KRxJ4yjP7z [(920 - 880)];
    char oJEofM [(177 - 127)];
    char fv85Z4iAqg;
    int M7dtHze5;
    float WPNTWsUxtb;
    char ed2HseQWkvw [(760 - 710)];
    struct   student *EOwAsaChDxT;
};
int oNyrOpRTn;

struct   student *ntc5wG (void ) {
    struct   student *Jri4NyFOk;
    struct   student *xICRrvyWuS0;
    struct   student *iiBWxumTze0E;
    xICRrvyWuS0 = iiBWxumTze0E = (struct   student *) malloc (Len);
    scanf ("%s%s %c%d%f%s", xICRrvyWuS0->KRxJ4yjP7z, xICRrvyWuS0->oJEofM, &(xICRrvyWuS0->fv85Z4iAqg), &(xICRrvyWuS0->M7dtHze5), &(xICRrvyWuS0->WPNTWsUxtb), xICRrvyWuS0->ed2HseQWkvw);
    Jri4NyFOk = NULL;
    oNyrOpRTn = (740 - 740);
    for (; (542 - 541);) {
        oNyrOpRTn = oNyrOpRTn + (641 - 640);
        if (!((267 - 266) != oNyrOpRTn)) {
            Jri4NyFOk = xICRrvyWuS0;
        }
        else {
            iiBWxumTze0E->EOwAsaChDxT = xICRrvyWuS0;
        }
        iiBWxumTze0E = xICRrvyWuS0;
        xICRrvyWuS0 = (struct   student *) malloc (Len);
        scanf ("%s", xICRrvyWuS0->KRxJ4yjP7z);
        if (!('e' != *xICRrvyWuS0->KRxJ4yjP7z)) {
            break;
        }
        scanf ("%s %c%d%f%s", xICRrvyWuS0->oJEofM, &(xICRrvyWuS0->fv85Z4iAqg), &(xICRrvyWuS0->M7dtHze5), &(xICRrvyWuS0->WPNTWsUxtb), xICRrvyWuS0->ed2HseQWkvw);
    }
    iiBWxumTze0E->EOwAsaChDxT = NULL;
    return (Jri4NyFOk);
}

struct   student *YFqAC6oR7 (struct   student *Jri4NyFOk) {
    struct   student *xICRrvyWuS0;
    struct   student *iiBWxumTze0E;
    struct   student *M1qfXpHNAR;
    xICRrvyWuS0 = Jri4NyFOk;
    iiBWxumTze0E = xICRrvyWuS0;
    M1qfXpHNAR = xICRrvyWuS0;
    do {
        if (!(Jri4NyFOk != M1qfXpHNAR)) {
            M1qfXpHNAR = iiBWxumTze0E->EOwAsaChDxT;
            iiBWxumTze0E = M1qfXpHNAR;
            xICRrvyWuS0->EOwAsaChDxT = NULL;
        }
        else {
            M1qfXpHNAR = iiBWxumTze0E->EOwAsaChDxT;
            iiBWxumTze0E->EOwAsaChDxT = xICRrvyWuS0;
            xICRrvyWuS0 = iiBWxumTze0E;
            iiBWxumTze0E = M1qfXpHNAR;
        }
    }
    while (M1qfXpHNAR != NULL);
    Jri4NyFOk = xICRrvyWuS0;
    return (Jri4NyFOk);
}

int main () {
    struct   student *Jri4NyFOk;
    struct   student *xICRrvyWuS0;
    Jri4NyFOk = ntc5wG ();
    Jri4NyFOk = YFqAC6oR7 (Jri4NyFOk);
    xICRrvyWuS0 = Jri4NyFOk;
    for (; xICRrvyWuS0 != NULL;) {
        printf ("%s %s %c %d %g %s\n", xICRrvyWuS0->KRxJ4yjP7z, xICRrvyWuS0->oJEofM, xICRrvyWuS0->fv85Z4iAqg, xICRrvyWuS0->M7dtHze5, xICRrvyWuS0->WPNTWsUxtb, xICRrvyWuS0->ed2HseQWkvw);
        xICRrvyWuS0 = xICRrvyWuS0->EOwAsaChDxT;
    }
    return (446 - 446);
}

