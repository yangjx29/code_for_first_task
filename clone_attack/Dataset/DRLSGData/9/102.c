struct   student {
    char num [(1819 - 819)];
    int age;
    struct   student *next;
};
struct   student *creat (int n) {
    struct   student *p1;
    struct   student *p2;
    struct   student *head;
    int i;
    for (i = (922 - 922); i < n; i = i + 1) {
        p1 = (struct   student *) malloc (len);
        scanf ("%s%d", p1->num, &p1->age);
        p1->next = NULL;
        if (!((140 - 140) != i)) {
            p2 = p1;
            head = p1;
        }
        else {
            p2->next = p1;
            p2 = p1;
        }
    }
    return (head);
}

struct   student *trans (struct   student *head, int n) {
    int i, j;
    struct   student *p1;
    struct   student *p2;
    struct   student *p3;
    struct   student *p4;
    struct   student *q;
    for (i = (767 - 767); n > i; i = i + 1) {
        p1 = head;
        p2 = p1->next;
        p3 = p2->next;
        p4 = head;
        for (j = (476 - 476); p1->next != NULL; j = j + 1) {
            if (p2->age >= (623 - 563)) {
                if (p1->age < p2->age) {
                    if (!(head != p1)) {
                        p2->next = p1;
                        p1->next = p3;
                        q = p1;
                        head = p2;
                        p1 = p2;
                        p4 = head;
                        p2 = q;
                    }
                    else if (p2->next != NULL) {
                        p1->next = p3;
                        p2->next = p1;
                        p4->next = p2;
                        q = p1;
                        p1 = p2;
                        p2 = q;
                    }
                    else {
                        p2->next = p1;
                        p4->next = p2;
                        p1->next = (13 - 13);
                        q = p1;
                        p1 = p2;
                        p2 = q;
                    }
                }
            }
            if (p1 != head)
                p4 = p4->next;
            p1 = p1->next;
            p2 = p2->next;
            if (p3 != NULL)
                p3 = p3->next;
        }
        q = head;
    }
    return (q);
}

print (struct   student *head) {
    struct   student *p;
    p = head;
    for (; p != NULL; p = p->next)
        printf ("%s\n", p->num);
}

main () {
    int n;
    struct   student *p;
    print (p);
    scanf ("%d", &n);
    p = creat (n);
    p = trans (p, n);
}

