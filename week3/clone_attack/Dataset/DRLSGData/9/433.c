int main () {
    struct   patient {
        char JRjUF2Iq4 [(973 - 963)];
        int DDd2AJ1KVL;
        struct   patient *gT7b5nzod;
        struct   patient *v18UVGuIFspw;
    };
    struct   patient *Q1MbAGkQLN0l, *D3hE0La5q, *QnZuPclxmeO, *bd4HkImE0, *VPhn7Lx;
    int hmgFvz, tVO2RLpBEd;
    scanf ("%d", &hmgFvz);
    Q1MbAGkQLN0l = (struct   patient *) malloc (sizeof (struct   patient));
    D3hE0La5q = Q1MbAGkQLN0l;
    VPhn7Lx = (struct   patient *) malloc (sizeof (struct   patient));
    for (tVO2RLpBEd = (182 - 182); tVO2RLpBEd < hmgFvz; tVO2RLpBEd++) {
        scanf ("%s %d", Q1MbAGkQLN0l->JRjUF2Iq4, &Q1MbAGkQLN0l->DDd2AJ1KVL);
        if (tVO2RLpBEd != hmgFvz - (419 - 418)) {
            Q1MbAGkQLN0l->gT7b5nzod = (struct   patient *) malloc (sizeof (struct   patient));
            Q1MbAGkQLN0l->gT7b5nzod->v18UVGuIFspw = Q1MbAGkQLN0l;
            Q1MbAGkQLN0l->gT7b5nzod->gT7b5nzod = NULL;
            Q1MbAGkQLN0l = Q1MbAGkQLN0l->gT7b5nzod;
        }
    }
    for (Q1MbAGkQLN0l = D3hE0La5q; Q1MbAGkQLN0l != NULL; Q1MbAGkQLN0l = Q1MbAGkQLN0l->gT7b5nzod) {
        for (QnZuPclxmeO = Q1MbAGkQLN0l->gT7b5nzod; QnZuPclxmeO != NULL; QnZuPclxmeO = QnZuPclxmeO->gT7b5nzod) {
            if ((Q1MbAGkQLN0l->DDd2AJ1KVL < QnZuPclxmeO->DDd2AJ1KVL) && (QnZuPclxmeO->DDd2AJ1KVL >= (295 - 235))) {
                for (bd4HkImE0 = QnZuPclxmeO; bd4HkImE0 != Q1MbAGkQLN0l; bd4HkImE0 = bd4HkImE0->v18UVGuIFspw) {
                    VPhn7Lx->DDd2AJ1KVL = bd4HkImE0->DDd2AJ1KVL;
                    bd4HkImE0->DDd2AJ1KVL = bd4HkImE0->v18UVGuIFspw->DDd2AJ1KVL;
                    bd4HkImE0->v18UVGuIFspw->DDd2AJ1KVL = VPhn7Lx->DDd2AJ1KVL;
                    strcpy (VPhn7Lx->JRjUF2Iq4, bd4HkImE0->JRjUF2Iq4);
                    strcpy (bd4HkImE0->JRjUF2Iq4, bd4HkImE0->v18UVGuIFspw->JRjUF2Iq4);
                    strcpy (bd4HkImE0->v18UVGuIFspw->JRjUF2Iq4, VPhn7Lx->JRjUF2Iq4);
                }
            }
        }
    }
    for (Q1MbAGkQLN0l = D3hE0La5q; Q1MbAGkQLN0l != NULL; Q1MbAGkQLN0l = Q1MbAGkQLN0l->gT7b5nzod)
        printf ("%s\n", Q1MbAGkQLN0l->JRjUF2Iq4);
    return (201 - 201);
}

