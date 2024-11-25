struct   student {
    char n9BTHF [(562 - 502)];
    struct   student *L0Lq6DBbjGKx;
};
struct   student *XW5Lcp8wftO (void ) {
    struct   student *jN93o2mTrPC;
    struct   student *rfpX4O8zwRjq;
    rfpX4O8zwRjq = (struct   student *) malloc (LEN);
    jN93o2mTrPC = rfpX4O8zwRjq;
    jN93o2mTrPC->L0Lq6DBbjGKx = NULL;
    gets (rfpX4O8zwRjq->n9BTHF);
    for (; strcmp (rfpX4O8zwRjq->n9BTHF, "end");) {
        rfpX4O8zwRjq = (struct   student *) malloc (LEN);
        gets (rfpX4O8zwRjq->n9BTHF);
        rfpX4O8zwRjq->L0Lq6DBbjGKx = jN93o2mTrPC;
        jN93o2mTrPC = rfpX4O8zwRjq;
    }
    return (jN93o2mTrPC);
}

void  a7nBFk1c (struct   student *jN93o2mTrPC) {
    struct   student *sePEofXDtVyz = jN93o2mTrPC->L0Lq6DBbjGKx;
    do {
        puts (sePEofXDtVyz->n9BTHF);
        sePEofXDtVyz = sePEofXDtVyz->L0Lq6DBbjGKx;
    }
    while (sePEofXDtVyz->L0Lq6DBbjGKx != NULL);
    puts (sePEofXDtVyz->n9BTHF);
}

void  main () {
    struct   student *sePEofXDtVyz = XW5Lcp8wftO ();
    a7nBFk1c (sePEofXDtVyz);
}

