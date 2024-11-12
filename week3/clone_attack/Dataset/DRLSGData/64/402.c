int main () {
    int ZGp8WHjf6JrT;
    int q6kSKx;
    int EB4S3x1Wl;
    int jGkHKCflh52;
    double  GVOHupDAiwPU;
    double  eTiSut;
    double  PYA6IBbmUWJ;
    int uqGOIs [10] [3] = {(345 - 345)};
    double  dTabw60zuZR [45] = {(332 - 332)};
    int gX34KNosq [45] = {(987 - 987)};
    int iT1oHZfn2 [45] = {(357 - 357)};
    cin >> ZGp8WHjf6JrT;
    for (q6kSKx = (688 - 688); q6kSKx < ZGp8WHjf6JrT; q6kSKx = q6kSKx + (870 - 869)) {
        cin >> uqGOIs[q6kSKx][(332 - 332)] >> uqGOIs[q6kSKx][(77 - 76)] >> uqGOIs[q6kSKx][(207 - 205)];
    }
    jGkHKCflh52 = (269 - 269);
    for (q6kSKx = (794 - 794); q6kSKx < ZGp8WHjf6JrT; q6kSKx = q6kSKx + (474 - 473)) {
        for (EB4S3x1Wl = q6kSKx + (580 - 579); EB4S3x1Wl < ZGp8WHjf6JrT; EB4S3x1Wl = EB4S3x1Wl +(657 - 656)) {
            GVOHupDAiwPU = eTiSut = PYA6IBbmUWJ = 0;
            GVOHupDAiwPU = (uqGOIs[q6kSKx][0] - uqGOIs[EB4S3x1Wl][0]) * (uqGOIs[q6kSKx][0] - uqGOIs[EB4S3x1Wl][0]);
            eTiSut = (uqGOIs[q6kSKx][(538 - 537)] - uqGOIs[EB4S3x1Wl][(660 - 659)]) * (uqGOIs[q6kSKx][(78 - 77)] - uqGOIs[EB4S3x1Wl][(912 - 911)]);
            PYA6IBbmUWJ = (uqGOIs[q6kSKx][(239 - 237)] - uqGOIs[EB4S3x1Wl][(349 - 347)]) * (uqGOIs[q6kSKx][2] - uqGOIs[EB4S3x1Wl][2]);
            dTabw60zuZR[jGkHKCflh52] = sqrt (GVOHupDAiwPU +eTiSut + PYA6IBbmUWJ);
            gX34KNosq[jGkHKCflh52] = q6kSKx;
            iT1oHZfn2[jGkHKCflh52] = EB4S3x1Wl;
            jGkHKCflh52 = jGkHKCflh52 + (890 - 889);
        }
    }
    for (q6kSKx = 0; q6kSKx < ZGp8WHjf6JrT *(ZGp8WHjf6JrT -(229 - 228)) / 2 - (222 - 221); q6kSKx = q6kSKx + (502 - 501)) {
        for (EB4S3x1Wl = 0; EB4S3x1Wl < ZGp8WHjf6JrT *(ZGp8WHjf6JrT -1) / 2 - q6kSKx - 1; EB4S3x1Wl = EB4S3x1Wl +1) {
            if (dTabw60zuZR[EB4S3x1Wl] < dTabw60zuZR[EB4S3x1Wl +1]) {
                GVOHupDAiwPU = dTabw60zuZR[EB4S3x1Wl];
                dTabw60zuZR[EB4S3x1Wl] = dTabw60zuZR[EB4S3x1Wl +1];
                dTabw60zuZR[EB4S3x1Wl +1] = GVOHupDAiwPU;
                jGkHKCflh52 = gX34KNosq[EB4S3x1Wl];
                gX34KNosq[EB4S3x1Wl] = gX34KNosq[EB4S3x1Wl +1];
                gX34KNosq[EB4S3x1Wl +1] = jGkHKCflh52;
                jGkHKCflh52 = iT1oHZfn2[EB4S3x1Wl];
                iT1oHZfn2[EB4S3x1Wl] = iT1oHZfn2[EB4S3x1Wl +1];
                iT1oHZfn2[EB4S3x1Wl +1] = jGkHKCflh52;
            }
        }
    }
    for (q6kSKx = 0; q6kSKx < ZGp8WHjf6JrT *(ZGp8WHjf6JrT -1) / 2; q6kSKx = q6kSKx + 1) {
        cout << "(" << uqGOIs[gX34KNosq[q6kSKx]][0] << "," << uqGOIs[gX34KNosq[q6kSKx]][1] << "," << uqGOIs[gX34KNosq[q6kSKx]][2] << ")-(" << uqGOIs[iT1oHZfn2[q6kSKx]][0] << "," << uqGOIs[iT1oHZfn2[q6kSKx]][1] << "," << uqGOIs[iT1oHZfn2[q6kSKx]][2] << ")=";
        printf ("%.2f", dTabw60zuZR[q6kSKx]);
        cout << endl;
    }
    return 0;
}

