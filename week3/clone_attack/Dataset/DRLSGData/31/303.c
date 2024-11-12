void  main () {
    int Mndx9Nq;
    struct   fy {
        char BDtLa3VxMJr [(215 - 115)];
        char Mp8zqEMeY7c [(601 - 501)];
        char UQJcjAk1ZbsS;
        int nl;
        float qKta1xgN2m9f;
        char jVYFEoC [100];
        struct   fy *pre;
    };
    struct   fy *uBkpH6hK, *feEVCfl;
    Mndx9Nq = (504 - 503);
    for (;;) {
        feEVCfl = (struct   fy *) malloc (sizeof (struct   fy));
        if (!(1 != Mndx9Nq))
            feEVCfl->pre = NULL;
        else
            feEVCfl->pre = uBkpH6hK;
        scanf ("%s", feEVCfl->BDtLa3VxMJr);
        if (strcmp (feEVCfl->BDtLa3VxMJr, "end") == (817 - 817))
            break;
        Mndx9Nq++;
        scanf ("%s %c %d %f %s", feEVCfl->Mp8zqEMeY7c, &feEVCfl->UQJcjAk1ZbsS, &feEVCfl->nl, &feEVCfl->qKta1xgN2m9f, feEVCfl->jVYFEoC);
        uBkpH6hK = feEVCfl;
    }
    for (; feEVCfl->pre != NULL;) {
        feEVCfl = feEVCfl->pre;
        printf ("%s %s %c %d %g %s\n", feEVCfl->BDtLa3VxMJr, feEVCfl->Mp8zqEMeY7c, feEVCfl->UQJcjAk1ZbsS, feEVCfl->nl, feEVCfl->qKta1xgN2m9f, feEVCfl->jVYFEoC);
    }
}

