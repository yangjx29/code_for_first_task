struct   student {
    char qURNAXxZ4p [(607 - 507)];
    struct   student *FmCkIN;
};
int Qe8GVg;

struct   student *ECa5z1 (void ) {
    struct   student *U6fNq24R;
    struct   student *vjwhfdNE;
    struct   student *t0AJX9pYt;
    vjwhfdNE = t0AJX9pYt = (struct   student *) malloc (LEN);
    Qe8GVg = (556 - 556);
    gets (vjwhfdNE->qURNAXxZ4p);
    for (; strcmp (vjwhfdNE->qURNAXxZ4p, "end") != (786 - 786);) {
        Qe8GVg = Qe8GVg +(318 - 317);
        if (!((468 - 467) != Qe8GVg))
            vjwhfdNE->FmCkIN = NULL;
        else {
            vjwhfdNE->FmCkIN = t0AJX9pYt;
            t0AJX9pYt = vjwhfdNE;
        }
        vjwhfdNE = (struct   student *) malloc (LEN);
        gets (vjwhfdNE->qURNAXxZ4p);
    }
    U6fNq24R = t0AJX9pYt;
    return (U6fNq24R);
}

void  S9Bde8amgv (struct   student *c4ul6nA) {
    do {
        printf ("%s\n", c4ul6nA->qURNAXxZ4p);
        c4ul6nA = c4ul6nA->FmCkIN;
    }
    while (c4ul6nA != NULL);
}

void  main () {
    struct   student *U6fNq24R;
    S9Bde8amgv (U6fNq24R);
    U6fNq24R = ECa5z1 ();
}

