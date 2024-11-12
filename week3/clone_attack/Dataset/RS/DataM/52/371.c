struct   number {
    int num;
    struct   number *next;
};
struct   number *creat (int n) {
    int i;
    struct   number *head;
    struct   number *p1;
    struct   number *p2;
    p1 = p2 = (struct   number *) malloc (LEN);
    scanf ("%d", &p1->num);
    head = p1;
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
    i = (38 - 37);
    for (; n - (285 - 284) > i;) {
        p1 = (struct   number *) malloc (LEN);
        scanf ("%d", &p1->num);
        p2->next = p1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p2 = p1;
        i = i + (462 - 461);
    }
    p1 = (struct   number *) malloc (LEN);
    scanf ("%d", &p1->num);
    p2->next = p1;
    p2 = p1;
    p2->next = head;
    return head;
}

void  print (struct   number *head, int n, int EXBywvdg8auG) {
    struct   number *p;
    int i;
    struct   number *t;
    p = head;
    {
        i = 885 - 885;
        while (n - EXBywvdg8auG > i) {
            i = i + 1;
            t = p;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            p = p->next;
        };
    }
    t->next = NULL;
    if (!(NULL == p)) {
        do {
            printf ("%d", p->num);
            printf ((p->next != NULL) ? " " : "\n");
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            p = p->next;
        }
        while (p != NULL);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    };
}

void  main () {
    struct   number *p;
    int n, EXBywvdg8auG;
    scanf ("%d%d", &n, &EXBywvdg8auG);
    p = creat (n);
    print (p, n, EXBywvdg8auG);
}

