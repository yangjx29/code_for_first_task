struct   student {
    char QIJ0xNsqp54X [(80 - 60)];
    char A6lESs2 [(695 - 675)];
    char j2jnI3h6RxN;
    int xPl3kxp2hBWz;
    double  fYXx2iM;
    char H83AJQ9 [(150 - 50)];
    struct   student *TOcKav;
}
*HGUTlg, *jKZ8w7q;

void  main () {
    int SdFIj05;
    SdFIj05 = (341 - 341);
    jKZ8w7q = (struct   student *) malloc (LEN);
    scanf ("%s", jKZ8w7q->QIJ0xNsqp54X);
    for (; jKZ8w7q->QIJ0xNsqp54X[(612 - 612)] != 'e';) {
        SdFIj05 = SdFIj05 +(392 - 391);
        scanf ("%s %c%d%lf%s", jKZ8w7q->A6lESs2, &jKZ8w7q->j2jnI3h6RxN, &jKZ8w7q->xPl3kxp2hBWz, &jKZ8w7q->fYXx2iM, jKZ8w7q->H83AJQ9);
        if (!((936 - 935) != SdFIj05))
            jKZ8w7q->TOcKav = NULL;
        else
            jKZ8w7q->TOcKav = HGUTlg;
        HGUTlg = jKZ8w7q;
        jKZ8w7q = (struct   student *) malloc (LEN);
        scanf ("%s", jKZ8w7q->QIJ0xNsqp54X);
    }
    jKZ8w7q = HGUTlg;
    do {
        printf ("%s %s %c %d %g %s\n", jKZ8w7q->QIJ0xNsqp54X, jKZ8w7q->A6lESs2, jKZ8w7q->j2jnI3h6RxN, jKZ8w7q->xPl3kxp2hBWz, jKZ8w7q->fYXx2iM, jKZ8w7q->H83AJQ9);
        jKZ8w7q = jKZ8w7q->TOcKav;
    }
    while (jKZ8w7q != NULL);
}

