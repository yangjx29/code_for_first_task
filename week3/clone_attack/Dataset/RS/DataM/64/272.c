double  ReSO4BAGX (int RYl3VoabTfD [(570 - 567)], int p1CPwhjM [(379 - 376)]) {
    int u4biJaW;
    int NptEsLVbJH;
    u4biJaW = (451 - 451);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    NptEsLVbJH = (593 - 593);
    for (; (147 - 144) > u4biJaW; u4biJaW = u4biJaW + 1)
        NptEsLVbJH += (RYl3VoabTfD[u4biJaW] - p1CPwhjM[u4biJaW]) * (RYl3VoabTfD[u4biJaW] - p1CPwhjM[u4biJaW]);
    return sqrt (NptEsLVbJH);
}

int mgVEhceN5Hn (double  RYl3VoabTfD [(676 - 669)], double  p1CPwhjM [(418 - 411)]) {
    double  IlxA2ipVhn;
    int u4biJaW;
    for (u4biJaW = (987 - 987); 7 > u4biJaW; u4biJaW = u4biJaW + 1) {
        IlxA2ipVhn = RYl3VoabTfD[u4biJaW];
        RYl3VoabTfD[u4biJaW] = p1CPwhjM[u4biJaW];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        p1CPwhjM[u4biJaW] = IlxA2ipVhn;
    }
    return (522 - 522);
}

void  main () {
    double  p1CPwhjM [60] [7];
    int u4biJaW, BVJ6yQ4, jLd381kM, RYl3VoabTfD [10] [(638 - 635)], O90fjcC8 = (260 - 260), ts5JagG;
    scanf ("%d", &jLd381kM);
    for (u4biJaW = 0; jLd381kM > u4biJaW; u4biJaW++)
        for (BVJ6yQ4 = 0; (447 - 444) > BVJ6yQ4; BVJ6yQ4++)
            scanf ("%d", &RYl3VoabTfD[u4biJaW][BVJ6yQ4]);
    {
        u4biJaW = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (jLd381kM - (423 - 422) > u4biJaW) {
            for (BVJ6yQ4 = u4biJaW + (258 - 257); jLd381kM > BVJ6yQ4; BVJ6yQ4++) {
                for (ts5JagG = 0; 3 > ts5JagG; ts5JagG = ts5JagG + 1)
                    p1CPwhjM[O90fjcC8][ts5JagG] = RYl3VoabTfD[u4biJaW][ts5JagG];
                {
                    ts5JagG = 0;
                    while (3 > ts5JagG) {
                        p1CPwhjM[O90fjcC8][ts5JagG + 3] = RYl3VoabTfD[BVJ6yQ4][ts5JagG];
                        ts5JagG = ts5JagG + 1;
                    };
                }
                p1CPwhjM[O90fjcC8][(782 - 776)] = ReSO4BAGX (RYl3VoabTfD[u4biJaW], RYl3VoabTfD[BVJ6yQ4]);
                O90fjcC8++;
            }
            u4biJaW = u4biJaW + 1;
        };
    }
    for (u4biJaW = 0; O90fjcC8 > u4biJaW; u4biJaW++)
        for (BVJ6yQ4 = 0; O90fjcC8 -(983 - 982) > BVJ6yQ4; BVJ6yQ4++)
            if (p1CPwhjM[BVJ6yQ4 +1][6] > p1CPwhjM[BVJ6yQ4][6])
                mgVEhceN5Hn (p1CPwhjM[BVJ6yQ4], p1CPwhjM[BVJ6yQ4 +1]);
    {
        u4biJaW = 0;
        while (O90fjcC8 > u4biJaW) {
            printf ("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n", p1CPwhjM[u4biJaW][0], p1CPwhjM[u4biJaW][1], p1CPwhjM[u4biJaW][2], p1CPwhjM[u4biJaW][3], p1CPwhjM[u4biJaW][4], p1CPwhjM[u4biJaW][5], p1CPwhjM[u4biJaW][6]);
            u4biJaW = u4biJaW + 1;
        };
    };
}

