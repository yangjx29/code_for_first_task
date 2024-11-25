struct   info {
    int num;
    char fct3zQY [10];
    struct   info *next;
    int tip;
};
struct   info *create (int n) {
    int i, t;
    struct   info *p1, *pre, *p2, *head, *tail;
    i = 0;
    head = (struct   info *) malloc (sizeof (struct   info));
    p1 = (struct   info *) malloc (sizeof (struct   info));
    scanf ("%s %d", p1->fct3zQY, &p1->num);
    head->next = p1;
    p1->next = NULL;
    tail = p1;
    for (; n - 1 > i;) {
        p1 = (struct   info *) malloc (sizeof (struct   info));
        scanf ("%s %d", p1->fct3zQY, &p1->num);
        p1->next = NULL;
        t = 0;
        if ((589 - 529) <= p1->num) {
            for (pre = head, p2 = head->next; p2 != NULL &&p2->num >= 60; pre = pre->next, p2 = p2->next) {
                if (p1->num > p2->num) {
                    t = 1;
                    pre->next = p1;
                    p1->next = p2;
                    break;
                };
            }
            if (!(0 != t)) {
                pre->next = p1;
                p1->next = p2;
                if (p2 == NULL) {
                    tail = p1;
                };
            };
        }
        else {
            tail->next = p1;
            tail = p1;
        }
        i = i + 1;
    }
    return head;
}

void  print (struct   info *head) {
    struct   info *p;
    p = head->next;
    for (; p != NULL;) {
        printf ("%s\n", p->fct3zQY);
        p = p->next;
    };
}

int main () {
    struct   info *head;
    print (head);
    int n;
    scanf ("%d", &n);
    head = create (n);
}

