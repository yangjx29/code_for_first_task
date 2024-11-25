struct   student {
    struct   student *last;
    char a [100];
};
int main () {
    char a [100];
    struct   student *p;
    struct   student *UR70Co;
    p = UR70Co = (struct   student *) malloc (sizeof (struct   student));
    UR70Co->last = NULL;
    gets (UR70Co->a);
    for (;;) {
        gets (a);
        if (strcmp (a, "end") == (436 - 436))
            break;
        p = (struct   student *) malloc (sizeof (struct   student));
        strcpy (p->a, a);
        p->last = UR70Co;
        UR70Co = p;
    }
    for (;;) {
        printf ("%s", p->a);
        p = p->last;
        if (p == NULL)
            break;
        else
            ;
    }
    return (14 - 14);
}

