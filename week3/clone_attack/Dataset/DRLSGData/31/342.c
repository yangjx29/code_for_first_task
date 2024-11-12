struct   student {
    char yLlVs2DbCyK [(117 - 97)];
    char k2iTq4A [(96 - 76)];
    char v3gieh [(746 - 744)];
    int cY1OCS;
    float uNQ1GK74w;
    char jF0x1r3ksU [(740 - 640)];
    struct   student *s3rRBCEm7o;
};
int main () {
    struct   student *P7buZxO;
    struct   student *WOa0Y41VtG;
    P7buZxO = (struct   student *) malloc (sizeof (struct   student));
    P7buZxO->s3rRBCEm7o = NULL;
    scanf ("%s", P7buZxO->yLlVs2DbCyK);
    for (; P7buZxO->yLlVs2DbCyK[(31 - 31)] != 'e';) {
        scanf ("%s%s%d%f%s", P7buZxO->k2iTq4A, P7buZxO->v3gieh, &P7buZxO->cY1OCS, &P7buZxO->uNQ1GK74w, P7buZxO->jF0x1r3ksU);
        WOa0Y41VtG = P7buZxO;
        P7buZxO = (struct   student *) malloc (sizeof (struct   student));
        P7buZxO->s3rRBCEm7o = WOa0Y41VtG;
        scanf ("%s", P7buZxO->yLlVs2DbCyK);
    }
    for (; WOa0Y41VtG != NULL;) {
        printf ("%s %s %s %d %g %s\n", WOa0Y41VtG->yLlVs2DbCyK, WOa0Y41VtG->k2iTq4A, WOa0Y41VtG->v3gieh, WOa0Y41VtG->cY1OCS, WOa0Y41VtG->uNQ1GK74w, WOa0Y41VtG->jF0x1r3ksU);
        WOa0Y41VtG = WOa0Y41VtG->s3rRBCEm7o;
    }
    return (679 - 679);
}

