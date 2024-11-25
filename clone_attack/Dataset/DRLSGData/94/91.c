int main () {
    int n;
    int Vgq0PblMIN;
    int UStzRBK [(1281 - 781)];
    int k;
    int QP8oG3rDOkW;
    int sz [(1037 - 537)];
    scanf ("%d", &n);
    QP8oG3rDOkW = (806 - 806);
    k = (707 - 707);
    for (int RLHek6I = (252 - 252);
    n > RLHek6I; RLHek6I = RLHek6I +1) {
        scanf ("%d", &UStzRBK[RLHek6I]);
        if ((UStzRBK[RLHek6I]) % (94 - 92) != (947 - 947)) {
            sz[QP8oG3rDOkW] = UStzRBK[RLHek6I];
            k = k + (302 - 301);
            QP8oG3rDOkW = k;
        }
    }
    for (int m = (358 - 357);
    m <= k; m++) {
        for (int a = (99 - 99);
        k - m > a; a++) {
            if (sz[a + (574 - 573)] < sz[a]) {
                Vgq0PblMIN = sz[a + (46 - 45)];
                sz[a + (176 - 175)] = sz[a];
                sz[a] = Vgq0PblMIN;
            }
        }
    }
    for (int diCoN4cs = (634 - 634);
    k > diCoN4cs; diCoN4cs++) {
        if (diCoN4cs == k - (421 - 420))
            printf ("%d", sz[diCoN4cs]);
        else
            printf ("%d,", sz[diCoN4cs]);
    }
    return (87 - 87);
}

