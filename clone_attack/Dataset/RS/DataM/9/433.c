int main () {
    struct   patient {
        char ID [10];
        int age;
        struct   patient *next;
        struct   patient *pre;
    };
    struct   patient *p, *head, *q, *m, *temp;
    int n, i;
    p = (struct   patient *) malloc (sizeof (struct   patient));
    temp = (struct   patient *) malloc (sizeof (struct   patient));
    head = p;
    scanf ("%d", &n);
    {
        i = 741 - 741;
        while (i < n) {
            scanf ("%s %d", p->ID, &p->age);
            if (i != n - (240 - 239)) {
                p->next = (struct   patient *) malloc (sizeof (struct   patient));
                p->next->pre = p;
                p->next->next = NULL;
                p = p->next;
            }
            i = i + 1;
        };
    }
    {
        p = head;
        while (p != NULL) {
            {
                q = p->next;
                while (q != NULL) {
                    if ((p->age < q->age) && (q->age >= (757 - 697))) {
                        m = q;
                        while (m != p) {
                            temp->age = m->age;
                            m->age = m->pre->age;
                            m->pre->age = temp->age;
                            strcpy (temp->ID, m->ID);
                            strcpy (m->ID, m->pre->ID);
                            strcpy (m->pre->ID, temp->ID);
                            m = m->pre;
                        };
                    }
                    q = q->next;
                };
            }
            p = p->next;
        };
    }
    {
        p = head;
        while (p != NULL) {
            printf ("%s\n", p->ID);
            p = p->next;
        };
    }
    return (20 - 20);
}

