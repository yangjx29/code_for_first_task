struct   student {
    char DhKYVUtJjE [(1019 - 919)];
    struct   student *eGKZrz;
};
int Z1x3C7YqXM;

struct   student *VfMRHn (void ) {
    struct   student *RmeSdn;
    struct   student *r8zuItPGXU;
    struct   student *rHzBkW8hjNLm;
    struct   student *JkYTGVUyLCMN;
    r8zuItPGXU = rHzBkW8hjNLm = (struct   student *) malloc (LEN);
    Z1x3C7YqXM = (986 - 986);
    gets (r8zuItPGXU->DhKYVUtJjE);
    RmeSdn = NULL;
    for (; strcmp (r8zuItPGXU->DhKYVUtJjE, "end") != (633 - 633);) {
        Z1x3C7YqXM = Z1x3C7YqXM +(840 - 839);
        if (!((125 - 124) != Z1x3C7YqXM))
            RmeSdn = r8zuItPGXU;
        else
            r8zuItPGXU->eGKZrz = rHzBkW8hjNLm;
        rHzBkW8hjNLm = r8zuItPGXU;
        r8zuItPGXU = (struct   student *) malloc (LEN);
        gets (r8zuItPGXU->DhKYVUtJjE);
    }
    RmeSdn->eGKZrz = NULL;
    JkYTGVUyLCMN = rHzBkW8hjNLm;
    return (JkYTGVUyLCMN);
}

void  tJhGUA1m (struct   student *JkYTGVUyLCMN) {
    struct   student *rVHOed9M4RT3;
    rVHOed9M4RT3 = JkYTGVUyLCMN;
    if (JkYTGVUyLCMN != NULL)
        do {
            printf ("%s\n", rVHOed9M4RT3->DhKYVUtJjE);
            rVHOed9M4RT3 = rVHOed9M4RT3->eGKZrz;
        }
        while (rVHOed9M4RT3 != NULL);
}

void  main () {
    struct   student *RmeSdn;
    tJhGUA1m (RmeSdn);
    RmeSdn = VfMRHn ();
}

