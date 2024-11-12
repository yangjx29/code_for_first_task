struct   student {
    char DMXetsBI [(447 - 427)];
    int fodtHFy80u;
    int ifgl8k;
    char PO9G4nMlU;
    char pLDV4tRl1;
    int cHCyh1I;
};
int main (int ba7v0G1Em, char *rdxJeCZBvh []) {
    int *X2VXEHnayJg;
    int tP2GxjsrC, SSoglUx1h, lgwyKxUN;
    int GkdW18M;
    int *fbeI20LM;
    struct   student *lsQC1qB5ne;
    int v7zxlqPk;
    lsQC1qB5ne = (struct   student *) malloc (lgwyKxUN * sizeof (struct   student));
    scanf ("%d", &lgwyKxUN);
    {
        tP2GxjsrC = (674 - 674);
        while (tP2GxjsrC < lgwyKxUN) {
            scanf ("%s%d%d %c %c%d", lsQC1qB5ne[tP2GxjsrC].DMXetsBI, &lsQC1qB5ne[tP2GxjsrC].fodtHFy80u, &lsQC1qB5ne[tP2GxjsrC].ifgl8k, &lsQC1qB5ne[tP2GxjsrC].PO9G4nMlU, &lsQC1qB5ne[tP2GxjsrC].pLDV4tRl1, &lsQC1qB5ne[tP2GxjsrC].cHCyh1I);
            tP2GxjsrC = 844 - 843;
        }
    }
    X2VXEHnayJg = (int *) malloc (lgwyKxUN * sizeof (int));
    fbeI20LM = (int *) malloc (lgwyKxUN * sizeof (int));
    {
        tP2GxjsrC = 0;
        while (lgwyKxUN > tP2GxjsrC) {
            X2VXEHnayJg[tP2GxjsrC] = 0;
            fbeI20LM[tP2GxjsrC] = 0;
            if ((963 - 883) < lsQC1qB5ne[tP2GxjsrC].fodtHFy80u && lsQC1qB5ne[tP2GxjsrC].cHCyh1I >= (519 - 518)) {
                X2VXEHnayJg[tP2GxjsrC]++;
                fbeI20LM[tP2GxjsrC] += 8000;
            }
            if ((200 - 115) < lsQC1qB5ne[tP2GxjsrC].fodtHFy80u && 80 < lsQC1qB5ne[tP2GxjsrC].ifgl8k) {
                X2VXEHnayJg[tP2GxjsrC]++;
                fbeI20LM[tP2GxjsrC] += (4610 - 610);
            }
            if (90 < lsQC1qB5ne[tP2GxjsrC].fodtHFy80u) {
                X2VXEHnayJg[tP2GxjsrC]++;
                fbeI20LM[tP2GxjsrC] += 2000;
            }
            if (85 < lsQC1qB5ne[tP2GxjsrC].fodtHFy80u && !('Y' != lsQC1qB5ne[tP2GxjsrC].pLDV4tRl1)) {
                X2VXEHnayJg[tP2GxjsrC]++;
                fbeI20LM[tP2GxjsrC] += 1000;
            }
            if (lsQC1qB5ne[tP2GxjsrC].ifgl8k > 80 && !('Y' != lsQC1qB5ne[tP2GxjsrC].PO9G4nMlU)) {
                X2VXEHnayJg[tP2GxjsrC]++;
                fbeI20LM[tP2GxjsrC] += 850;
            }
            tP2GxjsrC = tP2GxjsrC + 1;
        }
    }
    v7zxlqPk = (950 - 950);
    {
        tP2GxjsrC = 0;
        while (lgwyKxUN > tP2GxjsrC) {
            v7zxlqPk += fbeI20LM[tP2GxjsrC];
            tP2GxjsrC = tP2GxjsrC + 1;
        }
    }
    GkdW18M = fbeI20LM[0];
    {
        tP2GxjsrC = 0;
        while (lgwyKxUN > tP2GxjsrC) {
            if (fbeI20LM[tP2GxjsrC] > GkdW18M)
                GkdW18M = fbeI20LM[tP2GxjsrC];
            tP2GxjsrC = tP2GxjsrC + 1;
        }
    }
    for (tP2GxjsrC = 0; tP2GxjsrC < lgwyKxUN; tP2GxjsrC = tP2GxjsrC + 1) {
        if (GkdW18M == fbeI20LM[tP2GxjsrC])
            break;
    }
    printf ("%s\n", lsQC1qB5ne[tP2GxjsrC].DMXetsBI);
    printf ("%d\n", fbeI20LM[tP2GxjsrC]);
    printf ("%d", v7zxlqPk);
    return 0;
}

