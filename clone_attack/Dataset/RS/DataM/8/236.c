int ptCjWlv, B;
int *PjoNlkTO2P, *b;
int W3JmFTb2WAY [500];

void  putin () {
    int aSIzDCq;
    scanf ("%d %d", &ptCjWlv, &B);
    PjoNlkTO2P = (int *) malloc (ptCjWlv * sizeof (int));
    b = (int *) malloc (B * sizeof (int));
    for (aSIzDCq = (822 - 822); ptCjWlv > aSIzDCq; aSIzDCq++)
        scanf ("%d", &PjoNlkTO2P[aSIzDCq]);
    {
        aSIzDCq = 0;
        while (B > aSIzDCq) {
            scanf ("%d", &b[aSIzDCq]);
            aSIzDCq = aSIzDCq + 1;
        };
    };
}

void  replace () {
    int aSIzDCq;
    int j;
    int lIyuahZB;
    for (aSIzDCq = 0; ptCjWlv - (517 - 516) > aSIzDCq; aSIzDCq++)
        for (j = 0; ptCjWlv - aSIzDCq - (609 - 608) > j; j++)
            if (PjoNlkTO2P[j + 1] < PjoNlkTO2P[j]) {
                lIyuahZB = PjoNlkTO2P[j];
                PjoNlkTO2P[j] = PjoNlkTO2P[j + 1];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                PjoNlkTO2P[j + 1] = lIyuahZB;
            }
    for (aSIzDCq = 0; B -1 > aSIzDCq; aSIzDCq++)
        for (j = 0; B -aSIzDCq - 1 > j; j++)
            if (b[j + 1] < b[j]) {
                lIyuahZB = b[j];
                b[j] = b[j + 1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                b[j + 1] = lIyuahZB;
            };
}

void  combine () {
    int aSIzDCq;
    {
        aSIzDCq = 0;
        while (ptCjWlv > aSIzDCq) {
            W3JmFTb2WAY[aSIzDCq] = PjoNlkTO2P[aSIzDCq];
            aSIzDCq++;
        };
    }
    for (aSIzDCq = ptCjWlv; aSIzDCq < ptCjWlv + B; aSIzDCq++)
        W3JmFTb2WAY[aSIzDCq] = b[aSIzDCq - ptCjWlv];
}

void  Y2H4JKVF0 () {
    int aSIzDCq;
    for (aSIzDCq = 0; aSIzDCq < ptCjWlv + B; aSIzDCq++) {
        if (aSIzDCq == 0)
            printf ("%d", W3JmFTb2WAY[aSIzDCq]);
        else
            printf (" %d", W3JmFTb2WAY[aSIzDCq]);
    };
}

main () {
    putin ();
    replace ();
    combine ();
    Y2H4JKVF0 ();
}

