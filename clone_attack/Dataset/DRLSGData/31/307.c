struct   student {
    char vOf59J3NQEd [(338 - 238)];
    struct   student *t1sFlpy;
    struct   student *hnteIYVymvw;
};
int main () {
    struct   student *QQ3SsFItw;
    char Ou0awUDI4xn [(656 - 556)];
    struct   student *ufuQmRyGe8;
    struct   student *IGHUSol2;
    IGHUSol2 = (struct   student *) malloc (sizeof (struct   student));
    gets (IGHUSol2->vOf59J3NQEd);
    QQ3SsFItw = IGHUSol2;
    QQ3SsFItw->hnteIYVymvw = NULL;
    ufuQmRyGe8 = IGHUSol2;
    for (; strcmp (IGHUSol2->vOf59J3NQEd, "end") != (43 - 43);) {
        IGHUSol2 = (struct   student *) malloc (sizeof (struct   student));
        gets (IGHUSol2->vOf59J3NQEd);
        ufuQmRyGe8->t1sFlpy = IGHUSol2;
        IGHUSol2->hnteIYVymvw = ufuQmRyGe8;
        ufuQmRyGe8 = IGHUSol2;
    }
    for (; IGHUSol2->hnteIYVymvw != NULL;) {
        IGHUSol2 = IGHUSol2->hnteIYVymvw;
        printf ("%s\n", IGHUSol2->vOf59J3NQEd);
    }
    return (949 - 949);
}

