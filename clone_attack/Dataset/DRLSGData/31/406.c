struct   student {
    char KQ5lNLcGB0O [(713 - 693)];
    char baLt1P3WB [(783 - 763)];
    char ECwW1RMOY;
    int lnytr84Y;
    float Vcrja91HuXfp;
    char TG3vKB685z [(457 - 437)];
    struct   student *YlP9nGZiJQ;
};
void  main () {
    struct   student *YS0QBKFscC;
    struct   student *xZqTiG;
    struct   student *PFaDs0;
    struct   student *bFGg4EVqZQt5;
    YS0QBKFscC = xZqTiG = (struct   student *) malloc (LEN);
    scanf ("%s", YS0QBKFscC->KQ5lNLcGB0O);
    YS0QBKFscC->YlP9nGZiJQ = NULL;
    for (; YS0QBKFscC->KQ5lNLcGB0O[(185 - 185)] != 'e';) {
        scanf ("%s %c%d%f%s", YS0QBKFscC->baLt1P3WB, &YS0QBKFscC->ECwW1RMOY, &YS0QBKFscC->lnytr84Y, &YS0QBKFscC->Vcrja91HuXfp, YS0QBKFscC->TG3vKB685z);
        YS0QBKFscC = (struct   student *) malloc (LEN);
        YS0QBKFscC->YlP9nGZiJQ = xZqTiG;
        xZqTiG = YS0QBKFscC;
        scanf ("%s", YS0QBKFscC->KQ5lNLcGB0O);
    }
    bFGg4EVqZQt5 = PFaDs0 = xZqTiG->YlP9nGZiJQ;
    for (; bFGg4EVqZQt5 != NULL;) {
        printf ("%s %s %c %d %g %s\n", bFGg4EVqZQt5->KQ5lNLcGB0O, bFGg4EVqZQt5->baLt1P3WB, bFGg4EVqZQt5->ECwW1RMOY, bFGg4EVqZQt5->lnytr84Y, bFGg4EVqZQt5->Vcrja91HuXfp, bFGg4EVqZQt5->TG3vKB685z);
        bFGg4EVqZQt5 = bFGg4EVqZQt5->YlP9nGZiJQ;
    }
}

