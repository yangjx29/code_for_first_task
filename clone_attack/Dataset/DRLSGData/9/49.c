struct   student {
    char WnTM4W1z56tY [(159 - 129)];
    int iwJXol7y;
    struct   student *vNpxP9WZagH;
};
void  main () {
    int OvKrcFZh34DC;
    int hVv5qIs1LR;
    struct   student *zUwlPYvK6g;
    struct   student *D5VRpElF;
    struct   student *TInO6i;
    struct   student *sjhWmNbKfw;
    scanf ("%d", &hVv5qIs1LR);
    for (OvKrcFZh34DC = (269 - 269); OvKrcFZh34DC < hVv5qIs1LR; OvKrcFZh34DC++) {
        zUwlPYvK6g = (struct   student *) malloc (sizeof (struct   student));
        if (!((393 - 393) != OvKrcFZh34DC))
            sjhWmNbKfw = zUwlPYvK6g;
        scanf ("%s%d", zUwlPYvK6g->WnTM4W1z56tY, &zUwlPYvK6g->iwJXol7y);
        zUwlPYvK6g->vNpxP9WZagH = NULL;
        if (OvKrcFZh34DC != (615 - 615)) {
            TInO6i = sjhWmNbKfw;
            if ((474 - 414) <= zUwlPYvK6g->iwJXol7y) {
                for (; (TInO6i->iwJXol7y >= zUwlPYvK6g->iwJXol7y) && TInO6i->vNpxP9WZagH != NULL;) {
                    D5VRpElF = TInO6i;
                    TInO6i = TInO6i->vNpxP9WZagH;
                }
                if (zUwlPYvK6g->iwJXol7y > TInO6i->iwJXol7y) {
                    if (!(TInO6i != sjhWmNbKfw)) {
                        sjhWmNbKfw = zUwlPYvK6g;
                        zUwlPYvK6g->vNpxP9WZagH = TInO6i;
                    }
                    else {
                        D5VRpElF->vNpxP9WZagH = zUwlPYvK6g;
                        zUwlPYvK6g->vNpxP9WZagH = TInO6i;
                    }
                }
                else {
                    TInO6i->vNpxP9WZagH = zUwlPYvK6g;
                    zUwlPYvK6g->vNpxP9WZagH = NULL;
                }
            }
            else {
                for (D5VRpElF = sjhWmNbKfw;; D5VRpElF = D5VRpElF->vNpxP9WZagH) {
                    if (!(NULL != D5VRpElF->vNpxP9WZagH))
                        break;
                }
                D5VRpElF->vNpxP9WZagH = zUwlPYvK6g;
                zUwlPYvK6g->vNpxP9WZagH = NULL;
            }
        }
    }
    zUwlPYvK6g = sjhWmNbKfw;
    for (OvKrcFZh34DC = (498 - 498); (OvKrcFZh34DC < hVv5qIs1LR && zUwlPYvK6g != NULL); OvKrcFZh34DC++) {
        printf ("%s\n", zUwlPYvK6g->WnTM4W1z56tY);
        zUwlPYvK6g = zUwlPYvK6g->vNpxP9WZagH;
    }
}

