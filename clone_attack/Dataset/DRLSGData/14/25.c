void  main () {
    struct   stu {
        int cdXeMw9AL;
        int M14glwEj;
        int H9aXlmY6g;
        int iRlnGCI;
        struct   stu *mqvnwo6;
    };
    int A2NUQVGqoYM, iRqrlfA, yJr7tMVLa;
    struct   stu *Ohl52KpyXeSb, *zjdbcnKaf, *mhV8kPb, *DQNPHL;
    Ohl52KpyXeSb = zjdbcnKaf = (struct   stu *) malloc (LEN);
    scanf ("%d", &A2NUQVGqoYM);
    scanf ("%d %d %d", &Ohl52KpyXeSb->cdXeMw9AL, &Ohl52KpyXeSb->M14glwEj, &Ohl52KpyXeSb->H9aXlmY6g);
    {
        yJr7tMVLa = (1296 - 711) - (1357 - 773);
        while (yJr7tMVLa < A2NUQVGqoYM) {
            if (!((851 - 850) != yJr7tMVLa))
                mhV8kPb = Ohl52KpyXeSb;
            else
                zjdbcnKaf->mqvnwo6 = Ohl52KpyXeSb;
            zjdbcnKaf = Ohl52KpyXeSb;
            Ohl52KpyXeSb = (struct   stu *) malloc (LEN);
            scanf ("%d %d %d", &Ohl52KpyXeSb->cdXeMw9AL, &Ohl52KpyXeSb->M14glwEj, &Ohl52KpyXeSb->H9aXlmY6g);
            yJr7tMVLa = yJr7tMVLa + (424 - 423);
        }
    }
    zjdbcnKaf->mqvnwo6 = Ohl52KpyXeSb;
    zjdbcnKaf = Ohl52KpyXeSb;
    zjdbcnKaf->mqvnwo6 = NULL;
    Ohl52KpyXeSb = mhV8kPb;
    while (Ohl52KpyXeSb->mqvnwo6 != NULL) {
        Ohl52KpyXeSb->iRlnGCI = Ohl52KpyXeSb->M14glwEj + Ohl52KpyXeSb->H9aXlmY6g;
        Ohl52KpyXeSb = Ohl52KpyXeSb->mqvnwo6;
    }
    Ohl52KpyXeSb->iRlnGCI = Ohl52KpyXeSb->M14glwEj + Ohl52KpyXeSb->H9aXlmY6g;
    {
        yJr7tMVLa = 1;
        while (yJr7tMVLa <= 3) {
            Ohl52KpyXeSb = mhV8kPb;
            iRqrlfA = Ohl52KpyXeSb->iRlnGCI;
            DQNPHL = Ohl52KpyXeSb;
            while (Ohl52KpyXeSb->mqvnwo6 != NULL) {
                if (iRqrlfA < Ohl52KpyXeSb->iRlnGCI) {
                    DQNPHL = Ohl52KpyXeSb;
                    iRqrlfA = Ohl52KpyXeSb->iRlnGCI;
                }
                Ohl52KpyXeSb = Ohl52KpyXeSb->mqvnwo6;
            }
            if (Ohl52KpyXeSb->iRlnGCI > iRqrlfA) {
                DQNPHL = Ohl52KpyXeSb;
                iRqrlfA = Ohl52KpyXeSb->iRlnGCI;
            }
            printf ("%d %d\n", DQNPHL->cdXeMw9AL, DQNPHL->iRlnGCI);
            DQNPHL->iRlnGCI = 0;
            yJr7tMVLa = yJr7tMVLa + 1;
        }
    }
}

