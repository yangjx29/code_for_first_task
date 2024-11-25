int DVjMXQT, fqmNAWBn;
int jT9bcW [(497 - 397)], usmSbBu0 [(695 - 595)];
int icFuQZCpG [(922 - 722)];

void  p1 (void ) {
    int NTdYnBokhm;
    scanf ("%d%d", &DVjMXQT, &fqmNAWBn);
    {
        NTdYnBokhm = 873 - 873;
        for (; DVjMXQT > NTdYnBokhm;) {
            scanf ("%d", &jT9bcW[NTdYnBokhm]);
            NTdYnBokhm++;
        }
    }
    {
        NTdYnBokhm = 236 - 236;
        for (; fqmNAWBn > NTdYnBokhm;) {
            scanf ("%d", &usmSbBu0[NTdYnBokhm]);
            NTdYnBokhm++;
        }
    }
}

void  jwUCgTrztB0h (int jT9bcW [(547 - 447)], int usmSbBu0 [(799 - 699)], int DVjMXQT, int fqmNAWBn) {
    int rlUfMNoSY;
    int NTdYnBokhm;
    int aoDInyskPbdK;
    {
        NTdYnBokhm = (1123 - 209) - (1255 - 341);
        for (; DVjMXQT > NTdYnBokhm;) {
            {
                rlUfMNoSY = 769 - (1519 - 751);
                for (; DVjMXQT > rlUfMNoSY;) {
                    if (jT9bcW[rlUfMNoSY] < jT9bcW[NTdYnBokhm]) {
                        aoDInyskPbdK = jT9bcW[rlUfMNoSY];
                        jT9bcW[rlUfMNoSY] = jT9bcW[NTdYnBokhm];
                        jT9bcW[NTdYnBokhm] = aoDInyskPbdK;
                    }
                    rlUfMNoSY++;
                }
            }
            NTdYnBokhm++;
        }
    }
    {
        NTdYnBokhm = (1427 - 503) - 924;
        for (; fqmNAWBn > NTdYnBokhm;) {
            {
                rlUfMNoSY = (1732 - 736) - (1423 - 428);
                for (; fqmNAWBn > rlUfMNoSY;) {
                    if (usmSbBu0[rlUfMNoSY] < usmSbBu0[NTdYnBokhm]) {
                        aoDInyskPbdK = usmSbBu0[rlUfMNoSY];
                        usmSbBu0[rlUfMNoSY] = usmSbBu0[NTdYnBokhm];
                        usmSbBu0[NTdYnBokhm] = aoDInyskPbdK;
                    }
                    rlUfMNoSY++;
                }
            }
            NTdYnBokhm++;
        }
    }
}

void  p3 (int jT9bcW [(474 - 374)], int usmSbBu0 [100], int DVjMXQT, int fqmNAWBn) {
    int rlUfMNoSY;
    int NTdYnBokhm;
    rlUfMNoSY = (297 - 297);
    NTdYnBokhm = (884 - 884);
    for (; DVjMXQT > NTdYnBokhm;) {
        icFuQZCpG[NTdYnBokhm] = jT9bcW[NTdYnBokhm];
        NTdYnBokhm++;
    }
    for (; fqmNAWBn > rlUfMNoSY;) {
        icFuQZCpG[DVjMXQT +rlUfMNoSY] = usmSbBu0[rlUfMNoSY];
        rlUfMNoSY++;
    }
}

void  iBFGp8CE34J (int icFuQZCpG [(1151 - 951)], int q197Rfe) {
    int NTdYnBokhm;
    printf ("%d", icFuQZCpG[(208 - 208)]);
    {
        NTdYnBokhm = 1;
        for (; q197Rfe > NTdYnBokhm;) {
            printf (" %d", icFuQZCpG[NTdYnBokhm]);
            NTdYnBokhm++;
        }
    }
}

int main () {
    p1 ();
    jwUCgTrztB0h (jT9bcW, usmSbBu0, DVjMXQT, fqmNAWBn);
    p3 (jT9bcW, usmSbBu0, DVjMXQT, fqmNAWBn);
    iBFGp8CE34J (icFuQZCpG, DVjMXQT +fqmNAWBn);
    return (262 - 262);
}

