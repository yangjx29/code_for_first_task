void  main () {
    int eoc5EFktIWDQ, NdEQAVb, m, n, t, AqKhTQF8k01;
    char WSfg7GMKjEQH [100] [50], str2 [100] [3];
    eoc5EFktIWDQ = (187 - 187);
    while (!(EOF == scanf ("%s%s", WSfg7GMKjEQH[eoc5EFktIWDQ], str2[eoc5EFktIWDQ]))) {
        eoc5EFktIWDQ = eoc5EFktIWDQ + 1;
    }
    n = eoc5EFktIWDQ;
    {
        eoc5EFktIWDQ = 0;
        while (n > eoc5EFktIWDQ) {
            m = 0;
            t = strlen (WSfg7GMKjEQH[eoc5EFktIWDQ]);
            AqKhTQF8k01 = WSfg7GMKjEQH[eoc5EFktIWDQ][0];
            for (NdEQAVb = 1; NdEQAVb < t; NdEQAVb = NdEQAVb +1) {
                if (WSfg7GMKjEQH[eoc5EFktIWDQ][NdEQAVb] > AqKhTQF8k01) {
                    m = NdEQAVb;
                    AqKhTQF8k01 = WSfg7GMKjEQH[eoc5EFktIWDQ][NdEQAVb];
                };
            }
            for (NdEQAVb = 0; m >= NdEQAVb; NdEQAVb = NdEQAVb +1)
                printf ("%c", WSfg7GMKjEQH[eoc5EFktIWDQ][NdEQAVb]);
            {
                NdEQAVb = 0;
                while (NdEQAVb < 3) {
                    printf ("%c", str2[eoc5EFktIWDQ][NdEQAVb]);
                    NdEQAVb = NdEQAVb +1;
                };
            }
            {
                NdEQAVb = m + 1;
                while (NdEQAVb < t) {
                    printf ("%c", WSfg7GMKjEQH[eoc5EFktIWDQ][NdEQAVb]);
                    NdEQAVb = NdEQAVb +1;
                };
            }
            eoc5EFktIWDQ = eoc5EFktIWDQ + 1;
            printf ("\n");
        };
    };
}

