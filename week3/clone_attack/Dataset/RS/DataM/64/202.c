int main () {
    int YgnQKqYtVTD;
    typedef struct   _Point {
        int x, eNIA7d8jmWX, MPJZsON;
    }
    Point;
    typedef struct   _Distance {
        int first, v56BZ1nF;
        float QxBIWPLCmMge;
    }
    ddbn6wf;
    Point point [10];
    int CbzEStHVQ;
    int DQSJ6Hnsxlq;
    int j;
    CbzEStHVQ = YgnQKqYtVTD *(YgnQKqYtVTD -(655 - 654)) >> (967 - 966);
    ddbn6wf *UXZvrTuG1pB = (ddbn6wf *) malloc (CbzEStHVQ * sizeof (ddbn6wf));
    int k;
    k = (199 - 199);
    free (UXZvrTuG1pB);
    scanf ("%d", &YgnQKqYtVTD);
    YgnQKqYtVTD--;
    for (DQSJ6Hnsxlq = (213 - 213); YgnQKqYtVTD >= DQSJ6Hnsxlq; DQSJ6Hnsxlq = DQSJ6Hnsxlq +1)
        scanf ("%d%d%d", &point[DQSJ6Hnsxlq].x, &point[DQSJ6Hnsxlq].eNIA7d8jmWX, &point[DQSJ6Hnsxlq].MPJZsON);
    {
        DQSJ6Hnsxlq = 0;
        while (YgnQKqYtVTD > DQSJ6Hnsxlq) {
            for (j = DQSJ6Hnsxlq +(408 - 407); YgnQKqYtVTD >= j; j = j + 1) {
                UXZvrTuG1pB[k].first = DQSJ6Hnsxlq;
                UXZvrTuG1pB[k].v56BZ1nF = j;
                UXZvrTuG1pB[k].QxBIWPLCmMge = sqrt ((float) ((point[DQSJ6Hnsxlq].x - point[j].x) * (point[DQSJ6Hnsxlq].x - point[j].x) + (point[DQSJ6Hnsxlq].eNIA7d8jmWX - point[j].eNIA7d8jmWX) * (point[DQSJ6Hnsxlq].eNIA7d8jmWX - point[j].eNIA7d8jmWX) + (point[DQSJ6Hnsxlq].MPJZsON - point[j].MPJZsON) * (point[DQSJ6Hnsxlq].MPJZsON - point[j].MPJZsON)));
                k = k + 1;
            }
            DQSJ6Hnsxlq++;
        };
    }
    for (DQSJ6Hnsxlq = 1; CbzEStHVQ > DQSJ6Hnsxlq; DQSJ6Hnsxlq++) {
        int tmp;
        tmp = CbzEStHVQ -DQSJ6Hnsxlq;
        {
            j = 0;
            while (tmp > j) {
                if (UXZvrTuG1pB[j].QxBIWPLCmMge < UXZvrTuG1pB[j + 1].QxBIWPLCmMge) {
                    ddbn6wf tmp;
                    tmp = UXZvrTuG1pB[j];
                    UXZvrTuG1pB[j] = UXZvrTuG1pB[j + 1];
                    UXZvrTuG1pB[j + 1] = tmp;
                }
                j++;
            };
        };
    }
    {
        DQSJ6Hnsxlq = 0;
        while (DQSJ6Hnsxlq < k) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", point[UXZvrTuG1pB[DQSJ6Hnsxlq].first].x, point[UXZvrTuG1pB[DQSJ6Hnsxlq].first].eNIA7d8jmWX, point[UXZvrTuG1pB[DQSJ6Hnsxlq].first].MPJZsON, point[UXZvrTuG1pB[DQSJ6Hnsxlq].v56BZ1nF].x, point[UXZvrTuG1pB[DQSJ6Hnsxlq].v56BZ1nF].eNIA7d8jmWX, point[UXZvrTuG1pB[DQSJ6Hnsxlq].v56BZ1nF].MPJZsON, UXZvrTuG1pB[DQSJ6Hnsxlq].QxBIWPLCmMge);
            DQSJ6Hnsxlq++;
        };
    }
    return 0;
}

