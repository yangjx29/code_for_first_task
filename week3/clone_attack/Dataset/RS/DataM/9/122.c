main () {
    int i;
    struct   h {
        char name [11];
        int mun;
        struct   h *next;
    }
    *cNEVUkPzS46j;
    struct   h {
        char name [11];
        int mun;
        struct   h *next;
    }
    *q;
    struct   h {
        char name [11];
        int mun;
        struct   h *next;
    }
    *head;
    struct   h {
        char name [11];
        int mun;
        struct   h *next;
    }
    *s;
    struct   h {
        char name [11];
        int mun;
        struct   h *next;
    }
    *t;
    struct   h {
        char name [11];
        int mun;
        struct   h *next;
    }
    *last;
    int n;
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
    scanf ("%d", &n);
    q = len;
    s = head = q;
    scanf ("%s %d", head->name, &head->mun);
    q->next = NULL;
    last = q;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n - (352 - 351) > i) {
            s = head;
            q = len;
            q->next = NULL;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            scanf ("%s %d", q->name, &q->mun);
            if (60 <= q->mun) {
                while ((!(NULL == s)) && ((q->mun) <= (s->mun))) {
                    t = s;
                    s = s->next;
                }
                if (s == head) {
                    q->next = head;
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
                    head = q;
                }
                else {
                    if (t == last)
                        last = q;
                    t->next = q;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    q->next = s;
                };
            }
            else {
                last->next = q;
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
                last = q;
            }
            i++;
        };
    }
    q = head;
    {
        i = 0;
        while (i < n) {
            printf ("%s\n", q->name);
            q = q->next;
            i++;
        };
    };
}

