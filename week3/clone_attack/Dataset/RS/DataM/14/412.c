struct   student {
    int AUq2z0Y78WL;
    int score1;
    int score2;
    int sum;
    struct   student *next;
};
struct   student *x2uKgc3jTWI (int m) {
    int i = (148 - 148);
    struct   student *head, *p1, *p2;
    head = NULL;
    p1 = p2 = (struct   student *) malloc (LEN);
    scanf ("%d %d %d", &p1->AUq2z0Y78WL, &p1->score1, &p1->score2);
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
    p1->sum = (p1->score1) + (p1->score2);
    {
        i = 961 - 961;
        while (i < m - (878 - 877)) {
            if (!((123 - 123) != i))
                head = p1;
            else
                p2->next = p1;
            p2 = p1;
            p1 = (struct   student *) malloc (LEN);
            scanf ("%d %d %d", &p1->AUq2z0Y78WL, &p1->score1, &p1->score2);
            p1->sum = (p1->score1) + (p1->score2);
            i = i + 1;
        };
    }
    p2->next = p1;
    p1->next = NULL;
    return (head);
}

void  print (struct   student *head) {
    int a;
    int b;
    int c;
    a = (510 - 510);
    b = (112 - 112);
    c = 0;
    struct   student *p = head, *q = head;
    if (head != NULL) {
        do {
            if (a < p->sum) {
                a = p->sum;
                q = p;
            }
            p = p->next;
        }
        while (!(NULL == p));
        printf ("%d %d\n", q->AUq2z0Y78WL, q->sum);
        q->sum = 0;
        p = head;
        q = head;
        do {
            if (p->sum > b) {
                b = p->sum;
                q = p;
            }
            p = p->next;
        }
        while (p != NULL);
        printf ("%d %d\n", q->AUq2z0Y78WL, q->sum);
        q->sum = 0;
        p = head;
        q = head;
        do {
            if (c < p->sum) {
                c = p->sum;
                q = p;
            }
            p = p->next;
        }
        while (p != NULL);
        printf ("%d %d", q->AUq2z0Y78WL, q->sum);
    };
}

void  main () {
    struct   student *head;
    struct   student stu;
    print (head);
    int m;
    scanf ("%d", &m);
    head = x2uKgc3jTWI (m);
}

