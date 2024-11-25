struct   student {
    char Gkm6A9GJRq [(366 - 286)];
    struct   student *XKEqRWNunxz;
};
struct   student *St6n40XS8 () {
    struct   student *iDJAt0xcz;
    struct   student *wYnuAtoaei;
    struct   student *q97KaQyzp5SU;
    q97KaQyzp5SU = (struct   student *) malloc (sizeof (struct   student));
    gets (q97KaQyzp5SU->Gkm6A9GJRq);
    q97KaQyzp5SU->XKEqRWNunxz = NULL;
    wYnuAtoaei = q97KaQyzp5SU;
    do {
        q97KaQyzp5SU = (struct   student *) malloc (sizeof (struct   student));
        gets (q97KaQyzp5SU->Gkm6A9GJRq);
        if (strcmp (q97KaQyzp5SU->Gkm6A9GJRq, "end") == (61 - 61)) {
            free (q97KaQyzp5SU);
            break;
        }
        else {
            q97KaQyzp5SU->XKEqRWNunxz = wYnuAtoaei;
            wYnuAtoaei = q97KaQyzp5SU;
            iDJAt0xcz = q97KaQyzp5SU;
        };
    }
    while ((504 - 503));
    return (iDJAt0xcz);
}

void  bckJgwVQmq (struct   student *iDJAt0xcz) {
    struct   student *MDJcfXE6d;
    MDJcfXE6d = iDJAt0xcz;
    for (; iDJAt0xcz;) {
        free (MDJcfXE6d);
        MDJcfXE6d = iDJAt0xcz;
        iDJAt0xcz = iDJAt0xcz->XKEqRWNunxz;
    };
}

void  main () {
    struct   student *St6n40XS8 ();
    void  bckJgwVQmq (struct   student *iDJAt0xcz);
    struct   student *iDJAt0xcz;
    bckJgwVQmq (iDJAt0xcz);
    struct   student *MDJcfXE6d;
    iDJAt0xcz = St6n40XS8 ();
    MDJcfXE6d = iDJAt0xcz;
    do {
        puts (MDJcfXE6d->Gkm6A9GJRq);
        MDJcfXE6d = MDJcfXE6d->XKEqRWNunxz;
    }
    while (MDJcfXE6d);
}

