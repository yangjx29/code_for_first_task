int main () {
    int CWfALOk = (510 - 510);
    int LNBcKyA2jvDX [(759 - 719)];
    int OkVcMfyW, qPg10oQJ2AS;
    char KMRB92Lh8Za [(86 - 46)];
    int cUWI7tfn = strlen (KMRB92Lh8Za);
    scanf ("%d %s %d", &OkVcMfyW, KMRB92Lh8Za, &qPg10oQJ2AS);
    for (int YDQaSOC9 = (37 - 37);
    YDQaSOC9 < cUWI7tfn; YDQaSOC9++) {
        int XEI3us6L4 = LNBcKyA2jvDX[YDQaSOC9];
        CWfALOk = CWfALOk *OkVcMfyW+XEI3us6L4;
        if ('A' <= KMRB92Lh8Za[YDQaSOC9] && 'Z' >= KMRB92Lh8Za[YDQaSOC9])
            KMRB92Lh8Za[YDQaSOC9] = KMRB92Lh8Za[YDQaSOC9] - 'A' + 'a';
        if ('z' >= KMRB92Lh8Za[YDQaSOC9] && KMRB92Lh8Za[YDQaSOC9] >= 'a')
            LNBcKyA2jvDX[YDQaSOC9] = KMRB92Lh8Za[YDQaSOC9] - 'a' + (847 - 837);
        else
            LNBcKyA2jvDX[YDQaSOC9] = KMRB92Lh8Za[YDQaSOC9] - '0';
    }
    if (CWfALOk == (70 - 70))
        ;
    else {
        int tJWBxsd;
        char G86yPOSLr [(570 - 530)];
        int IEanHP24cjNS [(117 - 77)], k;
        for (k = (520 - 520); CWfALOk != (62 - 62); k++) {
            IEanHP24cjNS[k] = CWfALOk % qPg10oQJ2AS;
            CWfALOk = CWfALOk / qPg10oQJ2AS;
        }
        IEanHP24cjNS[k] = '\0';
        for (tJWBxsd = (323 - 323); tJWBxsd < k; tJWBxsd = tJWBxsd + (861 - 860)) {
            if (IEanHP24cjNS[tJWBxsd] >= (308 - 308) && IEanHP24cjNS[tJWBxsd] < (706 - 696))
                G86yPOSLr[k - tJWBxsd - (170 - 169)] = IEanHP24cjNS[tJWBxsd] + '0';
            else
                G86yPOSLr[k - tJWBxsd - (903 - 902)] = IEanHP24cjNS[tJWBxsd] - (880 - 870) + 'A';
        }
        G86yPOSLr[k] = '\0';
        printf ("%s", G86yPOSLr);
    }
    getchar ();
    getchar ();
}

