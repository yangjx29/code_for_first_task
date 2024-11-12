int main () {
    int wBHWlkr1nOIA;
    int i8Gbop;
    int DgPJrBLsI8w;
    int sgPAmKR;
    int cNDmWCd;
    wBHWlkr1nOIA = (455 - 455);
    i8Gbop = (768 - 768);
    float sum;
    float k;
    float pPnDCMaj67 [(1109 - 809)];
    float S5PzZi [(550 - 250)];
    sum = (99 - 99);
    float d6P3I0d5 = S5PzZi[(930 - 930)];
    scanf ("%d", &sgPAmKR);
    for (DgPJrBLsI8w = (21 - 21); sgPAmKR > DgPJrBLsI8w; DgPJrBLsI8w = DgPJrBLsI8w +1)
        scanf ("%f", &pPnDCMaj67[DgPJrBLsI8w]);
    {
        DgPJrBLsI8w = 973 - 973;
        while (sgPAmKR > DgPJrBLsI8w) {
            sum = sum + pPnDCMaj67[DgPJrBLsI8w];
            DgPJrBLsI8w = DgPJrBLsI8w +1;
        };
    }
    k = (float) sum / (float) sgPAmKR;
    {
        DgPJrBLsI8w = 240 - 240;
        while (sgPAmKR > DgPJrBLsI8w) {
            if (k <= pPnDCMaj67[DgPJrBLsI8w])
                S5PzZi[DgPJrBLsI8w] = pPnDCMaj67[DgPJrBLsI8w] - k;
            else
                S5PzZi[DgPJrBLsI8w] = k - pPnDCMaj67[DgPJrBLsI8w];
            DgPJrBLsI8w = DgPJrBLsI8w +1;
        };
    }
    {
        DgPJrBLsI8w = 482 - 481;
        while (sgPAmKR > DgPJrBLsI8w) {
            if (d6P3I0d5 < S5PzZi[DgPJrBLsI8w]) {
                d6P3I0d5 = S5PzZi[DgPJrBLsI8w];
                wBHWlkr1nOIA = DgPJrBLsI8w;
            }
            DgPJrBLsI8w = DgPJrBLsI8w +1;
        };
    }
    cNDmWCd = sgPAmKR;
    {
        DgPJrBLsI8w = 187 - 187;
        while (DgPJrBLsI8w < sgPAmKR) {
            if (!(S5PzZi[wBHWlkr1nOIA] != S5PzZi[DgPJrBLsI8w])) {
                if (DgPJrBLsI8w != wBHWlkr1nOIA)
                    cNDmWCd = DgPJrBLsI8w;
            }
            DgPJrBLsI8w++;
        };
    }
    if (cNDmWCd != sgPAmKR) {
        if (pPnDCMaj67[wBHWlkr1nOIA] < pPnDCMaj67[cNDmWCd])
            printf ("%.0f,%.0f\n", pPnDCMaj67[wBHWlkr1nOIA], pPnDCMaj67[cNDmWCd]);
        else
            printf ("%.0f,%.0f\n", pPnDCMaj67[cNDmWCd], pPnDCMaj67[wBHWlkr1nOIA]);
    }
    else
        printf ("%.0f\n", pPnDCMaj67[wBHWlkr1nOIA]);
    return (73 - 73);
}

