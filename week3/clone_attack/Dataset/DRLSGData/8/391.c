int *ZSzK7fJtRg0 (int CRrAJSK4q) {
    int *srgnH2pK, k8M0Zp5;
    srgnH2pK = (int *) malloc (CRrAJSK4q * sizeof (int));
    {
        k8M0Zp5 = (938 - 938);
        for (; k8M0Zp5 < CRrAJSK4q;) {
            scanf ("%d", &srgnH2pK[k8M0Zp5]);
            k8M0Zp5 = k8M0Zp5 + 1;
        }
    }
    return srgnH2pK;
}

void  iJHbU6VRP (int *srgnH2pK, int CRrAJSK4q) {
    int k8M0Zp5, siahNS, hgvmOuADj1I;
    {
        k8M0Zp5 = CRrAJSK4q -1;
        for (; k8M0Zp5 > (759 - 759);) {
            {
                siahNS = 0;
                for (; siahNS < k8M0Zp5;) {
                    if (*(srgnH2pK + siahNS) > *(srgnH2pK + siahNS + 1)) {
                        hgvmOuADj1I = *(srgnH2pK + siahNS);
                        *(srgnH2pK + siahNS) = *(srgnH2pK + siahNS + 1);
                        *(srgnH2pK + siahNS + 1) = hgvmOuADj1I;
                    }
                    siahNS = siahNS + 1;
                }
            }
            k8M0Zp5 = k8M0Zp5 - 1;
        }
    }
}

int *B2lZ9WzJ (int *q2aCVWe1, int *eTxL3NB, int CRrAJSK4q, int q6NmGJRfeIFD) {
    int k8M0Zp5;
    int *jy6vs43iwM = (int *) malloc ((CRrAJSK4q +q6NmGJRfeIFD) * sizeof (int));
    {
        k8M0Zp5 = 0;
        for (; k8M0Zp5 < CRrAJSK4q;) {
            *(jy6vs43iwM + k8M0Zp5) = *(q2aCVWe1 + k8M0Zp5);
            k8M0Zp5 = k8M0Zp5 + 1;
        }
    }
    {
        k8M0Zp5 = 0;
        for (; k8M0Zp5 < q6NmGJRfeIFD;) {
            *(jy6vs43iwM + CRrAJSK4q +k8M0Zp5) = *(eTxL3NB + k8M0Zp5);
            k8M0Zp5 = k8M0Zp5 + 1;
        }
    }
    return jy6vs43iwM;
}

void  fYiASUes (int *jy6vs43iwM, int x) {
    int k8M0Zp5;
    {
        k8M0Zp5 = 0;
        for (; k8M0Zp5 < x;) {
            if (k8M0Zp5 == 0)
                printf ("%d", jy6vs43iwM[0]);
            else
                printf (" %d", jy6vs43iwM[k8M0Zp5]);
            k8M0Zp5 = k8M0Zp5 + 1;
        }
    }
}

main () {
    int CRrAJSK4q, q6NmGJRfeIFD, *q2aCVWe1, *eTxL3NB, *jy6vs43iwM;
    free (q2aCVWe1);
    free (eTxL3NB);
    free (jy6vs43iwM);
    scanf ("%d", &CRrAJSK4q);
    q2aCVWe1 = ZSzK7fJtRg0 (CRrAJSK4q);
    iJHbU6VRP (q2aCVWe1, CRrAJSK4q);
    scanf ("%d", &q6NmGJRfeIFD);
    eTxL3NB = ZSzK7fJtRg0 (q6NmGJRfeIFD);
    iJHbU6VRP (eTxL3NB, q6NmGJRfeIFD);
    jy6vs43iwM = B2lZ9WzJ (q2aCVWe1, eTxL3NB, CRrAJSK4q, q6NmGJRfeIFD);
    fYiASUes (jy6vs43iwM, (CRrAJSK4q +q6NmGJRfeIFD));
}

