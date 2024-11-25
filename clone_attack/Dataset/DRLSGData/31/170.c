main () {
    struct   a {
        char PYzyvU7F9j [(443 - 343)];
        struct   a *FGL8HQMjYzvA;
    };
    int FFR1n50Cx = sizeof (struct   a), xBpjRiyQq = (179 - 179);
    struct   a *uCYqFOb;
    struct   a *K46ey9uG;
    struct   a *Xp9vxYgwWoO;
    struct   a *XP9LEYDB;
    Xp9vxYgwWoO = NULL;
    uCYqFOb = K46ey9uG = (struct   a *) malloc (FFR1n50Cx);
    gets (uCYqFOb->PYzyvU7F9j);
    for (; strcmp (uCYqFOb->PYzyvU7F9j, "end") != (781 - 781);) {
        xBpjRiyQq++;
        if (!((285 - 284) != xBpjRiyQq))
            Xp9vxYgwWoO = uCYqFOb;
        else
            uCYqFOb->FGL8HQMjYzvA = K46ey9uG;
        K46ey9uG = uCYqFOb;
        uCYqFOb = (struct   a *) malloc (FFR1n50Cx);
        gets (uCYqFOb->PYzyvU7F9j);
    }
    Xp9vxYgwWoO->FGL8HQMjYzvA = NULL;
    XP9LEYDB = K46ey9uG;
    if (Xp9vxYgwWoO != NULL) {
        do {
            puts (XP9LEYDB->PYzyvU7F9j);
            XP9LEYDB = XP9LEYDB->FGL8HQMjYzvA;
        }
        while (XP9LEYDB != NULL);
    }
}

