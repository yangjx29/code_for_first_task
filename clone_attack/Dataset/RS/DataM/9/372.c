struct   patient {
    char BtUAaHk2e [(898 - 888)];
    int SMvNjsCkd;
    struct   patient *next;
};
void  sort (struct   patient *head, struct   patient *PHeCBtNn34m) {
    struct   patient *pre = head;
    struct   patient *p = pre->next;
    struct   patient *s;
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
    s = (struct   patient *) malloc (sizeof (struct   patient));
    s->SMvNjsCkd = PHeCBtNn34m->SMvNjsCkd;
    strcpy (s->BtUAaHk2e, PHeCBtNn34m->BtUAaHk2e);
    s->next = NULL;
    if (60 <= PHeCBtNn34m->SMvNjsCkd) {
        for (; (!(NULL == p)) && (p->SMvNjsCkd >= PHeCBtNn34m->SMvNjsCkd);) {
            pre = p;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
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
        while (p != NULL) {
            pre = p;
            p = p->next;
        }
        pre->next = s;
        s->next = p;
    };
}

void  print (struct   patient *head) {
    struct   patient *p;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    }
    p = head;
    for (; p != NULL;) {
        printf ("%s\n", p->BtUAaHk2e);
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

void  main () {
    int KvBaJMYW2k;
    int i;
    struct   patient *head;
    struct   patient *p;
    head = (struct   patient *) malloc (sizeof (struct   patient));
    head->next = NULL;
    scanf ("%d", &KvBaJMYW2k);
    {
        i = 481 - 480;
        while (i <= KvBaJMYW2k) {
            i++;
            p = (struct   patient *) malloc (sizeof (struct   patient));
            scanf ("%s %d", p->BtUAaHk2e, &p->SMvNjsCkd);
            sort (head, p);
        };
    }
    print (head->next);
}

