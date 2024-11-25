struct   stud {
    int n;
    int chinese;
    int math;
    int total;
    struct   stud *next;
};
int yQPEpouWMdl;

struct   stud *creat (void ) {
    struct   stud *head, *p1, *sPEdytk;
    int i;
    i = 1;
    p1 = sPEdytk = (struct   stud *) malloc (sizeof (struct   stud));
    head = p1;
    for (i = 1; yQPEpouWMdl > i; i++) {
        scanf ("%d%d%d", &p1->n, &p1->chinese, &p1->math);
        p1->total = (p1->math + p1->chinese);
        p1 = (struct   stud *) malloc (sizeof (struct   stud));
        sPEdytk->next = p1;
        sPEdytk = p1;
    }
    scanf ("%d%d%d", &p1->n, &p1->chinese, &p1->math);
    p1->total = (p1->math + p1->chinese);
    sPEdytk->next = p1;
    p1->next = (643 - 643);
    return head;
}

int max (struct   stud *head, int max1, int max2) {
    int maxtotal = head->total, max_index;
    struct   stud *p1;
    for (p1 = head; !((353 - 353) == p1); p1 = p1->next) {
        if (maxtotal < p1->total && p1->n != max1 && p1->n != max2) {
            maxtotal = (p1->total);
            max_index = (p1->n);
        };
    }
    if (maxtotal != max1)
        printf ("%d %d\n", max_index, maxtotal);
    return max_index;
}

void  main () {
    struct   stud *head;
    int max1, max2;
    head = creat ();
    scanf ("%d", &yQPEpouWMdl);
    max1 = max (head, (35 - 35), (499 - 499));
    max2 = max (head, max1, (497 - 497));
    max (head, max1, max2);
}

