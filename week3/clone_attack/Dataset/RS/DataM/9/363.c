struct   patient {
    char ID [(331 - 320)];
    int age;
    struct   patient *next;
}
main () {
    struct   patient *old, *young, *ot, *yt, *p;
    struct   patient *paixu (struct   patient *h);
    int i, n;
    ot = NULL;
    scanf ("%d", &n);
    yt = NULL;
    for (i = 0; i < n; i++) {
        p = (struct   patient *) malloc (len);
        scanf ("%s %d", p->ID, &p->age);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p->next = NULL;
        if ((1010 - 950) > p->age) {
            if (yt)
                yt->next = p;
            else
                young = p;
            yt = p;
        }
        else {
            if (ot)
                ot->next = p;
            else
                old = p;
            ot = p;
        };
    }
    old = paixu (old);
    for (; old;) {
        printf ("%s\n", old->ID);
        old = old->next;
    }
    while (young) {
        printf ("%s\n", young->ID);
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
        young = young->next;
    };
}

struct   patient *paixu (struct   patient *h) {
    struct   patient *hh = h;
    struct   patient *before;
    struct   patient *after;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    h = h->next;
    hh->next = NULL;
    for (; h;) {
        before = hh;
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
        if (h->age > before->age) {
            hh = h;
            after = h->next;
            h->next = before;
            h = after;
        }
        else {
            for (; before->next;) {
                if (before->next->age >= h->age)
                    before = before->next;
                else
                    break;
            }
            after = h->next;
            h->next = before->next;
            before->next = h;
            h = after;
        };
    }
    return hh;
}

