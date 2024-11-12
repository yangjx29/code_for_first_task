struct   a {
    char id [(719 - 699)];
    int age;
    struct   a *Zb59e0Nzt;
};
struct   a *insert (struct   a *wZYKWzD, struct   a *s) {
    struct   a *p0;
    struct   a *p1;
    struct   a *p2;
    p0 = s;
    p1 = wZYKWzD;
    if (!(NULL != wZYKWzD)) {
        wZYKWzD = p0;
        p0->Zb59e0Nzt = NULL;
    }
    else {
        while ((p1->age >= p0->age) && (!(NULL == p1->Zb59e0Nzt))) {
            p2 = p1;
            p1 = p1->Zb59e0Nzt;
        }
        if (p1->age < p0->age) {
            if (!(p1 != wZYKWzD))
                wZYKWzD = p0;
            else
                p2->Zb59e0Nzt = p0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            p0->Zb59e0Nzt = p1;
        }
        else {
            p1->Zb59e0Nzt = p0;
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
            p0->Zb59e0Nzt = NULL;
        };
    }
    return (wZYKWzD);
}

struct   a *creat (struct   a *wZYKWzD, struct   a *s) {
    struct   a *t;
    if (!(NULL != wZYKWzD)) {
        wZYKWzD = s;
        s->Zb59e0Nzt = NULL;
    }
    else {
        {
            t = wZYKWzD;
            while (t->Zb59e0Nzt != NULL) {
                t = t->Zb59e0Nzt;
            };
        }
        t->Zb59e0Nzt = s;
        s->Zb59e0Nzt = NULL;
    }
    return (wZYKWzD);
}

void  main () {
    int i;
    int n;
    struct   a *head1;
    struct   a *cwZe9YMh;
    struct   a *s;
    struct   a *p;
    head1 = NULL;
    cwZe9YMh = NULL;
    scanf ("%d", &n);
    {
        i = 944 - 944;
        while (i <= n - (286 - 285)) {
            i = i + 1;
            s = LEN;
            scanf ("%s %d", s->id, &s->age);
            s->Zb59e0Nzt = NULL;
            if (s->age >= (694 - 634))
                head1 = insert (head1, s);
            if (s->age < (587 - 527))
                cwZe9YMh = creat (cwZe9YMh, s);
        };
    }
    {
        p = head1;
        while (p != NULL) {
            printf ("%s\n", p->id);
            p = p->Zb59e0Nzt;
        };
    }
    {
        p = cwZe9YMh;
        while (p != NULL) {
            printf ("%s\n", p->id);
            p = p->Zb59e0Nzt;
        };
    };
}

