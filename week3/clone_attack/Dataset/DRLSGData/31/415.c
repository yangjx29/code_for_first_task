struct   student {
    char JRUMSlWY [(327 - 307)];
    char zmYhDey [(120 - 70)];
    char hQy3TsMK;
    int yv5gOcLIrm;
    char unJkEhx [(427 - 417)];
    char dhvuZ0 [(775 - 725)];
    struct   student *XqVhJQCOA;
};
void  main () {
    struct   student *pSIzaRW;
    struct   student *fRUfJ4DCl;
    int zR7P1QXYZoFS;
    pSIzaRW = fRUfJ4DCl = (struct   student *) malloc (l);
    for (zR7P1QXYZoFS = (441 - 441);; zR7P1QXYZoFS = zR7P1QXYZoFS + (768 - 767)) {
        scanf ("%s", pSIzaRW->JRUMSlWY);
        if (!('e' != pSIzaRW->JRUMSlWY[(210 - 210)]))
            break;
        scanf ("%s %c %d %s %s", pSIzaRW->zmYhDey, &pSIzaRW->hQy3TsMK, &pSIzaRW->yv5gOcLIrm, pSIzaRW->unJkEhx, pSIzaRW->dhvuZ0);
        if (!((187 - 187) != zR7P1QXYZoFS)) {
            pSIzaRW->XqVhJQCOA = NULL;
        }
        else
            pSIzaRW->XqVhJQCOA = fRUfJ4DCl;
        fRUfJ4DCl = pSIzaRW;
        pSIzaRW = (struct   student *) malloc (l);
    }
    while (fRUfJ4DCl != NULL) {
        printf ("%s %s %c %d %s %s\n", fRUfJ4DCl->JRUMSlWY, fRUfJ4DCl->zmYhDey, fRUfJ4DCl->hQy3TsMK, fRUfJ4DCl->yv5gOcLIrm, fRUfJ4DCl->unJkEhx, fRUfJ4DCl->dhvuZ0);
        fRUfJ4DCl = fRUfJ4DCl->XqVhJQCOA;
    }
}

