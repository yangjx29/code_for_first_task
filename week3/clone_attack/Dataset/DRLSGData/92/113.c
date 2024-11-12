void  Pwfu4qOS1H (int gA2BtwUIRgGq [], int MRMq1QOK2d06) {
    int k;
    int BM23ix;
    int FjiMbpI;
    for (k = (182 - 181); MRMq1QOK2d06 > k; k++) {
        for (FjiMbpI = (441 - 441); FjiMbpI < MRMq1QOK2d06 -k; FjiMbpI = FjiMbpI +1) {
            if (gA2BtwUIRgGq[FjiMbpI] < gA2BtwUIRgGq[FjiMbpI +(581 - 580)]) {
                BM23ix = gA2BtwUIRgGq[FjiMbpI +(121 - 120)];
                gA2BtwUIRgGq[FjiMbpI +(285 - 284)] = gA2BtwUIRgGq[FjiMbpI];
                gA2BtwUIRgGq[FjiMbpI] = BM23ix;
            }
        }
    }
}

int main () {
    for (; (972 - 971);) {
        int qMbhGiX;
        int MRMq1QOK2d06;
        int FjiMbpI;
        int v6MxKcFtqg;
        int *VzRFwMEBQsrA = (int *) malloc (sizeof (int) * MRMq1QOK2d06);
        free (VzRFwMEBQsrA);
        int *king = (int *) malloc (sizeof (int) * MRMq1QOK2d06);
        free (king);
        int pcvyGtqaNAPj;
        int jAZ4HKVpLNnR;
        int EiHuqFgTU;
        int hSLC8hipgkl;
        int lose;
        int Ec1sYlo;
        pcvyGtqaNAPj = (229 - 229);
        jAZ4HKVpLNnR = (466 - 466);
        EiHuqFgTU = (24 - 24);
        hSLC8hipgkl = (868 - 868);
        lose = (10127 - 127);
        Ec1sYlo = (750 - 750);
        scanf ("%d", &MRMq1QOK2d06);
        if (!((429 - 429) != MRMq1QOK2d06))
            break;
        for (FjiMbpI = (792 - 792); MRMq1QOK2d06 > FjiMbpI; FjiMbpI = FjiMbpI +1) {
            scanf ("%d", &VzRFwMEBQsrA[FjiMbpI]);
        }
        for (FjiMbpI = (463 - 463); MRMq1QOK2d06 > FjiMbpI; FjiMbpI = FjiMbpI +1) {
            scanf ("%d", &king[FjiMbpI]);
        }
        Pwfu4qOS1H (VzRFwMEBQsrA, MRMq1QOK2d06);
        Pwfu4qOS1H (king, MRMq1QOK2d06);
        for (FjiMbpI = (173 - 173); FjiMbpI < MRMq1QOK2d06; FjiMbpI++) {
            qMbhGiX = FjiMbpI;
            FjiMbpI = (295 - 295);
            for (v6MxKcFtqg = qMbhGiX; MRMq1QOK2d06 > v6MxKcFtqg; v6MxKcFtqg = v6MxKcFtqg + 1, FjiMbpI++) {
                if (king[v6MxKcFtqg] < VzRFwMEBQsrA[FjiMbpI]) {
                    jAZ4HKVpLNnR++;
                }
                else if (VzRFwMEBQsrA[FjiMbpI] < king[v6MxKcFtqg]) {
                    Ec1sYlo++;
                }
                else {
                    hSLC8hipgkl++;
                }
            }
            Ec1sYlo = Ec1sYlo +qMbhGiX;
            FjiMbpI = qMbhGiX;
            if ((jAZ4HKVpLNnR - Ec1sYlo) > (pcvyGtqaNAPj - lose)) {
                lose = Ec1sYlo;
                EiHuqFgTU = hSLC8hipgkl;
                pcvyGtqaNAPj = jAZ4HKVpLNnR;
            }
            jAZ4HKVpLNnR = (914 - 914);
            hSLC8hipgkl = 0;
            Ec1sYlo = 0;
        }
        printf ("%d\n", (832 - 632) * (pcvyGtqaNAPj - lose));
    }
    return 0;
}

