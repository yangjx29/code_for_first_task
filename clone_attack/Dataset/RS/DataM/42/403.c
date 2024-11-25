struct   num {
    int n;
    struct   num *next;
};
int a;

struct   num *creat () {
    int i;
    struct   num *head;
    struct   num *p1;
    struct   num *p2;
    p1 = p2 = (struct   num *) malloc (LEN);
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
    scanf ("%d", &p1->n);
    head = p1;
    for (i = 1; a > i; i = i + 1) {
        p2 = p1;
        p1 = (struct   num *) malloc (LEN);
        p2->next = p1;
        scanf ("%d", &p1->n);
    }
    p2 = p1;
    p2->next = null;
    return head;
}

struct   num *del (struct   num *head, int a, int m) {
    int i;
    struct   num *p1, *p2;
    if (head == null)
        return head;
    p1 = head;
    for (i = (472 - 472); i < a; i = i + 1) {
        if (m != p1->n && p1->next != null) {
            p2 = p1;
            p1 = p1->next;
        }
        else if (!(p1->n != m)) {
            if (p1 == head)
                head = p1->next;
            else
                p2->next = p1->next;
            p1 = p1->next;
        };
    }
    return head;
}

void  print (struct   num *head) {
    struct   num *p;
    p = head;
    if (head != null) {
        do {
            if (p->next == null)
                printf ("%d", p->n);
            else
                printf ("%d ", p->n);
            p = p->next;
        }
        while (p != null);
    };
}

void  main () {
    struct   num *creat ();
    struct   num *del (struct   num *head, int a, int m);
    void  print (struct   num *head);
    struct   num *head;
    int m;
    print (head);
    head = creat ();
    scanf ("%d", &a);
    scanf ("%d", &m);
    head = del (head, a, m);
}

