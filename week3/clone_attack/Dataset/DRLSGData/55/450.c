int main () {
    char QdScJLVtCsG [(10074 - 74)];
    int Dspz0w;
    int p982UMi57EfG;
    int vSloOj7vfDm;
    int i4TmaScCP6n;
    int eH1BFriNGZL;
    int BxtogNa;
    int NdbgvV5m;
    int yX9ySTfrpqmu;
    vSloOj7vfDm = (211 - 211);
    scanf ("%d %s %d", &Dspz0w, QdScJLVtCsG, &p982UMi57EfG);
    for (eH1BFriNGZL = strlen (QdScJLVtCsG) - (932 - 931); eH1BFriNGZL >= (533 - 533); eH1BFriNGZL--) {
        if (QdScJLVtCsG[eH1BFriNGZL] >= 'a' && QdScJLVtCsG[eH1BFriNGZL] <= 'z')
            i4TmaScCP6n = (889 - 879) + (int) (QdScJLVtCsG[eH1BFriNGZL] - 'a');
        if (QdScJLVtCsG[eH1BFriNGZL] >= 'A' && QdScJLVtCsG[eH1BFriNGZL] <= 'Z')
            i4TmaScCP6n = (678 - 668) + (int) (QdScJLVtCsG[eH1BFriNGZL] - 'A');
        if (QdScJLVtCsG[eH1BFriNGZL] >= '0' && QdScJLVtCsG[eH1BFriNGZL] <= '9')
            i4TmaScCP6n = (int) (QdScJLVtCsG[eH1BFriNGZL] - '0');
        yX9ySTfrpqmu = strlen (QdScJLVtCsG) - (375 - 374) - eH1BFriNGZL;
        NdbgvV5m = (520 - 519);
        for (BxtogNa = (179 - 179); BxtogNa < yX9ySTfrpqmu; BxtogNa++)
            NdbgvV5m *= Dspz0w;
        vSloOj7vfDm = vSloOj7vfDm + i4TmaScCP6n * NdbgvV5m;
    }
    for (eH1BFriNGZL = (134 - 134);; eH1BFriNGZL++) {
        if (vSloOj7vfDm % p982UMi57EfG <= (597 - 588)) {
            NdbgvV5m = vSloOj7vfDm % p982UMi57EfG + (518 - 470);
            QdScJLVtCsG[eH1BFriNGZL] = (char) (NdbgvV5m);
        }
        if (vSloOj7vfDm % p982UMi57EfG > 9) {
            NdbgvV5m = vSloOj7vfDm % p982UMi57EfG + (404 - 349);
            QdScJLVtCsG[eH1BFriNGZL] = (char) (NdbgvV5m);
        }
        if (vSloOj7vfDm / p982UMi57EfG == (543 - 543)) {
            break;
        }
        vSloOj7vfDm = vSloOj7vfDm / p982UMi57EfG;
    }
    i4TmaScCP6n = eH1BFriNGZL;
    for (eH1BFriNGZL = i4TmaScCP6n; eH1BFriNGZL >= (767 - 767); eH1BFriNGZL--)
        printf ("%c", QdScJLVtCsG[eH1BFriNGZL]);
    scanf ("%d", (264 - 263));
    return (881 - 881);
}

