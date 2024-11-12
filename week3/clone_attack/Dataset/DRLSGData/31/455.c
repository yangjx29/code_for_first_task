struct   student {
    char qLg1h47k5 [(189 - 169)];
    char eGp0CR [(47 - 27)];
    char jNhlB6YM;
    int v3TWjChv1E4;
    char NzeBAFb [(457 - 407)];
    char HBtKEJ [(175 - 155)];
    struct   student *Px06QlyI;
};
struct   student *G9iN20kCnl (void ) {
    struct   student *haIG7u8F;
    struct   student *EZfrVb, *Glko6x;
    EZfrVb = (struct   student *) malloc (len);
    EZfrVb->Px06QlyI = NULL;
    Glko6x = EZfrVb;
    do {
        scanf ("%s", EZfrVb->qLg1h47k5);
        if (!('e' != EZfrVb->qLg1h47k5[(770 - 770)])) {
            free (EZfrVb);
            haIG7u8F = Glko6x;
            return (haIG7u8F);
        }
        else {
            scanf ("%s %c %d %s", EZfrVb->eGp0CR, &EZfrVb->jNhlB6YM, &EZfrVb->v3TWjChv1E4, EZfrVb->NzeBAFb);
            scanf ("%s", EZfrVb->HBtKEJ);
            Glko6x = EZfrVb;
            EZfrVb = (struct   student *) malloc (len);
            EZfrVb->Px06QlyI = Glko6x;
        }
    }
    while ((198 - 197));
}

void  main () {
    struct   student *bJRkUOWK0D = G9iN20kCnl ();
    struct   student *qsk0B3OeZah = bJRkUOWK0D;
    for (; qsk0B3OeZah != NULL;) {
        printf ("%s %s %c %d %s %s\n", qsk0B3OeZah->qLg1h47k5, qsk0B3OeZah->eGp0CR, qsk0B3OeZah->jNhlB6YM, qsk0B3OeZah->v3TWjChv1E4, qsk0B3OeZah->NzeBAFb, qsk0B3OeZah->HBtKEJ);
        qsk0B3OeZah = qsk0B3OeZah->Px06QlyI;
    }
}

