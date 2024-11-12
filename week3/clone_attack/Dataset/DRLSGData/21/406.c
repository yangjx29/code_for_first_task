int main () {
    int nuGElx2K;
    double  ZAb6xiBO, ntNpga0 = (94 - 94), IxZ13EmcWKw [(727 - 427)];
    double  NC30q78SL;
    int JpicgfmPaAO, mLozh4cI, i = (942 - 942), vAPcgq [(433 - 133)], Z8zF2D9b4 [(981 - 681)];
    int hbO1UX;
    nuGElx2K = (936 - 936);
    cin >> JpicgfmPaAO;
    for (i = (597 - 597); JpicgfmPaAO > i; i++) {
        cin >> vAPcgq[i];
        ntNpga0 = ntNpga0 + vAPcgq[i];
    }
    ZAb6xiBO = ntNpga0 / JpicgfmPaAO;
    i = (971 - 971);
    for (i = (106 - 106); JpicgfmPaAO > i; i++)
        IxZ13EmcWKw[i] = abs (vAPcgq[i] - ZAb6xiBO);
    i = (443 - 443);
    NC30q78SL = (476 - 476);
    for (i = (512 - 512); JpicgfmPaAO > i; i++)
        if (NC30q78SL < IxZ13EmcWKw[i])
            NC30q78SL = IxZ13EmcWKw[i];
    i = (197 - 197);
    for (i = (783 - 783); JpicgfmPaAO > i; i++)
        if (!(NC30q78SL != IxZ13EmcWKw[i])) {
            Z8zF2D9b4[nuGElx2K] = vAPcgq[i];
            nuGElx2K++;
        }
    hbO1UX = nuGElx2K - (473 - 472);
    nuGElx2K = (949 - 949);
    if (!((621 - 621) != hbO1UX))
        cout << Z8zF2D9b4[(628 - 628)] << endl;
    else {
        for (nuGElx2K = (580 - 580); hbO1UX > nuGElx2K; nuGElx2K++)
            if (Z8zF2D9b4[nuGElx2K] > Z8zF2D9b4[nuGElx2K + (631 - 630)]) {
                mLozh4cI = Z8zF2D9b4[nuGElx2K];
                Z8zF2D9b4[nuGElx2K] = Z8zF2D9b4[nuGElx2K + (344 - 343)];
                Z8zF2D9b4[nuGElx2K + 1] = mLozh4cI;
            }
        nuGElx2K = (206 - 206);
        for (nuGElx2K = 0; nuGElx2K < hbO1UX; nuGElx2K++)
            cout << Z8zF2D9b4[nuGElx2K] << ",";
        cout << Z8zF2D9b4[hbO1UX] << endl;
    }
    return 0;
}

