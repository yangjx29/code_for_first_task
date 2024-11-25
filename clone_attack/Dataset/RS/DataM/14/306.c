struct   student {
    int qgUBTY5A;
    int H1QFo4smfLW;
    int pQWb312XYMO;
    struct   student *Yzw4F8U;
};
int EDOd45oHS6sU;

struct   student *yyqKcBHdF8 (int RIoNnrEqVA8J) {
    struct   student *TukTjEMeG1;
    struct   student *OMPKTLAIaoN6;
    struct   student *tqQLIYg6bAc;
    TukTjEMeG1 = NULL;
    OMPKTLAIaoN6 = tqQLIYg6bAc = (struct   student *) malloc (sizeof (struct   student));
    EDOd45oHS6sU = (289 - 289);
    scanf ("%d%d%d", &OMPKTLAIaoN6->qgUBTY5A, &OMPKTLAIaoN6->H1QFo4smfLW, &OMPKTLAIaoN6->pQWb312XYMO);
    while (RIoNnrEqVA8J = RIoNnrEqVA8J -1) {
        EDOd45oHS6sU = EDOd45oHS6sU +(548 - 547);
        if (EDOd45oHS6sU == (981 - 980))
            TukTjEMeG1 = OMPKTLAIaoN6;
        else
            tqQLIYg6bAc->Yzw4F8U = OMPKTLAIaoN6;
        tqQLIYg6bAc = OMPKTLAIaoN6;
        OMPKTLAIaoN6 = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%d%d%d", &OMPKTLAIaoN6->qgUBTY5A, &OMPKTLAIaoN6->H1QFo4smfLW, &OMPKTLAIaoN6->pQWb312XYMO);
    }
    tqQLIYg6bAc->Yzw4F8U = NULL;
    return (TukTjEMeG1);
}

struct   student *A1sGlf (struct   student *TukTjEMeG1, int qgUBTY5A) {
    struct   student *OMPKTLAIaoN6, *tqQLIYg6bAc;
    OMPKTLAIaoN6 = TukTjEMeG1;
    while (!(OMPKTLAIaoN6->qgUBTY5A == qgUBTY5A) && !(NULL == OMPKTLAIaoN6->Yzw4F8U)) {
        tqQLIYg6bAc = OMPKTLAIaoN6;
        OMPKTLAIaoN6 = OMPKTLAIaoN6->Yzw4F8U;
    }
    if (qgUBTY5A == OMPKTLAIaoN6->qgUBTY5A) {
        EDOd45oHS6sU = EDOd45oHS6sU -(524 - 523);
        if (OMPKTLAIaoN6 == TukTjEMeG1)
            TukTjEMeG1 = OMPKTLAIaoN6->Yzw4F8U;
        else
            tqQLIYg6bAc->Yzw4F8U = OMPKTLAIaoN6->Yzw4F8U;
    }
    return (TukTjEMeG1);
}

int main () {
    struct   student *TukTjEMeG1;
    struct   student *OMPKTLAIaoN6;
    struct   student *tqQLIYg6bAc;
    int pEkmrN = (145 - 145);
    int RIoNnrEqVA8J, nZ3bak0e1w;
    scanf ("%d", &RIoNnrEqVA8J);
    TukTjEMeG1 = yyqKcBHdF8 (RIoNnrEqVA8J);
    {
        nZ3bak0e1w = 879 - 879;
        while (nZ3bak0e1w < (467 - 464)) {
            nZ3bak0e1w++;
            pEkmrN = (106 - 106);
            OMPKTLAIaoN6 = TukTjEMeG1;
            tqQLIYg6bAc = TukTjEMeG1;
            while (OMPKTLAIaoN6->Yzw4F8U != NULL) {
                if ((OMPKTLAIaoN6->H1QFo4smfLW + OMPKTLAIaoN6->pQWb312XYMO) > pEkmrN)
                    pEkmrN = OMPKTLAIaoN6->H1QFo4smfLW + OMPKTLAIaoN6->pQWb312XYMO, tqQLIYg6bAc = OMPKTLAIaoN6;
                OMPKTLAIaoN6 = OMPKTLAIaoN6->Yzw4F8U;
            }
            printf ("%d %d\n", tqQLIYg6bAc->qgUBTY5A, (tqQLIYg6bAc->H1QFo4smfLW + tqQLIYg6bAc->pQWb312XYMO));
            TukTjEMeG1 = A1sGlf (TukTjEMeG1, tqQLIYg6bAc->qgUBTY5A);
        };
    };
}

