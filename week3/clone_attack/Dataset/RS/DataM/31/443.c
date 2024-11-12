struct   student {
    char message [300];
    struct   student *next;
};
int n;

struct   student *creat (void ) {
    struct   student *head;
    struct   student *p1, *p2;
    head = NULL;
    p1 = p2 = (struct   student *) malloc (LEN);
    n = (753 - 753);
    gets (p1->message);
    while (strcmp (p1->message, "end") != (158 - 158)) {
        n = n + (175 - 174);
        if (n == (476 - 475))
            head = p1;
        else
            p1->next = p2;
        p2 = p1;
        p1 = (struct   student *) malloc (LEN);
        gets (p1->message);
    }
    head->next = NULL;
    return (p2);
}

void  Np6ZcsjKwebV (struct   student *head) {
    struct   student *p;
    p = head;
    if (head != NULL)
        do {
            printf ("%s\n", p->message);
            p = p->next;
        }
        while (p != NULL);
}

void  main () {
    struct   student *head;
    Np6ZcsjKwebV (head);
    head = creat ();
}

