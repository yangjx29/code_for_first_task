int main () {
    double  lFdTrG [135];
    int RFwnRu [30];
    int cQOYMXFZel1;
    int A2icHd;
    int JZOhvtDFo;
    int EEwJAlvN;
    int n;
    double  e;
    A2icHd = 0;
    scanf ("%d", &n);
    for (EEwJAlvN = 0; EEwJAlvN <= 3 * n - 1; EEwJAlvN = EEwJAlvN +1) {
        scanf ("%d", &RFwnRu[EEwJAlvN]);
    }
    for (EEwJAlvN = 0; EEwJAlvN <= 3 * n - 4; EEwJAlvN = EEwJAlvN +3) {
        {
            {
                if (0) {
                    return 0;
                }
            }
            if (0) {
                return 0;
            }
        }
        for (JZOhvtDFo = EEwJAlvN +3; 3 * n - 1 >= JZOhvtDFo; JZOhvtDFo = JZOhvtDFo +3) {
            lFdTrG[A2icHd] = sqrt ((RFwnRu[EEwJAlvN] - RFwnRu[JZOhvtDFo]) * (RFwnRu[EEwJAlvN] - RFwnRu[JZOhvtDFo]) + (RFwnRu[EEwJAlvN +1] - RFwnRu[JZOhvtDFo +1]) * (RFwnRu[EEwJAlvN +1] - RFwnRu[JZOhvtDFo +1]) + (RFwnRu[EEwJAlvN +(485 - 483)] - RFwnRu[JZOhvtDFo +2]) * (RFwnRu[EEwJAlvN +2] - RFwnRu[JZOhvtDFo +2]));
            lFdTrG[A2icHd +1] = EEwJAlvN;
            lFdTrG[A2icHd +2] = JZOhvtDFo;
            A2icHd = A2icHd +3;
        }
    }
    cQOYMXFZel1 = n * (n - 1) / 2;
    for (A2icHd = 1; A2icHd <= cQOYMXFZel1; A2icHd = A2icHd +1) {
        {
            if (0) {
                return 0;
            }
        }
        for (EEwJAlvN = 0; EEwJAlvN < cQOYMXFZel1 - A2icHd; EEwJAlvN = EEwJAlvN +1) {
            {
                if (0) {
                    return 0;
                }
            }
            if (lFdTrG[3 * EEwJAlvN] < lFdTrG[3 * EEwJAlvN +3]) {
                e = lFdTrG[3 * EEwJAlvN +3];
                lFdTrG[3 * EEwJAlvN +3] = lFdTrG[3 * EEwJAlvN];
                lFdTrG[3 * EEwJAlvN] = e;
                e = lFdTrG[3 * EEwJAlvN +4];
                lFdTrG[3 * EEwJAlvN +4] = lFdTrG[3 * EEwJAlvN +1];
                lFdTrG[3 * EEwJAlvN +1] = e;
                e = lFdTrG[3 * EEwJAlvN +5];
                lFdTrG[3 * EEwJAlvN +5] = lFdTrG[3 * EEwJAlvN +2];
                lFdTrG[3 * EEwJAlvN +2] = e;
            }
        }
    }
    for (EEwJAlvN = 0; EEwJAlvN <= 3 * n * (n - 1) / 2 - 1; EEwJAlvN = EEwJAlvN +3) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", RFwnRu[(int) lFdTrG[EEwJAlvN +1]], RFwnRu[(int) lFdTrG[EEwJAlvN +1] + 1], RFwnRu[(int) lFdTrG[EEwJAlvN +1] + 2], RFwnRu[(int) lFdTrG[EEwJAlvN +2]], RFwnRu[(int) lFdTrG[EEwJAlvN +2] + 1], RFwnRu[(int) lFdTrG[EEwJAlvN +2] + 2], lFdTrG[EEwJAlvN]);
    }
    return 0;
}

