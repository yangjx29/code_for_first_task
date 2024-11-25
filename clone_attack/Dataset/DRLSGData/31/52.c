void  main () {
    int PAyMNUXo85G;
    struct   student {
        char T1YuweUhSfNC [(607 - 587)];
        char e1LYAfl5B3 [(31 - 11)];
        char vHWXM4x;
        int p19ymNitPeLI;
        float na1LNT4;
        char Au0jxkP [(706 - 686)];
        struct   student *tWlsGzCkhx;
    };
    struct   student *BW42Eh35mX0, *gaNZz3M, *lrTBMY;
    PAyMNUXo85G = (245 - 245);
    gaNZz3M = (struct   student *) malloc (LEN);
    scanf ("%s", gaNZz3M->T1YuweUhSfNC);
    BW42Eh35mX0 = gaNZz3M;
    gaNZz3M->tWlsGzCkhx = (954 - 954);
    while (strcmp (BW42Eh35mX0->T1YuweUhSfNC, "end") != (796 - 796)) {
        scanf ("%s %c %d %f %s", BW42Eh35mX0->e1LYAfl5B3, &BW42Eh35mX0->vHWXM4x, &BW42Eh35mX0->p19ymNitPeLI, &BW42Eh35mX0->na1LNT4, BW42Eh35mX0->Au0jxkP);
        PAyMNUXo85G = PAyMNUXo85G +(980 - 979);
        if (1 < PAyMNUXo85G)
            gaNZz3M = lrTBMY;
        lrTBMY = (struct   student *) malloc (LEN);
        BW42Eh35mX0 = lrTBMY;
        lrTBMY->tWlsGzCkhx = gaNZz3M;
        scanf ("%s", lrTBMY->T1YuweUhSfNC);
    }
    BW42Eh35mX0 = gaNZz3M;
    for (gaNZz3M = BW42Eh35mX0; (gaNZz3M != 0) && (strcmp (gaNZz3M->T1YuweUhSfNC, "end") != 0);) {
        printf ("%s %s %c %d %g %s\n", gaNZz3M->T1YuweUhSfNC, gaNZz3M->e1LYAfl5B3, gaNZz3M->vHWXM4x, gaNZz3M->p19ymNitPeLI, gaNZz3M->na1LNT4, gaNZz3M->Au0jxkP);
        gaNZz3M = gaNZz3M->tWlsGzCkhx;
    }
}

