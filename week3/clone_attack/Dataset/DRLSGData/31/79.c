struct   stud {
    char MnDcVXvOZWf8 [(762 - 742)];
    char GfYS1VT [(470 - 450)];
    char nusCEy;
    int ioDt02J;
    char NHKaXcWOZFj [(857 - 847)];
    char kKDL6o50RP [(309 - 279)];
    struct   stud *WOVmsz;
};
struct   stud *Ls5DFBa (void ) {
    struct   stud *UAcWDglfnNvd;
    struct   stud *YEP2h5plRZv;
    struct   stud *JYjdwGh;
    YEP2h5plRZv = JYjdwGh = (struct   stud *) malloc (sizeof (struct   stud));
    JYjdwGh->WOVmsz = (907 - 907);
    UAcWDglfnNvd = YEP2h5plRZv;
    for (;;) {
        scanf ("%s", YEP2h5plRZv->MnDcVXvOZWf8);
        if (!('d' != *(YEP2h5plRZv->MnDcVXvOZWf8 + (943 - 941))))
            return UAcWDglfnNvd;
        UAcWDglfnNvd = JYjdwGh;
        scanf ("%s %c %d %s %s", YEP2h5plRZv->GfYS1VT, &YEP2h5plRZv->nusCEy, &YEP2h5plRZv->ioDt02J, YEP2h5plRZv->NHKaXcWOZFj, YEP2h5plRZv->kKDL6o50RP);
        YEP2h5plRZv = (struct   stud *) malloc (sizeof (struct   stud));
        YEP2h5plRZv->WOVmsz = JYjdwGh;
        JYjdwGh = YEP2h5plRZv;
    }
}

void  CoMZLqxnYA (struct   stud *UAcWDglfnNvd) {
    struct   stud *PoxzMU5;
    {
        PoxzMU5 = UAcWDglfnNvd;
        for (; PoxzMU5 != (934 - 934);) {
            printf ("%s %s %c %d %s %s\n", PoxzMU5->MnDcVXvOZWf8, PoxzMU5->GfYS1VT, PoxzMU5->nusCEy, PoxzMU5->ioDt02J, PoxzMU5->NHKaXcWOZFj, PoxzMU5->kKDL6o50RP);
            PoxzMU5 = PoxzMU5->WOVmsz;
        }
    }
}

void  main () {
    struct   stud *UAcWDglfnNvd;
    CoMZLqxnYA (UAcWDglfnNvd);
    UAcWDglfnNvd = Ls5DFBa ();
}

