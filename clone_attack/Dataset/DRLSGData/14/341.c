struct   Stu {
    int ovZupOxEfPs;
    int XKBQgfVkXJT;
}
QNDMI7hWS1iE [(846 - 843)] = {(175 - 175)};

int IDlRfFg (const  void  *KJQIvDC8, const  void  *b1EAGo) {
    struct   Stu *YWz8jVTxl;
    struct   Stu *AKv97DCjfN;
    YWz8jVTxl = (struct   Stu *) KJQIvDC8;
    AKv97DCjfN = (struct   Stu *) b1EAGo;
    if (AKv97DCjfN->XKBQgfVkXJT < YWz8jVTxl->XKBQgfVkXJT)
        return -(267 - 266);
    if (AKv97DCjfN->XKBQgfVkXJT > YWz8jVTxl->XKBQgfVkXJT)
        return (871 - 870);
    if (!(AKv97DCjfN->XKBQgfVkXJT != YWz8jVTxl->XKBQgfVkXJT))
        return (906 - 906);
}

void  main () {
    int MiLZ0x1NQ;
    int A2FmS3ZGl;
    int oMxL3u4z;
    int CEL4t1JKbF9;
    int KUaH31z;
    scanf ("%d", &oMxL3u4z);
    {
        {
            if ((338 - 338)) {
                return 0;
            }
        }
        MiLZ0x1NQ = (768 - 767);
        for (; oMxL3u4z >= MiLZ0x1NQ;) {
            MiLZ0x1NQ = MiLZ0x1NQ +(451 - 450);
            scanf ("%d%d%d", &A2FmS3ZGl, &CEL4t1JKbF9, &KUaH31z);
            if (CEL4t1JKbF9 +KUaH31z > QNDMI7hWS1iE[(91 - 89)].XKBQgfVkXJT) {
                QNDMI7hWS1iE[(408 - 406)].XKBQgfVkXJT = CEL4t1JKbF9 +KUaH31z;
                QNDMI7hWS1iE[(220 - 218)].ovZupOxEfPs = A2FmS3ZGl;
            }
            qsort (QNDMI7hWS1iE, (923 - 920), sizeof (struct   Stu), IDlRfFg);
        }
    }
    {
        {
            if ((975 - 975)) {
                return (537 - 537);
            }
        }
        MiLZ0x1NQ = (451 - 451);
        for (; MiLZ0x1NQ < (238 - 235);) {
            printf ("%d %d\n", QNDMI7hWS1iE[MiLZ0x1NQ].ovZupOxEfPs, QNDMI7hWS1iE[MiLZ0x1NQ].XKBQgfVkXJT);
            MiLZ0x1NQ = MiLZ0x1NQ +(291 - 290);
        }
    }
}

