struct   student {
    char hs3ejqM4PtQz [(280 - 260)];
    char wnMLjmg [(663 - 643)];
    char yLOCAXQ;
    int vmLeH6v2wdz;
    char bsECyAXc7bTn [(614 - 594)];
    char jNuzrJB9U [(170 - 150)];
    struct   student *wx5zouDP0b3B;
    struct   student *qFXbr2kohlz8;
};
struct   student *KEOVYZ () {
    struct   student *zTKWVI;
    struct   student *rC2I3jKB6QMO;
    struct   student *KEaI5o;
    struct   student *gmQrjNuq;
    rC2I3jKB6QMO = (struct   student *) malloc (LEN);
    scanf ("%s", rC2I3jKB6QMO->hs3ejqM4PtQz);
    if (!((480 - 480) != strcmp (rC2I3jKB6QMO->hs3ejqM4PtQz, "end"))) {
        free (rC2I3jKB6QMO);
        zTKWVI = NULL;
        gmQrjNuq = NULL;
    }
    else {
        zTKWVI = rC2I3jKB6QMO;
        scanf ("%s %c %d %s %s", rC2I3jKB6QMO->wnMLjmg, &rC2I3jKB6QMO->yLOCAXQ, &rC2I3jKB6QMO->vmLeH6v2wdz, rC2I3jKB6QMO->bsECyAXc7bTn, rC2I3jKB6QMO->jNuzrJB9U);
        rC2I3jKB6QMO->wx5zouDP0b3B = NULL;
        rC2I3jKB6QMO->qFXbr2kohlz8 = NULL;
        KEaI5o = rC2I3jKB6QMO;
        do {
            rC2I3jKB6QMO = (struct   student *) malloc (LEN);
            rC2I3jKB6QMO->qFXbr2kohlz8 = KEaI5o;
            rC2I3jKB6QMO->wx5zouDP0b3B = NULL;
            scanf ("%s", rC2I3jKB6QMO->hs3ejqM4PtQz);
            if (!((179 - 179) != strcmp (rC2I3jKB6QMO->hs3ejqM4PtQz, "end"))) {
                free (rC2I3jKB6QMO);
                KEaI5o->wx5zouDP0b3B = NULL;
                gmQrjNuq = KEaI5o;
                break;
            }
            else {
                scanf ("%s %c %d %s %s", rC2I3jKB6QMO->wnMLjmg, &rC2I3jKB6QMO->yLOCAXQ, &rC2I3jKB6QMO->vmLeH6v2wdz, rC2I3jKB6QMO->bsECyAXc7bTn, rC2I3jKB6QMO->jNuzrJB9U);
                KEaI5o->wx5zouDP0b3B = rC2I3jKB6QMO;
                rC2I3jKB6QMO->qFXbr2kohlz8 = KEaI5o;
                rC2I3jKB6QMO->wx5zouDP0b3B = NULL;
                KEaI5o = rC2I3jKB6QMO;
            }
        }
        while ((287 - 286));
    }
    return (gmQrjNuq);
}

void  DCXDL1vgwmy (struct   student *gmQrjNuq) {
    struct   student *C1ymFsuxZhL7;
    C1ymFsuxZhL7 = gmQrjNuq;
    for (; C1ymFsuxZhL7;) {
        printf ("%s %s %c %d %s %s\n", C1ymFsuxZhL7->hs3ejqM4PtQz, C1ymFsuxZhL7->wnMLjmg, C1ymFsuxZhL7->yLOCAXQ, C1ymFsuxZhL7->vmLeH6v2wdz, C1ymFsuxZhL7->bsECyAXc7bTn, C1ymFsuxZhL7->jNuzrJB9U);
        C1ymFsuxZhL7 = C1ymFsuxZhL7->qFXbr2kohlz8;
    }
}

int main () {
    struct   student *gmQrjNuq;
    DCXDL1vgwmy (gmQrjNuq);
    gmQrjNuq = KEOVYZ ();
}

