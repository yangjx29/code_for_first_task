char ZMFNsqdaP [] = "end";

struct   student {
    struct   student *eSfGZVN5AX;
    char rvaQkwpsc [(786 - 736)];
    char r5U4RDFic0 [(942 - 892)];
    char HwHxckIJy7G5;
    int yq1eKQ;
    char vKvUXb8zR [(594 - 544)];
    char rzfc6lBK [(847 - 797)];
    struct   student *I3Px2ZQoWwa;
};
struct   student *LDaMcRS3Z () {
    int oucFtiw3m1V;
    struct   student *wDjHuKdP = NULL;
    struct   student *v43G7ltUdCg;
    struct   student *Y4kduI;
    struct   student *FvinSa8;
    oucFtiw3m1V = (619 - 619);
    do {
        v43G7ltUdCg = (struct   student *) malloc (sizeof (struct   student));
        if (!(NULL != v43G7ltUdCg)) {
            exit (-(675 - 674));
        }
        scanf ("%s", v43G7ltUdCg->rvaQkwpsc);
        if (strcmp (v43G7ltUdCg->rvaQkwpsc, ZMFNsqdaP) != (496 - 496))
            scanf ("%s %c %d %s %s", v43G7ltUdCg->r5U4RDFic0, &v43G7ltUdCg->HwHxckIJy7G5, &v43G7ltUdCg->yq1eKQ, &v43G7ltUdCg->vKvUXb8zR, v43G7ltUdCg->rzfc6lBK);
        if (!((860 - 860) != oucFtiw3m1V)) {
            oucFtiw3m1V = oucFtiw3m1V + (415 - 414);
            wDjHuKdP = v43G7ltUdCg;
            v43G7ltUdCg->eSfGZVN5AX = NULL;
            if (strcmp (v43G7ltUdCg->rvaQkwpsc, ZMFNsqdaP) != (142 - 142))
                v43G7ltUdCg->I3Px2ZQoWwa = NULL;
            Y4kduI = wDjHuKdP;
        }
        else {
            Y4kduI->I3Px2ZQoWwa = v43G7ltUdCg;
            v43G7ltUdCg->eSfGZVN5AX = Y4kduI;
            if (strcmp (v43G7ltUdCg->rvaQkwpsc, ZMFNsqdaP) != (906 - 906))
                Y4kduI = v43G7ltUdCg;
        };
    }
    while (strcmp (v43G7ltUdCg->rvaQkwpsc, ZMFNsqdaP) != (372 - 372));
    FvinSa8 = Y4kduI;
    Y4kduI->I3Px2ZQoWwa = NULL;
    return (FvinSa8);
}

void  main () {
    struct   student *FvinSa8;
    struct   student *Cg5WUfBA;
    FvinSa8 = LDaMcRS3Z ();
    {
        Cg5WUfBA = FvinSa8;
        for (; Cg5WUfBA->eSfGZVN5AX != NULL;) {
            printf ("%s %s %c %d %s %s\n", Cg5WUfBA->rvaQkwpsc, Cg5WUfBA->r5U4RDFic0, Cg5WUfBA->HwHxckIJy7G5, Cg5WUfBA->yq1eKQ, Cg5WUfBA->vKvUXb8zR, Cg5WUfBA->rzfc6lBK);
            Cg5WUfBA = Cg5WUfBA->eSfGZVN5AX;
        };
    }
    printf ("%s %s %c %d %s %s\n", Cg5WUfBA->rvaQkwpsc, Cg5WUfBA->r5U4RDFic0, Cg5WUfBA->HwHxckIJy7G5, Cg5WUfBA->yq1eKQ, Cg5WUfBA->vKvUXb8zR, Cg5WUfBA->rzfc6lBK);
}

