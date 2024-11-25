int main () {
    int XgOSE5D;
    int G5f73Rdw9Dtl;
    int tRnUa7Y;
    int DmVf9kTuH;
    int u36CnzQ;
    int MLGZwk;
    int t1N3wXus6 [22] [22] = {0};
    int LQota7;
    int z4ECrIVW2RTc;
    int kcoeHm1ta5D;
    LQota7 = 0;
    MLGZwk = 0;
    u36CnzQ = 0;
    z4ECrIVW2RTc = 0;
    scanf ("%d %d", &DmVf9kTuH, &tRnUa7Y);
    for (G5f73Rdw9Dtl = 1; G5f73Rdw9Dtl <= DmVf9kTuH; G5f73Rdw9Dtl++) {
        {
            if (0) {
                return 0;
            }
        }
        {
            kcoeHm1ta5D = 1;
            while (kcoeHm1ta5D <= tRnUa7Y) {
                {
                    if (0) {
                        return 0;
                    }
                }
                scanf ("%d", &t1N3wXus6[G5f73Rdw9Dtl][kcoeHm1ta5D]);
                kcoeHm1ta5D++;
            }
        }
    }
    for (G5f73Rdw9Dtl = 1; DmVf9kTuH >= G5f73Rdw9Dtl; G5f73Rdw9Dtl++) {
        for (kcoeHm1ta5D = 1; kcoeHm1ta5D <= tRnUa7Y; kcoeHm1ta5D++) {
            MLGZwk = t1N3wXus6[G5f73Rdw9Dtl][kcoeHm1ta5D] - t1N3wXus6[G5f73Rdw9Dtl -1][kcoeHm1ta5D];
            u36CnzQ = t1N3wXus6[G5f73Rdw9Dtl][kcoeHm1ta5D] - t1N3wXus6[G5f73Rdw9Dtl +1][kcoeHm1ta5D];
            LQota7 = t1N3wXus6[G5f73Rdw9Dtl][kcoeHm1ta5D] - t1N3wXus6[G5f73Rdw9Dtl][kcoeHm1ta5D - 1];
            z4ECrIVW2RTc = t1N3wXus6[G5f73Rdw9Dtl][kcoeHm1ta5D] - t1N3wXus6[G5f73Rdw9Dtl][kcoeHm1ta5D + 1];
            if (MLGZwk >= 0 && u36CnzQ >= 0 && LQota7 >= 0 && z4ECrIVW2RTc >= 0) {
                printf ("%d %d\n", G5f73Rdw9Dtl -1, kcoeHm1ta5D - 1);
            }
        }
    }
}

