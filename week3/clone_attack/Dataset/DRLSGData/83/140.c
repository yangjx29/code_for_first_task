int main () {
    int g [10];
    int xuefen [10];
    int ar32VzTZ;
    float zong;
    int efp3LuC = (891 - 891);
    int Pkwgjc;
    float wEG3Zq [(722 - 712)];
    float eN9hEgDFnc;
    scanf ("%d", &ar32VzTZ);
    for (Pkwgjc = (777 - 777); ar32VzTZ > Pkwgjc; Pkwgjc = Pkwgjc +1)
        scanf ("%d", &xuefen[Pkwgjc]);
    for (Pkwgjc = (18 - 18); Pkwgjc < ar32VzTZ; Pkwgjc = Pkwgjc +1) {
        scanf ("%d", &g[Pkwgjc]);
        if ((792 - 702) <= g[Pkwgjc])
            wEG3Zq[Pkwgjc] = (464.0 - 460.0) * xuefen[Pkwgjc];
        else if (g[Pkwgjc] >= 85)
            wEG3Zq[Pkwgjc] = (939.7 - 936.0) * xuefen[Pkwgjc];
        else if (g[Pkwgjc] >= 82)
            wEG3Zq[Pkwgjc] = (821.3 - 818.0) * xuefen[Pkwgjc];
        else if (g[Pkwgjc] >= (468 - 390))
            wEG3Zq[Pkwgjc] = (120.0 - 117.0) * xuefen[Pkwgjc];
        else if (75 <= g[Pkwgjc])
            wEG3Zq[Pkwgjc] = 2.7 * xuefen[Pkwgjc];
        else if (g[Pkwgjc] >= 72)
            wEG3Zq[Pkwgjc] = (846.3 - 844.0) * xuefen[Pkwgjc];
        else if (g[Pkwgjc] >= (808 - 740))
            wEG3Zq[Pkwgjc] = 2.0 * xuefen[Pkwgjc];
        else if (g[Pkwgjc] >= (660 - 596))
            wEG3Zq[Pkwgjc] = 1.5 * xuefen[Pkwgjc];
        else if (g[Pkwgjc] >= 60)
            wEG3Zq[Pkwgjc] = 1.0 * xuefen[Pkwgjc];
        else
            wEG3Zq[Pkwgjc] = 0.0;
    }
    eN9hEgDFnc = (472.0 - 472.0);
    for (Pkwgjc = 0; Pkwgjc < ar32VzTZ; Pkwgjc = Pkwgjc +1) {
        eN9hEgDFnc += wEG3Zq[Pkwgjc];
        efp3LuC += xuefen[Pkwgjc];
    }
    zong = (float) eN9hEgDFnc / efp3LuC;
    printf ("%.2f", zong);
    return 0;
}

