int main () {
    int uGfXtyUx;
    char EHBn9A [600];
    int YmTipNr0C = strlen (EHBn9A);
    int k79OQpyc;
    int ebMKnRBFPuD8 [600] = {(189 - 189)}, ELUCYcm8n = (542 - 542);
    scanf ("%d", &uGfXtyUx);
    k79OQpyc = 0;
    scanf ("%s", &EHBn9A);
    for (; YmTipNr0C >= k79OQpyc + uGfXtyUx;) {
        int fXMmsWoE4;
        ebMKnRBFPuD8[k79OQpyc] = (248 - 247);
        for (fXMmsWoE4 = k79OQpyc + 1; YmTipNr0C >= fXMmsWoE4 + uGfXtyUx; fXMmsWoE4 = fXMmsWoE4 + 1) {
            int gvC67TQp = 1;
            int L6mdjpNMwgzP;
            {
                L6mdjpNMwgzP = 0;
                for (; L6mdjpNMwgzP < uGfXtyUx;) {
                    if (EHBn9A[k79OQpyc + L6mdjpNMwgzP] != EHBn9A[fXMmsWoE4 + L6mdjpNMwgzP]) {
                        gvC67TQp = 0;
                        break;
                    }
                    L6mdjpNMwgzP = L6mdjpNMwgzP +1;
                }
            }
            if (gvC67TQp)
                ebMKnRBFPuD8[k79OQpyc]++;
        }
        if (ELUCYcm8n < ebMKnRBFPuD8[k79OQpyc])
            ELUCYcm8n = ebMKnRBFPuD8[k79OQpyc];
        k79OQpyc = k79OQpyc + 1;
    }
    if (1 < ELUCYcm8n) {
        printf ("%d\n", ELUCYcm8n);
        for (k79OQpyc = 0; k79OQpyc + uGfXtyUx <= YmTipNr0C; k79OQpyc = k79OQpyc + 1) {
            if (ebMKnRBFPuD8[k79OQpyc] == ELUCYcm8n) {
                int L6mdjpNMwgzP;
                for (L6mdjpNMwgzP = k79OQpyc; L6mdjpNMwgzP < k79OQpyc + uGfXtyUx; L6mdjpNMwgzP = L6mdjpNMwgzP +1)
                    printf ("%c", EHBn9A[L6mdjpNMwgzP]);
            }
        }
    }
    else
        ;
    return 0;
}

