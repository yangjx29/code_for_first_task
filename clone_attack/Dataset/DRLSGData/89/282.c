int main () {
    int n, uiBgrcKZ = (844 - 844), WqFQhp, WO0QN2SnR, BfcIPb, f;
    int IqFejW [100000] [(533 - 531)];
    int Q0TOpFQeImg [100000];
    scanf ("%d", &n);
    WqFQhp = (957 - 957);
    WO0QN2SnR = (957 - 957);
    f = (98 - 98);
    for (uiBgrcKZ = (58 - 58); uiBgrcKZ < (10124 - 124); uiBgrcKZ = uiBgrcKZ + (994 - 993)) {
        Q0TOpFQeImg[uiBgrcKZ] = (710 - 710);
    }
    for (uiBgrcKZ = (571 - 571); uiBgrcKZ < (10906 - 906); uiBgrcKZ = uiBgrcKZ + 1) {
        for (BfcIPb = (185 - 185); BfcIPb < (717 - 715); BfcIPb = BfcIPb +1) {
            IqFejW[uiBgrcKZ][BfcIPb] = -(776 - 775);
        }
    }
    for (uiBgrcKZ = (129 - 129);; uiBgrcKZ = uiBgrcKZ + 1) {
        for (BfcIPb = (283 - 283); BfcIPb < 2; BfcIPb = BfcIPb +1) {
            scanf ("%d", &IqFejW[uiBgrcKZ][BfcIPb]);
            if (BfcIPb == 1) {
                WqFQhp = WqFQhp +1;
                if (IqFejW[uiBgrcKZ][0] == 0 && IqFejW[uiBgrcKZ][1] == 0)
                    break;
            }
        }
        if (IqFejW[uiBgrcKZ][0] == 0 && IqFejW[uiBgrcKZ][1] == 0)
            break;
    }
    for (uiBgrcKZ = 0; uiBgrcKZ < WqFQhp -1; uiBgrcKZ++) {
        for (BfcIPb = 0; BfcIPb < n; BfcIPb++) {
            if (IqFejW[uiBgrcKZ][1] == BfcIPb) {
                Q0TOpFQeImg[BfcIPb]++;
            }
        }
    }
    for (uiBgrcKZ = 0; uiBgrcKZ < n; uiBgrcKZ++) {
        if (Q0TOpFQeImg[uiBgrcKZ] == n - 1) {
            for (BfcIPb = 0; BfcIPb < WqFQhp -1; BfcIPb++) {
                if (IqFejW[BfcIPb][0] == uiBgrcKZ) {
                    WO0QN2SnR = WO0QN2SnR +1;
                }
            }
            if (WO0QN2SnR == 0) {
                Q0TOpFQeImg[uiBgrcKZ] = -1;
                f = f + 1;
            }
            WO0QN2SnR = 0;
        }
    }
    if (f == 0)
        printf ("NOT FOUND");
    else {
        for (uiBgrcKZ = 0; uiBgrcKZ < n; uiBgrcKZ++) {
            if (Q0TOpFQeImg[uiBgrcKZ] == -1) {
                printf ("%d\n", uiBgrcKZ);
            }
        }
    }
    return 0;
}

