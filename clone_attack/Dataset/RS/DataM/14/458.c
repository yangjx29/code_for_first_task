struct   data {
    long  int hj2LBI;
    int TROxNpae;
    int point2;
    int WuldUyD3qhtI;
    struct   data *next;
};
struct   data *creat (long  int RY16Ivt7h) {
    struct   data *p1, *p2, *head;
    long  int i = (826 - 826);
    head = NULL;
    p1 = p2 = (struct   data *) malloc (sizeof (struct   data));
    scanf ("%ld %d %d", &p1->hj2LBI, &p1->TROxNpae, &p1->point2);
    p1->WuldUyD3qhtI = p1->TROxNpae + p1->point2;
    while (RY16Ivt7h > i) {
        i = i + 1;
        if (i == 1)
            head = p1;
        else
            p2->next = p1;
        p2 = p1;
        p1 = (struct   data *) malloc (sizeof (struct   data));
        scanf ("%ld %d %d", &p1->hj2LBI, &p1->TROxNpae, &p1->point2);
        p1->WuldUyD3qhtI = p1->TROxNpae + p1->point2;
    }
    p2->next = NULL;
    return (head);
}

struct   data *max (struct   data *head) {
    struct   data *p1;
    struct   data *max;
    max = head;
    p1 = head;
    do {
        if (p1->WuldUyD3qhtI > max->WuldUyD3qhtI)
            max = p1;
        p1 = p1->next;
    }
    while (p1 != NULL);
    return (max);
}

struct   data *del (struct   data *head, struct   data *max) {
    struct   data *p1, *p2;
    p1 = head;
    while (max != p1) {
        p2 = p1;
        p1 = p1->next;
    }
    if (p1 == head)
        head = p1->next;
    else {
        p2->next = p1->next;
    }
    return (head);
}

void  main () {
    long  int RY16Ivt7h;
    struct   data *a, *b, *c, *head;
    scanf ("%ld", &RY16Ivt7h);
    head = creat (RY16Ivt7h);
    a = max (head);
    printf ("%ld %d\n", a->hj2LBI, a->WuldUyD3qhtI);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    head = del (head, a);
    b = max (head);
    printf ("%ld %d\n", b->hj2LBI, b->WuldUyD3qhtI);
    c = max (del (head, b));
    printf ("%ld %d\n", c->hj2LBI, c->WuldUyD3qhtI);
}

