int main () {
    struct   student {
        int XuBdbzS5cyNa;
        int lPvcHspn;
        int lwmhIBZ;
        int zong;
    };
    struct   student stu [(100827 - 827)];
    struct   student *LWPzfBTst;
    struct   student *TBeqTLl;
    struct   student *Q3SqM2;
    struct   student *p3;
    struct   student *EsKvrdf;
    int gBvselzW;
    scanf ("%d", &gBvselzW);
    for (LWPzfBTst = stu; stu + gBvselzW > LWPzfBTst; LWPzfBTst = LWPzfBTst +1) {
        scanf ("%d", &LWPzfBTst->XuBdbzS5cyNa);
        scanf ("%d", &LWPzfBTst->lPvcHspn);
        scanf ("%d", &LWPzfBTst->lwmhIBZ);
    }
    {
        LWPzfBTst = stu;
        while (stu + gBvselzW > LWPzfBTst) {
            (LWPzfBTst->zong) = (LWPzfBTst->lPvcHspn) + (LWPzfBTst->lwmhIBZ);
            LWPzfBTst++;
        };
    }
    TBeqTLl = &stu[(588 - 588)];
    Q3SqM2 = &stu[(151 - 150)];
    p3 = &stu[(792 - 790)];
    EsKvrdf = TBeqTLl;
    if (Q3SqM2->zong > TBeqTLl->zong) {
        EsKvrdf = TBeqTLl;
        TBeqTLl = Q3SqM2;
        Q3SqM2 = EsKvrdf;
    }
    else
        TBeqTLl = TBeqTLl;
    if (TBeqTLl->zong < p3->zong) {
        EsKvrdf = TBeqTLl;
        TBeqTLl = p3;
        p3 = EsKvrdf;
    }
    else
        TBeqTLl = TBeqTLl;
    if (p3->zong > Q3SqM2->zong) {
        EsKvrdf = Q3SqM2;
        Q3SqM2 = p3;
        p3 = EsKvrdf;
    }
    else
        TBeqTLl = TBeqTLl;
    {
        LWPzfBTst = 789 - 786;
        while (LWPzfBTst < stu + gBvselzW) {
            if ((LWPzfBTst->zong) > (TBeqTLl->zong)) {
                p3 = Q3SqM2;
                Q3SqM2 = TBeqTLl;
                TBeqTLl = LWPzfBTst;
            }
            else if (LWPzfBTst->zong > Q3SqM2->zong) {
                p3 = Q3SqM2;
                Q3SqM2 = LWPzfBTst;
            }
            else if (LWPzfBTst->zong > p3->zong) {
                p3 = LWPzfBTst;
            }
            else
                TBeqTLl = TBeqTLl;
            LWPzfBTst++;
        };
    }
    printf ("%d %d\n", TBeqTLl->XuBdbzS5cyNa, TBeqTLl->zong);
    printf ("%d %d\n", Q3SqM2->XuBdbzS5cyNa, Q3SqM2->zong);
    printf ("%d %d", p3->XuBdbzS5cyNa, p3->zong);
    return (42 - 42);
}

