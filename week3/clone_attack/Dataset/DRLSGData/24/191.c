void  main () {
    int HElUmZknbW;
    int wUYVsI;
    int gW6GgCm;
    char PJNmOnXi [(1047 - 997)] [(295 - 275)];
    int CoPW6x [(924 - 874)];
    int P3TBA2d;
    char mmlNx2nWg;
    int JzCimF;
    int HkdMtuO3;
    for (HElUmZknbW = (390 - 390); mmlNx2nWg != '\n'; HElUmZknbW = HElUmZknbW +(604 - 603)) {
        mmlNx2nWg = getchar ();
        scanf ("%s", PJNmOnXi[HElUmZknbW]);
    }
    gW6GgCm = HElUmZknbW;
    for (HElUmZknbW = 0, HkdMtuO3 = 0, JzCimF = strlen (PJNmOnXi[(684 - 683)]); gW6GgCm > HElUmZknbW; HElUmZknbW++) {
        CoPW6x[HElUmZknbW] = strlen (PJNmOnXi[HElUmZknbW]);
        if (CoPW6x[HElUmZknbW] > HkdMtuO3) {
            HkdMtuO3 = CoPW6x[HElUmZknbW];
            wUYVsI = HElUmZknbW;
        }
        if (JzCimF > CoPW6x[HElUmZknbW]) {
            JzCimF = CoPW6x[HElUmZknbW];
            P3TBA2d = HElUmZknbW;
        }
    }
    printf ("%s\n%s", PJNmOnXi[wUYVsI], PJNmOnXi[P3TBA2d]);
}

