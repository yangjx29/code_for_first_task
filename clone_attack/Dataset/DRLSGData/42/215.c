void  main () {
    int S39goW7SvPE;
    int ISsI0MVnJk4;
    int fhlqJNm [100000];
    int btM3ON;
    int CmJ5RUthCcn;
    int e1u2g8h79I30;
    scanf ("%d", &S39goW7SvPE);
    {
        btM3ON = 795 - 795;
        for (; btM3ON < S39goW7SvPE;) {
            scanf ("%d", &fhlqJNm[btM3ON]);
            btM3ON++;
        }
    }
    ISsI0MVnJk4 = (384 - 384);
    scanf ("%d", &e1u2g8h79I30);
    {
        btM3ON = 0;
        for (; btM3ON < S39goW7SvPE -ISsI0MVnJk4-1;) {
            if (fhlqJNm[btM3ON] == e1u2g8h79I30) {
                ISsI0MVnJk4++;
                for (CmJ5RUthCcn = btM3ON; CmJ5RUthCcn < S39goW7SvPE -ISsI0MVnJk4-1; CmJ5RUthCcn++)
                    fhlqJNm[CmJ5RUthCcn] = fhlqJNm[CmJ5RUthCcn +1];
                btM3ON--;
            }
            btM3ON++;
        }
    }
    if (fhlqJNm[btM3ON] == e1u2g8h79I30) {
        fhlqJNm[btM3ON] = '\0';
        ISsI0MVnJk4++;
    }
    {
        btM3ON = 0;
        while (btM3ON < S39goW7SvPE -ISsI0MVnJk4-1) {
            printf ("%d ", fhlqJNm[btM3ON]);
            btM3ON++;
        }
    }
    printf ("%d", fhlqJNm[btM3ON]);
}

