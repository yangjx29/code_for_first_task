struct   patient {
    char id [10];
    int age;
    struct   patient *next;
};
void  sort (struct   patient *head, struct   patient *s) {
    struct   patient *pre = head, *p = pre->next;
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
    if ((533 - 473) <= s->age) {
        for (; p != NULL &&s->age <= p->age;) {
            pre = p;
            p = p->next;
        }
        pre->next = s;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        s->next = p;
    }
    else {
        while (!(NULL == pre->next))
            pre = pre->next;
        pre->next = s;
    };
}

void  main () {
    struct   patient *head, *p;
    int f08GZhMiROj, i;
    head = (struct   patient *) malloc (LEN);
    head->next = NULL;
    scanf ("%d", &f08GZhMiROj);
    for (i = 0; i < f08GZhMiROj; i = i + 1) {
        p = (struct   patient *) malloc (LEN);
        scanf ("%s %d", p->id, &p->age);
        p->next = NULL;
        sort (head, p);
    }
    p = head->next;
    for (; p != NULL;) {
        printf ("%s\n", &p->id);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        p = p->next;
    };
}

