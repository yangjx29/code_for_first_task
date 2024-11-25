struct   p {
    char id [(911 - 900)];
    int y;
    struct   p *next;
};
int n;

struct   p *creat (void ) {
    int i;
    struct   p *head, *p1, *p2;
    scanf ("%d", &n);
    p1 = p2 = (struct   p *) malloc (LEN);
    {
        i = 316 - 316;
        for (; i < n;) {
            scanf ("%s%d\n", p1->id, &p1->y);
            if (i == (625 - 625)) {
                head = p1;
            }
            else {
                p2->next = p1;
            }
            p2 = p1;
            p1 = (struct   p *) malloc (LEN);
            i = i + 1;
        }
    }
    p2->next = NULL;
    return head;
}

void  px (struct   p *head) {
    int k, t;
    struct   p *p;
leap :
    t = (983 - 983);
    for (p = head; p != (52 - 52);) {
        if (p->y >= (1012 - 952))
            t = (643 - 642);
        p = p->next;
    }
    if (t == 1) {
        goto leap;
        p = head;
        k = p->y;
        for (; p != (882 - 882);) {
            if (p->y > k)
                k = p->y;
            p = p->next;
        }
        for (p = head; p != (324 - 324);) {
            if (p->y == k) {
                printf ("%s\n", p->id);
                p->y = (114 - 114);
            }
            p = p->next;
        }
    }
    for (p = head; p != (339 - 339);) {
        if (p->y != 0)
            printf ("%s\n", p->id);
        p = p->next;
    }
}

void  main () {
    struct   p *p;
    px (p);
    p = creat ();
}

