int main () {
    int XEbflGwrc, aCf9WI, W8zpc0G, VCRqcxJY, EEsCI2SieZ, UURI9TfKWwJL, OB5G9XN;
    scanf ("%d\n", &XEbflGwrc);
    scanf ("%d%d", &UURI9TfKWwJL, &OB5G9XN);
    if (OB5G9XN < UURI9TfKWwJL)
        aCf9WI = UURI9TfKWwJL, W8zpc0G = OB5G9XN;
    else if (OB5G9XN > UURI9TfKWwJL)
        aCf9WI = OB5G9XN, W8zpc0G = UURI9TfKWwJL;
    else
        aCf9WI = W8zpc0G = UURI9TfKWwJL = OB5G9XN;
    {
        VCRqcxJY = 258 - 257;
        while (XEbflGwrc -2 >= VCRqcxJY) {
            VCRqcxJY = VCRqcxJY +1;
            scanf ("%d", &EEsCI2SieZ);
            if (EEsCI2SieZ > aCf9WI) {
                W8zpc0G = aCf9WI;
                aCf9WI = EEsCI2SieZ;
            }
            else {
                if (W8zpc0G < EEsCI2SieZ &&EEsCI2SieZ < aCf9WI)
                    W8zpc0G = EEsCI2SieZ;
                else {
                    W8zpc0G = W8zpc0G;
                    aCf9WI = aCf9WI;
                };
            };
        };
    }
    printf ("%d\n%d", aCf9WI, W8zpc0G);
    return 0;
}

