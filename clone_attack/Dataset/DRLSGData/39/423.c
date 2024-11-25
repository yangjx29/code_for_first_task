struct   student {
    char uTwunispY [20];
    int B0HD2tWbmUf;
    int aNMdET;
    char lDUiQrAG;
    char wFVKe1bI;
    int paper;
}
qWnPiE8zx [100];

int main () {
    int gkE64CY9DAa;
    int cW5JFA2E;
    int imjEqazsPN;
    int eCAwzsVF0T [100];
    int f (struct   student s);
    int fTFIkGmWa0U;
    int cd2cQnju;
    int n;
    int BWRHE4Vbe;
    scanf ("%d", &n);
    for (imjEqazsPN = 0; n > imjEqazsPN; imjEqazsPN = imjEqazsPN + 1)
        scanf ("%s%d%d %c %c%d", qWnPiE8zx[imjEqazsPN].uTwunispY, &qWnPiE8zx[imjEqazsPN].B0HD2tWbmUf, &qWnPiE8zx[imjEqazsPN].aNMdET, &qWnPiE8zx[imjEqazsPN].lDUiQrAG, &qWnPiE8zx[imjEqazsPN].wFVKe1bI, &qWnPiE8zx[imjEqazsPN].paper);
    for (imjEqazsPN = 0; n > imjEqazsPN; imjEqazsPN++)
        eCAwzsVF0T[imjEqazsPN] = f (qWnPiE8zx[imjEqazsPN]);
    cW5JFA2E = 0;
    gkE64CY9DAa = 0;
    for (imjEqazsPN = 0; n > imjEqazsPN; imjEqazsPN++)
        gkE64CY9DAa = gkE64CY9DAa + eCAwzsVF0T[imjEqazsPN];
    fTFIkGmWa0U = eCAwzsVF0T[0];
    for (imjEqazsPN = 0; n > imjEqazsPN; imjEqazsPN++)
        if (fTFIkGmWa0U < eCAwzsVF0T[imjEqazsPN]) {
            fTFIkGmWa0U = eCAwzsVF0T[imjEqazsPN];
            cW5JFA2E = imjEqazsPN;
        }
    cd2cQnju = 0;
    BWRHE4Vbe = 0;
    for (imjEqazsPN = 0; imjEqazsPN < n; imjEqazsPN++)
        if (!(fTFIkGmWa0U != eCAwzsVF0T[imjEqazsPN]))
            BWRHE4Vbe++;
    if (!(1 != BWRHE4Vbe))
        printf ("%s\n%d\n%d", qWnPiE8zx[cW5JFA2E].uTwunispY, fTFIkGmWa0U, gkE64CY9DAa);
    else
        for (imjEqazsPN = 0; imjEqazsPN < n; imjEqazsPN++)
            if (!(fTFIkGmWa0U != eCAwzsVF0T[imjEqazsPN])) {
                printf ("%s\n%d\n%d", qWnPiE8zx[imjEqazsPN].uTwunispY, fTFIkGmWa0U, gkE64CY9DAa);
                break;
            }
    return 0;
}

int f (struct   student s) {
    int gkE64CY9DAa;
    gkE64CY9DAa = 0;
    if (80 < s.B0HD2tWbmUf && 1 <= s.paper)
        gkE64CY9DAa = gkE64CY9DAa + 8000;
    if (s.B0HD2tWbmUf > 85 && 80 < s.aNMdET)
        gkE64CY9DAa = gkE64CY9DAa + 4000;
    if (s.B0HD2tWbmUf > 90)
        gkE64CY9DAa = gkE64CY9DAa + 2000;
    if (s.B0HD2tWbmUf > 85 && s.wFVKe1bI == 'Y')
        gkE64CY9DAa = gkE64CY9DAa + 1000;
    if (s.aNMdET > 80 && s.lDUiQrAG == 'Y')
        gkE64CY9DAa = gkE64CY9DAa + 850;
    return gkE64CY9DAa;
}

