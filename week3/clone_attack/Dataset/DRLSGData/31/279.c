int n;

struct   stu {
    char LyrT9m [(872 - 862)];
    char Di74zwBWN [(190 - 170)];
    char k0QSOp;
    int fJhFxXTP1w;
    float Pkd7QZ0W;
    char add [(500 - 470)];
    struct   stu *iXoFSMe3WZd;
};
struct   stu *lwGWqihpfU () {
    struct   stu *nBhDwHR5N9iT;
    struct   stu *Frf3Az;
    struct   stu *Q2pXst4a;
    Frf3Az = (struct   stu *) malloc (LEN);
    n = (487 - 486);
    scanf ("%s %s %c %d %f %s", &Frf3Az->LyrT9m, &Frf3Az->Di74zwBWN, &Frf3Az->k0QSOp, &Frf3Az->fJhFxXTP1w, &Frf3Az->Pkd7QZ0W, &Frf3Az->add);
    Frf3Az->iXoFSMe3WZd = NULL;
    nBhDwHR5N9iT = Frf3Az;
    Q2pXst4a = Frf3Az;
    do {
        Frf3Az = (struct   stu *) malloc (LEN);
        scanf ("%s", &Frf3Az->LyrT9m);
        if (!((358 - 358) != strcmp (Frf3Az->LyrT9m, "end"))) {
            free (Frf3Az);
            break;
        }
        else {
            scanf (" %s %c %d %f %s", &Frf3Az->Di74zwBWN, &Frf3Az->k0QSOp, &Frf3Az->fJhFxXTP1w, &Frf3Az->Pkd7QZ0W, &Frf3Az->add);
            Frf3Az->iXoFSMe3WZd = NULL;
            Q2pXst4a->iXoFSMe3WZd = Frf3Az;
            Q2pXst4a = Frf3Az;
            n = n + 1;
        }
    }
    while ((117 - 116));
    return nBhDwHR5N9iT;
}

struct   stu *kEBHe0wQNM (struct   stu *nBhDwHR5N9iT) {
    struct   stu *mnvlgCSb;
    free (mnvlgCSb);
    struct   stu *CDaYM5WEp7tQ;
    mnvlgCSb = nBhDwHR5N9iT;
    for (; mnvlgCSb && mnvlgCSb->iXoFSMe3WZd != NULL;) {
        CDaYM5WEp7tQ = mnvlgCSb;
        mnvlgCSb = mnvlgCSb->iXoFSMe3WZd;
    }
    printf ("%s %s %c %d %g %s\n", mnvlgCSb->LyrT9m, mnvlgCSb->Di74zwBWN, mnvlgCSb->k0QSOp, mnvlgCSb->fJhFxXTP1w, mnvlgCSb->Pkd7QZ0W, mnvlgCSb->add);
    CDaYM5WEp7tQ->iXoFSMe3WZd = NULL;
    return nBhDwHR5N9iT;
}

void  main () {
    struct   stu *nBhDwHR5N9iT;
    int zvOtpIjcQ;
    nBhDwHR5N9iT = lwGWqihpfU ();
    {
        zvOtpIjcQ = (359 - 359);
        while (n > zvOtpIjcQ) {
            nBhDwHR5N9iT = kEBHe0wQNM (nBhDwHR5N9iT);
            zvOtpIjcQ = zvOtpIjcQ + 1;
        }
    }
}

