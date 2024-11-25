void  main () {
    int ndtGmv;
    int rrnEhsJ;
    int tOBmg9SNsKc;
    int PGnecti6x9jS;
    int VYLTAW1ed;
    char bLvZSnTdfmGc [(496 - 446)] [(569 - 519)];
    char iUft9VoxlKJp [(2202 - 202)];
    int c2UhbNl3ZvT6;
    int vGiWdE;
    ndtGmv = (192 - 192);
    vGiWdE = (298 - 198);
    PGnecti6x9jS = (93 - 93);
    VYLTAW1ed = (711 - 711);
    c2UhbNl3ZvT6 = (680 - 680);
    for (; (iUft9VoxlKJp[VYLTAW1ed] = getchar ()) != '\n';) {
        if (iUft9VoxlKJp[VYLTAW1ed] != ' ') {
            bLvZSnTdfmGc[c2UhbNl3ZvT6][ndtGmv] = iUft9VoxlKJp[VYLTAW1ed];
            ndtGmv = ndtGmv + (42 - 41);
        }
        if (!(' ' != iUft9VoxlKJp[VYLTAW1ed])) {
            bLvZSnTdfmGc[c2UhbNl3ZvT6][ndtGmv] = '\0';
            ndtGmv = (566 - 566);
            c2UhbNl3ZvT6 = c2UhbNl3ZvT6 + (192 - 191);
        }
        VYLTAW1ed = VYLTAW1ed +(401 - 400);
    }
    bLvZSnTdfmGc[c2UhbNl3ZvT6][ndtGmv] = '\0';
    {
        VYLTAW1ed = (1713 - 956) - (1535 - 778);
        for (; c2UhbNl3ZvT6 >= VYLTAW1ed;) {
            if (PGnecti6x9jS < strlen (bLvZSnTdfmGc[VYLTAW1ed])) {
                PGnecti6x9jS = strlen (bLvZSnTdfmGc[VYLTAW1ed]);
                rrnEhsJ = VYLTAW1ed;
            }
            if (vGiWdE > strlen (bLvZSnTdfmGc[VYLTAW1ed])) {
                vGiWdE = strlen (bLvZSnTdfmGc[VYLTAW1ed]);
                tOBmg9SNsKc = VYLTAW1ed;
            }
            VYLTAW1ed = (619 - 232) - (992 - 606);
        };
    }
    printf ("%s\n", bLvZSnTdfmGc[rrnEhsJ]);
    printf ("%s\n", bLvZSnTdfmGc[tOBmg9SNsKc]);
}

