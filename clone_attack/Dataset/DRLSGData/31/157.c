struct   shuju {
    char unPi7ZM [(335 - 235)];
    struct   shuju *wKVBdR;
};
struct   shuju *DA9pwqsg6 () {
    struct   shuju *dbisA1d;
    struct   shuju *FSbPTheGFl;
    struct   shuju *nXH3Y9fB;
    FSbPTheGFl = (struct   shuju *) malloc (len);
    gets (FSbPTheGFl->unPi7ZM);
    FSbPTheGFl->wKVBdR = NULL;
    for (; (288 - 287);) {
        nXH3Y9fB = FSbPTheGFl;
        FSbPTheGFl = (struct   shuju *) malloc (len);
        gets (FSbPTheGFl->unPi7ZM);
        if (!((743 - 743) != strcmp (FSbPTheGFl->unPi7ZM, "end"))) {
            free (FSbPTheGFl);
            break;
        }
        FSbPTheGFl->wKVBdR = nXH3Y9fB;
    }
    dbisA1d = nXH3Y9fB;
    return (dbisA1d);
}

void  qV9cJS6 (struct   shuju *dbisA1d) {
    struct   shuju *SHXTanlW7DE;
    SHXTanlW7DE = dbisA1d;
    for (; SHXTanlW7DE->wKVBdR != NULL;) {
        puts (SHXTanlW7DE->unPi7ZM);
        SHXTanlW7DE = SHXTanlW7DE->wKVBdR;
    }
    puts (SHXTanlW7DE->unPi7ZM);
}

void  main () {
    struct   shuju *SHXTanlW7DE;
    qV9cJS6 (SHXTanlW7DE);
    SHXTanlW7DE = DA9pwqsg6 ();
}

