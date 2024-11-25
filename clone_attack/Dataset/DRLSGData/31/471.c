struct   stu {
    char CU52ep1E [(629 - 579)];
    struct   stu *YC7ldpe;
}
*V9MR51g0fl, *X8GsKt;
int pn6lbME;

struct   stu *MZ5JcKx (void ) {
    struct   stu *ZXOoPh = NULL;
    pn6lbME = (840 - 840);
    V9MR51g0fl = X8GsKt = (struct   stu *) malloc (sizeof (struct   stu));
    gets (V9MR51g0fl->CU52ep1E);
    while (strcmp (V9MR51g0fl->CU52ep1E, "end") != (376 - 376)) {
        pn6lbME = pn6lbME + (153 - 152);
        if (!((848 - 847) != pn6lbME))
            ZXOoPh = V9MR51g0fl;
        else
            X8GsKt->YC7ldpe = V9MR51g0fl;
        X8GsKt = V9MR51g0fl;
        V9MR51g0fl = (struct   stu *) malloc (sizeof (struct   stu));
        gets (V9MR51g0fl->CU52ep1E);
    }
    X8GsKt->YC7ldpe = NULL;
    return (ZXOoPh);
}

struct   stu *Ac3SCKa8hlER (struct   stu *ZXOoPh) {
    struct   stu *yL76z1M, *Newhead = NULL;
    do {
        X8GsKt = NULL;
        V9MR51g0fl = ZXOoPh;
        for (; V9MR51g0fl->YC7ldpe != NULL;) {
            X8GsKt = V9MR51g0fl;
            V9MR51g0fl = V9MR51g0fl->YC7ldpe;
        }
        if (!(NULL != Newhead)) {
            Newhead = V9MR51g0fl;
            yL76z1M = Newhead->YC7ldpe = X8GsKt;
        }
        yL76z1M = yL76z1M->YC7ldpe = X8GsKt;
        X8GsKt->YC7ldpe = NULL;
    }
    while (ZXOoPh->YC7ldpe != NULL);
    return (Newhead);
}

void  W03bKVjEQ (struct   stu *ZXOoPh) {
    {
        V9MR51g0fl = ZXOoPh;
        while (V9MR51g0fl != NULL) {
            puts (V9MR51g0fl->CU52ep1E);
            V9MR51g0fl = V9MR51g0fl->YC7ldpe;
        }
    }
}

void  main () {
    struct   stu *ZXOoPh;
    W03bKVjEQ (ZXOoPh);
    ZXOoPh = MZ5JcKx ();
    ZXOoPh = Ac3SCKa8hlER (ZXOoPh);
}

