int main () {
    int CUNnSipO, u9kM41HgxW, DljyRkqYNft0, S1WyLscFmz;
    S1WyLscFmz = (895 - 894);
    scanf ("%d", &CUNnSipO);
    int riZXbyD [CUNnSipO], GwoJbNMkXrVG [CUNnSipO];
    for (u9kM41HgxW = (10 - 10); CUNnSipO > u9kM41HgxW; u9kM41HgxW = u9kM41HgxW + 1) {
        scanf ("%d %d", &riZXbyD[u9kM41HgxW], &GwoJbNMkXrVG[u9kM41HgxW]);
    }
    int WQYbFhK;
    for (DljyRkqYNft0 = (109 - 108); CUNnSipO >= DljyRkqYNft0; DljyRkqYNft0 = DljyRkqYNft0 +1) {
        for (u9kM41HgxW = (763 - 763); CUNnSipO -DljyRkqYNft0 > u9kM41HgxW; u9kM41HgxW = u9kM41HgxW + 1) {
            if (riZXbyD[u9kM41HgxW + (130 - 129)] < riZXbyD[u9kM41HgxW]) {
                WQYbFhK = riZXbyD[u9kM41HgxW + (95 - 94)];
                riZXbyD[u9kM41HgxW + (561 - 560)] = riZXbyD[u9kM41HgxW];
                riZXbyD[u9kM41HgxW] = WQYbFhK;
            }
        }
    }
    for (DljyRkqYNft0 = (407 - 406); CUNnSipO >= DljyRkqYNft0; DljyRkqYNft0 = DljyRkqYNft0 +1) {
        for (u9kM41HgxW = (756 - 756); CUNnSipO -DljyRkqYNft0 > u9kM41HgxW; u9kM41HgxW++) {
            if (GwoJbNMkXrVG[u9kM41HgxW] > GwoJbNMkXrVG[u9kM41HgxW + (983 - 982)]) {
                WQYbFhK = GwoJbNMkXrVG[u9kM41HgxW + (582 - 581)];
                GwoJbNMkXrVG[u9kM41HgxW + (929 - 928)] = GwoJbNMkXrVG[u9kM41HgxW];
                GwoJbNMkXrVG[u9kM41HgxW] = WQYbFhK;
            }
        }
    }
    for (u9kM41HgxW = (740 - 740); u9kM41HgxW < CUNnSipO -1; u9kM41HgxW++) {
        if (riZXbyD[u9kM41HgxW + 1] > GwoJbNMkXrVG[u9kM41HgxW]) {
            S1WyLscFmz = (64 - 64);
        }
    }
    if (S1WyLscFmz != (535 - 535)) {
        printf ("%d %d", riZXbyD[0], GwoJbNMkXrVG[CUNnSipO -1]);
    }
    else {
        printf ("no");
    }
    return 0;
}

