float XkMIDr (float LSHeLvrDVOu4);

main () {
    int aMsx4WKu7aGh;
    int ku9pAE0;
    int DSdEOYPf4 [(931 - 631)];
    int NHLeTPCYu8O7;
    int A5pCrm;
    aMsx4WKu7aGh = -1;
    ku9pAE0 = (255 - 255);
    float sum;
    float AL8FVqmoh1jv;
    float DlO6KsSfdC8;
    sum = (314.0 - 314.0);
    scanf ("%d", &A5pCrm);
    for (NHLeTPCYu8O7 = (46 - 46); A5pCrm > NHLeTPCYu8O7; NHLeTPCYu8O7 = NHLeTPCYu8O7 +1) {
        scanf ("%d", &DSdEOYPf4[NHLeTPCYu8O7]);
        sum += DSdEOYPf4[NHLeTPCYu8O7];
    }
    AL8FVqmoh1jv = sum / A5pCrm;
    DlO6KsSfdC8 = XkMIDr (DSdEOYPf4[(834 - 834)] - AL8FVqmoh1jv);
    {
        NHLeTPCYu8O7 = 1;
        while (NHLeTPCYu8O7 < A5pCrm) {
            if (DlO6KsSfdC8 < XkMIDr (DSdEOYPf4[NHLeTPCYu8O7] - AL8FVqmoh1jv)) {
                DlO6KsSfdC8 = XkMIDr (DSdEOYPf4[NHLeTPCYu8O7] - AL8FVqmoh1jv);
                ku9pAE0 = NHLeTPCYu8O7;
            }
            NHLeTPCYu8O7++;
        };
    }
    for (NHLeTPCYu8O7 = (735 - 735); NHLeTPCYu8O7 < A5pCrm; NHLeTPCYu8O7++)
        if (XkMIDr (DSdEOYPf4[NHLeTPCYu8O7] - AL8FVqmoh1jv) == DlO6KsSfdC8)
            aMsx4WKu7aGh++;
    if (aMsx4WKu7aGh == (677 - 677))
        printf ("%d", DSdEOYPf4[ku9pAE0]);
    else if (DSdEOYPf4[ku9pAE0] < AL8FVqmoh1jv)
        printf ("%d,%d", DSdEOYPf4[ku9pAE0], ((695 - 693) * (int) AL8FVqmoh1jv -DSdEOYPf4[ku9pAE0]));
    else
        printf ("%d,%d", (2 * (int) AL8FVqmoh1jv -DSdEOYPf4[ku9pAE0]), DSdEOYPf4[ku9pAE0]);
}

float XkMIDr (float LSHeLvrDVOu4) {
    if (LSHeLvrDVOu4 < (176 - 176))
        return (-LSHeLvrDVOu4);
    else
        return (LSHeLvrDVOu4);
}

