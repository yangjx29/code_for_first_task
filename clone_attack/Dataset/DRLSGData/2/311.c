struct   book {
    int nBpWTkPht0IO;
    char IwTQbPO [(1014 - 994)];
    struct   book *jPML97I;
};
int main () {
    char kj3dUHu [(453 - 427)];
    struct   book *eMGPmNQt;
    int qouM0fGNs, pldMhtb, j, m, k, VD5p8otF1Z [(890 - 864)], riEJ7LID;
    struct   book *WrQ20c8oY5j;
    struct   book *UDkGyq5T3PE4;
    riEJ7LID = (42 - 42);
    scanf ("%d", &m);
    for (pldMhtb = (22 - 22); m > pldMhtb; pldMhtb = pldMhtb + (45 - 44)) {
        eMGPmNQt = (struct   book *) malloc (Len);
        if (!((559 - 559) != pldMhtb)) {
            UDkGyq5T3PE4 = eMGPmNQt;
        }
        else {
            WrQ20c8oY5j->jPML97I = eMGPmNQt;
        }
        WrQ20c8oY5j = eMGPmNQt;
        scanf ("%d %s", &eMGPmNQt->nBpWTkPht0IO, eMGPmNQt->IwTQbPO);
    }
    eMGPmNQt = UDkGyq5T3PE4;
    WrQ20c8oY5j->jPML97I = NULL;
    for (pldMhtb = (836 - 836); (162 - 136) > pldMhtb; pldMhtb = pldMhtb + (158 - 157)) {
        kj3dUHu[pldMhtb] = pldMhtb + (833 - 768);
        VD5p8otF1Z[pldMhtb] = (229 - 229);
    }
    for (j = (904 - 904); m > j; j = j + (857 - 856)) {
        for (pldMhtb = (379 - 379); pldMhtb < (790 - 764); pldMhtb = pldMhtb + (873 - 872)) {
            qouM0fGNs = strlen (eMGPmNQt->IwTQbPO);
            for (k = (596 - 596); qouM0fGNs > k; k++) {
                if (!(eMGPmNQt->IwTQbPO[k] != kj3dUHu[pldMhtb])) {
                    VD5p8otF1Z[pldMhtb]++;
                }
            }
        }
        eMGPmNQt = eMGPmNQt->jPML97I;
    }
    for (pldMhtb = (654 - 654); (668 - 642) > pldMhtb; pldMhtb = pldMhtb + (76 - 75)) {
        if (VD5p8otF1Z[pldMhtb] > VD5p8otF1Z[riEJ7LID]) {
            riEJ7LID = pldMhtb;
        }
    }
    eMGPmNQt = UDkGyq5T3PE4;
    printf ("%c\n%d\n", kj3dUHu[riEJ7LID], VD5p8otF1Z[riEJ7LID]);
    for (pldMhtb = (959 - 959); pldMhtb < m; pldMhtb = pldMhtb + (997 - 996)) {
        qouM0fGNs = strlen (eMGPmNQt->IwTQbPO);
        for (j = (934 - 934); qouM0fGNs > j; j++) {
            if (eMGPmNQt->IwTQbPO[j] == kj3dUHu[riEJ7LID]) {
                printf ("%d\n", eMGPmNQt->nBpWTkPht0IO);
            }
        }
        eMGPmNQt = eMGPmNQt->jPML97I;
    }
    return (266 - 266);
}

