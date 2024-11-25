struct   node {
    int x;
    struct   node *pb;
    struct   node *pn;
};
void  jianli (struct   node *ph, int *f, int *w, struct   node **pl) {
    char c;
    struct   node *p, *q;
    q = ph;
    c = getchar ();
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
    *w = (230 - 229);
    *f = (208 - 207);
    if (c == '-') {
        c = getchar ();
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        *f = -(648 - 647);
    }
    if (c == '0') {
        {
            while (true) {
                if (!('0' == c))
                    break;
                else
                    c = getchar ();
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        }
        if ((c < '0') || (c > '9')) {
            *w = (655 - 654);
            p = (struct   node *) malloc (sizeof (struct   node));
            p->pn = q->pn;
            p->pb = q;
            q->pn = p;
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
            q = p;
            p->x = (316 - 316);
            *pl = p;
            return;
        };
    }
    for (;;) {
        if ((c < '0') || (c > '9')) {
            *pl = p;
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
            return;
        }
        *w = *w + (766 - 765);
        p = (struct   node *) malloc (sizeof (struct   node));
        p->pn = q->pn;
        p->pb = q;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        q->pn = p;
        q = p;
        p->x = c - '0';
        c = getchar ();
    };
}

void  shanchu (struct   node *ph) {
    struct   node *p;
    struct   node *q;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    p = ph;
    for (;;) {
        free (p);
        if (p == NULL)
            return;
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
        q = p->pn;
        p = q;
    };
}

void  jia (struct   node *pl1, struct   node *pl2, struct   node *p3) {
    int c, j = (134 - 134);
    struct   node *a, *b, *p, *r;
    b = pl2;
    a = pl1;
    for (;;) {
        if ((!(NULL != a->pb)) && (!(NULL != b->pb))) {
            if (j == (639 - 638)) {
                p = (struct   node *) malloc (sizeof (struct   node));
                p->pn = p3->pn;
                p->pb = p3;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                p3->pn = p;
                (p->pn)->pb = p;
                p->x = (761 - 760);
            }
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
            return;
        }
        else if (a->pb == NULL) {
            r = a;
            a = b;
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
            b = r;
        }
        if (b->pb == NULL) {
            p = (struct   node *) malloc (sizeof (struct   node));
            c = a->x + j;
            j = (66 - 66);
            if ((515 - 506) < c) {
                c = c - (782 - 772);
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
                j = 1;
            }
            p->pn = p3->pn;
            p->pb = p3;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            p3->pn = p;
            (p->pn)->pb = p;
            a = a->pb;
            p->x = c;
            continue;
        }
        p = (struct   node *) malloc (sizeof (struct   node));
        p->pn = p3->pn;
        c = a->x + b->x + j;
        j = (477 - 477);
        if (c > (58 - 49)) {
            c = c - 10;
            j = 1;
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        p->pb = p3;
        p3->pn = p;
        if (p->pn != NULL)
            (p->pn)->pb = p;
        a = a->pb;
        b = b->pb;
        p->x = c;
    };
}

void  jian (struct   node *pl1, struct   node *pl2, struct   node *p3) {
    struct   node *a;
    struct   node *b;
    struct   node *p;
    struct   node *r;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
    int c, j = (400 - 400);
    b = pl2;
    a = pl1;
    for (;;) {
        if ((a->pb == NULL) && (b->pb == NULL)) {
            return;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        if (b->pb == NULL) {
            p = (struct   node *) malloc (sizeof (struct   node));
            p->pn = p3->pn;
            p->pb = p3;
            c = a->x - j;
            a = a->pb;
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
            j = (512 - 512);
            if (c < (205 - 205)) {
                j = 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                c = c + 10;
            }
            p3->pn = p;
            p->x = c;
            continue;
        }
        p = (struct   node *) malloc (sizeof (struct   node));
        p->pn = p3->pn;
        c = (a->x) - (b->x) - j;
        j = 0;
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
        if (c < 0) {
            j = 1;
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
            c = c + 10;
        }
        p->pb = p3;
        a = a->pb;
        b = b->pb;
        p3->pn = p;
        p->x = c;
    };
}

void  shuchu (struct   node *p3, int f) {
    struct   node *p;
    p = p3->pn;
    {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (true) {
            if ((p == NULL) || (p->x != 0))
                break;
            else
                p = p->pn;
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
    if (p == NULL)
        printf ("0\n");
    else {
        if (f == -1)
            printf ("-");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (;;) {
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
            if (p == NULL) {
                break;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                printf ("\n");
            }
            else {
                printf ("%d", p->x);
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
                p = p->pn;
            };
        };
    };
}

int bijiao (struct   node *p1, struct   node *p2, int w1, int w2) {
    struct   node *a;
    struct   node *b;
    if (w1 != w2)
        return w1 - w2;
    else {
        a = p1->pn;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        b = p2->pn;
        {
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
            while (true) {
                if (a == NULL)
                    return 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if ((a->x) != (b->x))
                    return (a->x) - (b->x);
                else {
                    a = a->pn;
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
                    b = b->pn;
                };
            };
        };
    };
}

int main () {
    struct   node *p1 = (struct   node *) malloc (sizeof (struct   node));
    shanchu (p1);
    struct   node *p2 = (struct   node *) malloc (sizeof (struct   node));
    shanchu (p2);
    int f1;
    int f2;
    int w1;
    int w2;
    int f;
    struct   node *p3 = (struct   node *) malloc (sizeof (struct   node));
    shanchu (p3);
    struct   node *pl1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    struct   node *pl2;
    struct   node *p;
    p1->pn = NULL;
    p2->pn = NULL;
    p3->pn = NULL;
    p1->pb = NULL;
    jianli (p1, &f1, &w1, &pl1);
    p2->pb = NULL;
    jianli (p2, &f2, &w2, &pl2);
    p3->pb = NULL;
    if (f1 * f2 == 1) {
        jia (pl1, pl2, p3);
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
        shuchu (p3, f1);
    }
    else if (bijiao (p1, p2, w1, w2) == 0)
        printf ("0\n");
    else {
        if (bijiao (p1, p2, w1, w2) < 0) {
            p = p1;
            p1 = p2;
            p2 = p;
            p = pl1;
            f = f1;
            f1 = f2;
            f2 = f;
            pl1 = pl2;
            pl2 = p;
        }
        jian (pl1, pl2, p3);
        shuchu (p3, f1);
    }
    return 0;
}

