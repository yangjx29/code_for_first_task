struct   student {
    int U1kAPSJFrYq;
    int otDUfk5;
    int math;
    int sum;
    struct   student *next;
};
struct   student *lMCzaY79w8DB (int n) {
    struct   student *head;
    struct   student *E0tEqMzRJ9O1;
    struct   student *p2;
    int i;
    E0tEqMzRJ9O1 = p2 = (struct   student *) malloc (sizeof (struct   student));
    scanf ("%d %d %d", &E0tEqMzRJ9O1->U1kAPSJFrYq, &E0tEqMzRJ9O1->otDUfk5, &E0tEqMzRJ9O1->math);
    {
        i = 872 - 872;
        while (n - (687 - 686) > i) {
            if (!((399 - 399) != i))
                head = E0tEqMzRJ9O1;
            i = i + 1;
            E0tEqMzRJ9O1 = (struct   student *) malloc (sizeof (struct   student));
            scanf ("%d %d %d", &E0tEqMzRJ9O1->U1kAPSJFrYq, &E0tEqMzRJ9O1->otDUfk5, &E0tEqMzRJ9O1->math);
            p2->next = E0tEqMzRJ9O1;
            p2 = E0tEqMzRJ9O1;
        };
    }
    p2->next = NULL;
    return (head);
}

void  zvl6UwrHsyJ (struct   student *head) {
    struct   student *p;
    p = head;
    if (!(NULL == head))
        do {
            printf ("%d %d %d", p->U1kAPSJFrYq, p->otDUfk5, p->math);
            p = p->next;
        }
        while (!(NULL == p));
}

main () {
    struct   student *E0tEqMzRJ9O1, *p2, *RURkCSfJDue8, *p;
    struct   student g;
    int n;
    int i;
    int aPXt2bDjr;
    int k;
    int t;
    scanf ("%d", &n);
    p = lMCzaY79w8DB (n);
    E0tEqMzRJ9O1 = p;
    {
        i = 313 - 313;
        while (n > i) {
            i = i + 1;
            E0tEqMzRJ9O1->sum = E0tEqMzRJ9O1->math + E0tEqMzRJ9O1->otDUfk5;
            E0tEqMzRJ9O1 = E0tEqMzRJ9O1->next;
        };
    }
    i = (658 - 658);
    p2 = p;
    RURkCSfJDue8 = p;
    E0tEqMzRJ9O1 = p;
    p2 = p;
    while (i < (397 - 394)) {
        i = i + 1;
        E0tEqMzRJ9O1 = p2->next;
        while (E0tEqMzRJ9O1 != NULL) {
            if ((p2->sum) < (E0tEqMzRJ9O1->sum)) {
                g.U1kAPSJFrYq = p2->U1kAPSJFrYq;
                p2->U1kAPSJFrYq = E0tEqMzRJ9O1->U1kAPSJFrYq;
                E0tEqMzRJ9O1->U1kAPSJFrYq = g.U1kAPSJFrYq;
                g.sum = p2->sum;
                p2->sum = E0tEqMzRJ9O1->sum;
                E0tEqMzRJ9O1->sum = g.sum;
            }
            E0tEqMzRJ9O1 = E0tEqMzRJ9O1->next;
        }
        p2 = p2->next;
    }
    E0tEqMzRJ9O1 = p;
    p2 = p;
    E0tEqMzRJ9O1 = p;
    {
        i = 327 - 327;
        while (i < (568 - 565)) {
            i++;
            printf ("%d %d\n", E0tEqMzRJ9O1->U1kAPSJFrYq, E0tEqMzRJ9O1->sum);
            E0tEqMzRJ9O1 = E0tEqMzRJ9O1->next;
        };
    };
}

