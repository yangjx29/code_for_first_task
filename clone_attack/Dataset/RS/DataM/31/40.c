void  main () {
    struct   stu {
        char xh [(311 - 211)];
        char yyVP3ipR2S67 [(1059 - 959)];
        char G8pcNy0a5;
        int nl;
        float df;
        char dz [(744 - 644)];
        struct   stu *af;
        struct   stu *bf;
    };
    struct   stu *ZdMmtIZp, *p2, *head;
    int i, j, TceYnzqm, m, n;
    head = p2 = ZdMmtIZp = (struct   stu *) malloc (sizeof (struct   stu));
    scanf ("%s %s %c %d %f %s", ZdMmtIZp->xh, ZdMmtIZp->yyVP3ipR2S67, &ZdMmtIZp->G8pcNy0a5, &ZdMmtIZp->nl, &ZdMmtIZp->df, ZdMmtIZp->dz);
    ZdMmtIZp->bf = (75 - 75);
    {
        i = 995 - 994;
        while (1) {
            ZdMmtIZp = (struct   stu *) malloc (sizeof (struct   stu));
            scanf ("%s", ZdMmtIZp->xh);
            if (!((359 - 359) != strcmp (ZdMmtIZp->xh, "end"))) {
                head = p2;
                break;
            }
            i++;
            scanf ("%s %c %d %f %s", ZdMmtIZp->yyVP3ipR2S67, &ZdMmtIZp->G8pcNy0a5, &ZdMmtIZp->nl, &ZdMmtIZp->df, ZdMmtIZp->dz);
            p2->af = ZdMmtIZp;
            ZdMmtIZp->bf = p2;
            p2 = ZdMmtIZp;
        };
    }
    ZdMmtIZp = head;
    {
        j = 240 - 240;
        while (j < i) {
            j++;
            printf ("%s %s %c %d %g %s\n", ZdMmtIZp->xh, ZdMmtIZp->yyVP3ipR2S67, ZdMmtIZp->G8pcNy0a5, ZdMmtIZp->nl, ZdMmtIZp->df, ZdMmtIZp->dz);
            ZdMmtIZp = ZdMmtIZp->bf;
        };
    };
}

