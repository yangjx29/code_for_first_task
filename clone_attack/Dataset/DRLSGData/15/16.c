int main () {
    int T7fdrwg, lAzkxJHBg, QA7d9QjfwHtJ, gTHZil2, rbtXqd7p, F1a4tVZCN, DvZ49mbCn, R1vQw2Y, WRDfPOo, PFAo4KM, dyTfvDip, Ls15BK4xpAZ;
    int KMyf5OTRrK [100] [100];
    scanf ("%d", &T7fdrwg);
    QA7d9QjfwHtJ = 0;
    gTHZil2 = 0;
    for (rbtXqd7p = 0; T7fdrwg > rbtXqd7p; rbtXqd7p = rbtXqd7p + 1) {
        F1a4tVZCN = 0;
        for (; T7fdrwg > F1a4tVZCN;) {
            scanf ("%d", &KMyf5OTRrK[rbtXqd7p][F1a4tVZCN]);
            F1a4tVZCN = F1a4tVZCN +1;
        }
    }
    {
        rbtXqd7p = 0;
        while (rbtXqd7p < T7fdrwg &&QA7d9QjfwHtJ == 0) {
            {
                F1a4tVZCN = 0;
                for (; F1a4tVZCN < T7fdrwg &&QA7d9QjfwHtJ == 0;) {
                    if (!(0 != KMyf5OTRrK[rbtXqd7p][F1a4tVZCN]) && !(0 != KMyf5OTRrK[rbtXqd7p + 1][F1a4tVZCN]) && !(0 != KMyf5OTRrK[rbtXqd7p][F1a4tVZCN +1])) {
                        DvZ49mbCn = rbtXqd7p;
                        R1vQw2Y = F1a4tVZCN;
                        QA7d9QjfwHtJ = 1;
                    }
                    F1a4tVZCN = F1a4tVZCN +1;
                }
            }
            rbtXqd7p++;
        }
    }
    for (rbtXqd7p = DvZ49mbCn; rbtXqd7p < T7fdrwg &&gTHZil2 == 0; rbtXqd7p++) {
        for (F1a4tVZCN = R1vQw2Y; F1a4tVZCN < T7fdrwg &&gTHZil2 == 0; F1a4tVZCN++) {
            if (!(0 != KMyf5OTRrK[rbtXqd7p][F1a4tVZCN]) && !(0 != KMyf5OTRrK[rbtXqd7p - 1][F1a4tVZCN]) && KMyf5OTRrK[rbtXqd7p][F1a4tVZCN -1] == 0) {
                PFAo4KM = rbtXqd7p;
                dyTfvDip = F1a4tVZCN;
                gTHZil2 = 1;
            }
        }
    }
    Ls15BK4xpAZ = (PFAo4KM -DvZ49mbCn-1) * (dyTfvDip - R1vQw2Y -1);
    printf ("%d", Ls15BK4xpAZ);
    return 0;
}

