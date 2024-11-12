struct   student {
    char hZDa3t [1000];
    struct   student *rvupNth1k;
    struct   student *NL5sZUvIrpY;
};
int CROzmZYS3P2;

struct   student *kxSBKJgwQpb (void ) {
    struct   student *uLSpAtjrGfRK;
    struct   student *Iaxb3ygRzK2E;
    struct   student *y7gz1d;
    Iaxb3ygRzK2E = (struct   student *) malloc (sizeof (struct   student));
    y7gz1d = Iaxb3ygRzK2E;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    gets (Iaxb3ygRzK2E->hZDa3t);
    uLSpAtjrGfRK = NULL;
    Iaxb3ygRzK2E->NL5sZUvIrpY = NULL;
    for (CROzmZYS3P2 = 1; !(0 == strcmp (Iaxb3ygRzK2E->hZDa3t, "end")); CROzmZYS3P2 = CROzmZYS3P2 +1) {
        if (CROzmZYS3P2 == 1)
            uLSpAtjrGfRK = Iaxb3ygRzK2E;
        else
            y7gz1d->rvupNth1k = Iaxb3ygRzK2E;
        y7gz1d = Iaxb3ygRzK2E;
        Iaxb3ygRzK2E = (struct   student *) malloc (sizeof (struct   student));
        gets (Iaxb3ygRzK2E->hZDa3t);
        if (strcmp (Iaxb3ygRzK2E->hZDa3t, "end") == 0)
            break;
        Iaxb3ygRzK2E->NL5sZUvIrpY = y7gz1d;
    }
    uLSpAtjrGfRK = y7gz1d;
    y7gz1d->rvupNth1k = NULL;
    return (uLSpAtjrGfRK);
}

void  JsLtjalEv (struct   student *uLSpAtjrGfRK) {
    struct   student *gljVEaphL;
    gljVEaphL = uLSpAtjrGfRK;
    if (uLSpAtjrGfRK != NULL)
        for (; gljVEaphL != NULL;) {
            printf ("%s\n", gljVEaphL->hZDa3t);
            gljVEaphL = gljVEaphL->NL5sZUvIrpY;
        };
}

void  main () {
    struct   student *uLSpAtjrGfRK;
    JsLtjalEv (uLSpAtjrGfRK);
    uLSpAtjrGfRK = kxSBKJgwQpb ();
}

