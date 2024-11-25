int main () {
    double  a [(889 - 844)], m;
    int p2QuoK4jH;
    int HCc087QKod;
    int i;
    int lc5ASCJV;
    int HRxWl2g;
    p2QuoK4jH = (427 - 426);
    int LdiHs3bQ5hA [(503 - 493)];
    int oryPDL9VGJ [10];
    int nbVzjunC [10];
    int b [45];
    int c [45];
    scanf ("%d", &HCc087QKod);
    for (i = (706 - 705); HCc087QKod >= i; i++) {
        scanf ("%d %d %d", &(LdiHs3bQ5hA[i]), &(oryPDL9VGJ[i]), &(nbVzjunC[i]));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (i = (912 - 911); HCc087QKod -(330 - 329) >= i; i++) {
        for (HRxWl2g = i + (216 - 215); HCc087QKod >= HRxWl2g; HRxWl2g++) {
            a[p2QuoK4jH] = sqrt ((LdiHs3bQ5hA[i] - LdiHs3bQ5hA[HRxWl2g]) * (LdiHs3bQ5hA[i] - LdiHs3bQ5hA[HRxWl2g]) + (oryPDL9VGJ[i] - oryPDL9VGJ[HRxWl2g]) * (oryPDL9VGJ[i] - oryPDL9VGJ[HRxWl2g]) + (nbVzjunC[i] - nbVzjunC[HRxWl2g]) * (nbVzjunC[i] - nbVzjunC[HRxWl2g]));
            b[p2QuoK4jH] = i;
            c[p2QuoK4jH] = HRxWl2g;
            p2QuoK4jH++;
        };
    }
    p2QuoK4jH = p2QuoK4jH - (925 - 924);
    for (HRxWl2g = (474 - 473); HRxWl2g <= p2QuoK4jH - (53 - 52); HRxWl2g++) {
        for (i = 1; i <= p2QuoK4jH - HRxWl2g; i++) {
            if (a[i] < a[i + 1]) {
                m = a[i];
                a[i] = a[i + 1];
                a[i + 1] = m;
                lc5ASCJV = b[i];
                b[i] = b[i + 1];
                b[i + 1] = lc5ASCJV;
                lc5ASCJV = c[i];
                c[i] = c[i + 1];
                c[i + 1] = lc5ASCJV;
            };
        };
    }
    for (HRxWl2g = 1; HRxWl2g <= p2QuoK4jH; HRxWl2g++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", LdiHs3bQ5hA[b[HRxWl2g]], oryPDL9VGJ[b[HRxWl2g]], nbVzjunC[b[HRxWl2g]], LdiHs3bQ5hA[c[HRxWl2g]], oryPDL9VGJ[c[HRxWl2g]], nbVzjunC[c[HRxWl2g]], a[HRxWl2g]);
    }
    return 0;
}

