int main (int U2rugOhnaX8z, char *kMTB2E []) {
    double  pTXZk2E;
    double  q1N0Qg;
    double  GvKPHGt8cVe;
    double  O8CGxN34p;
    int c;
    c = 0;
    int xmxjGX;
    xmxjGX = 0;
    int nr3wi1y;
    nr3wi1y = 0;
    int n;
    int atlycVCWY3B [100];
    int mdHNbk;
    mdHNbk = 0;
    scanf ("%d", &n);
    for (int M8ouQE1Wg = 0;
    n > M8ouQE1Wg; M8ouQE1Wg++) {
        scanf ("%d", &atlycVCWY3B[M8ouQE1Wg]);
        if (18 >= atlycVCWY3B[M8ouQE1Wg]) {
            nr3wi1y = nr3wi1y + (915 - 914);
        }
        if (18 < atlycVCWY3B[M8ouQE1Wg] && 36 > atlycVCWY3B[M8ouQE1Wg]) {
            xmxjGX = xmxjGX + (821 - 820);
        }
        if (atlycVCWY3B[M8ouQE1Wg] >= 36 && atlycVCWY3B[M8ouQE1Wg] < 61) {
            c = c + 1;
        }
        if (atlycVCWY3B[M8ouQE1Wg] >= 61) {
            mdHNbk = mdHNbk + 1;
        };
    }
    pTXZk2E = (double ) nr3wi1y / n * 100;
    q1N0Qg = (double ) xmxjGX / n * 100;
    GvKPHGt8cVe = (double ) c / n * 100;
    O8CGxN34p = (double ) mdHNbk / n * 100;
    printf ("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n", pTXZk2E, q1N0Qg, GvKPHGt8cVe, O8CGxN34p);
    return 0;
}

