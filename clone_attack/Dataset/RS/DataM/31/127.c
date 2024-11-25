struct   student {
    char ESO0bL [(1081 - 981)];
    char fVi2dHzf [100];
    char gender [2];
    char BcrGjM3nbO [100];
    char YE3sNMltjv [100];
    char add [100];
    struct   student *vM5qizV86LtP;
};
struct   student *JcpRihV (void ) {
    struct   student *yAE5Fo2NQCn;
    struct   student *XIFdNanhrY;
    yAE5Fo2NQCn = NULL;
    for (; 1;) {
        XIFdNanhrY = (struct   student *) malloc (LEN);
        scanf ("%s", XIFdNanhrY->ESO0bL);
        XIFdNanhrY->vM5qizV86LtP = yAE5Fo2NQCn;
        if (strcmp (XIFdNanhrY->ESO0bL, "end") == 0)
            break;
        scanf ("%s%s%s%s%s", XIFdNanhrY->fVi2dHzf, XIFdNanhrY->gender, XIFdNanhrY->BcrGjM3nbO, XIFdNanhrY->YE3sNMltjv, XIFdNanhrY->add);
        yAE5Fo2NQCn = XIFdNanhrY;
    }
    return (yAE5Fo2NQCn);
}

void  print (struct   student *yAE5Fo2NQCn) {
    struct   student *p;
    p = yAE5Fo2NQCn;
    for (; p != NULL;) {
        printf ("%s %s %s %s %s %s\n", p->ESO0bL, p->fVi2dHzf, p->gender, p->BcrGjM3nbO, p->YE3sNMltjv, p->add);
        p = p->vM5qizV86LtP;
    };
}

void  main () {
    struct   student *po;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    print (po);
    po = JcpRihV ();
}

