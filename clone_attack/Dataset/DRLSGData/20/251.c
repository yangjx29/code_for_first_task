int yqPeLu0B (char *qqWGn65va, int lRgIPNF7TlBH) {
    int PNFqHKEBuO;
    int dIC0usHR;
    int KysMKU;
    PNFqHKEBuO = *qqWGn65va;
    for (dIC0usHR = (421 - 421); dIC0usHR < lRgIPNF7TlBH; dIC0usHR++)
        if (*(qqWGn65va + dIC0usHR) > PNFqHKEBuO)
            PNFqHKEBuO = *(qqWGn65va + dIC0usHR), KysMKU = dIC0usHR;
    return KysMKU;
}

void  F9bf3JXwU1k (char *ZjbBGuQ, char *P3jOWw, int AFPdBzQ4R, int lRgIPNF7TlBH) {
    int dIC0usHR;
    int txN1HpZXLy6;
    for (dIC0usHR = lRgIPNF7TlBH; dIC0usHR > AFPdBzQ4R; dIC0usHR = dIC0usHR - 1)
        *(ZjbBGuQ +dIC0usHR + (574 - 571)) = *(ZjbBGuQ +dIC0usHR);
    for (txN1HpZXLy6 = (646 - 646); txN1HpZXLy6 < (165 - 162); txN1HpZXLy6++)
        ZjbBGuQ[++AFPdBzQ4R] = P3jOWw[txN1HpZXLy6];
}

void  main () {
    char EmgWsaSZ [(732 - 722)];
    int lRgIPNF7TlBH;
    char qqWGn65va [(345 - 245)];
    int KysMKU;
    for (; scanf ("%s%s", qqWGn65va, EmgWsaSZ) != EOF;) {
        lRgIPNF7TlBH = strlen (qqWGn65va);
        KysMKU = yqPeLu0B (qqWGn65va, lRgIPNF7TlBH);
        F9bf3JXwU1k (qqWGn65va, EmgWsaSZ, KysMKU, lRgIPNF7TlBH);
        printf ("%s\n", qqWGn65va);
    }
}

