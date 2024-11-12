int main () {
    char fgedfPDX [1000];
    int CsmBn4KaHh;
    char *IajAieuRh;
    int S39H4h;
    char *AC7ou1T;
    for (; gets (fgedfPDX);) {
        CsmBn4KaHh = strlen (fgedfPDX);
        AC7ou1T = &fgedfPDX[0];
        for (IajAieuRh = fgedfPDX; IajAieuRh < (fgedfPDX + CsmBn4KaHh -4); IajAieuRh++) {
            if (*AC7ou1T < *IajAieuRh)
                AC7ou1T = IajAieuRh;
        }
        for (IajAieuRh = fgedfPDX; IajAieuRh < (fgedfPDX + CsmBn4KaHh -4); IajAieuRh++) {
            if (AC7ou1T > IajAieuRh)
                printf ("%c", *IajAieuRh);
            if (IajAieuRh == AC7ou1T)
                printf ("%c%c%c%c", *IajAieuRh, fgedfPDX[CsmBn4KaHh -3], fgedfPDX[CsmBn4KaHh -2], fgedfPDX[CsmBn4KaHh -1]);
            if (IajAieuRh > AC7ou1T)
                printf ("%c", *IajAieuRh);
        }
    }
    return 0;
}

