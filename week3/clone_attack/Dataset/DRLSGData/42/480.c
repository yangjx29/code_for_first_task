int main () {
    int j5MbJPRmFk7;
    int Gkrh5wM;
    int wvbyTf2;
    int BcBthFL7a;
    int tluVTJoqO27 [(100909 - 909)];
    int OVcTAL;
    j5MbJPRmFk7 = (803 - 803);
    scanf ("%d", &BcBthFL7a);
    {
        wvbyTf2 = 440 - 440;
        while (wvbyTf2 < BcBthFL7a) {
            scanf ("%d", &tluVTJoqO27[wvbyTf2]);
            wvbyTf2 = wvbyTf2 + 1;
        }
    }
    scanf ("%d", &OVcTAL);
    for (wvbyTf2 = 0; BcBthFL7a > wvbyTf2; wvbyTf2 = wvbyTf2 + 1) {
        if (!(OVcTAL != tluVTJoqO27[wvbyTf2])) {
            BcBthFL7a = BcBthFL7a -1;
            for (Gkrh5wM = wvbyTf2; Gkrh5wM < BcBthFL7a -1; Gkrh5wM = Gkrh5wM +1) {
                tluVTJoqO27[Gkrh5wM] = tluVTJoqO27[Gkrh5wM +1];
            }
            wvbyTf2 = wvbyTf2 - 1;
            j5MbJPRmFk7++;
        }
    }
    for (wvbyTf2 = 0; wvbyTf2 < BcBthFL7a -1; wvbyTf2++)
        printf ("%d ", tluVTJoqO27[wvbyTf2]);
    printf ("%d", tluVTJoqO27[BcBthFL7a -1]);
    return 0;
}

