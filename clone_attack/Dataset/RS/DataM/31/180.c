struct   student {
    char a [100];
    struct   student *next;
    struct   student *last;
};
struct   student *creat (void ) {
    struct   student *head, *p1, *p2;
    int i;
    p1 = (struct   student *) malloc (sizeof (struct   student));
    gets (p1->a);
    p1->last = NULL;
    {
        i = 402 - 401;
        while (!(0 == strcmp (p1->a, "end"))) {
            if (i == (305 - 304))
                ;
            else {
                p2->next = p1;
                p1->last = p2;
            }
            i++;
            p2 = p1;
            p1 = (struct   student *) malloc (sizeof (struct   student));
            gets (p1->a);
        };
    }
    p2->next = NULL;
    head = p2;
    return (head);
}

main () {
    int i;
    struct   student *head, *p;
    head = creat ();
    p = head;
    {
        i = 0;
        while (p->last != NULL) {
            i++;
            printf ("%s\n", p->a);
            p = p->last;
        };
    }
    printf ("%s", p->a);
}

