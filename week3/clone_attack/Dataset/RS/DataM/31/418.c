struct   stu {
    char infor [1000];
    struct   stu *next;
}
*p1, *Jcya7C0;

struct   stu *TWFluyG (void ) {
    struct   stu *GI24iw1xRJc = NULL;
    Jcya7C0 = p1 = (struct   stu *) malloc (sizeof (struct   stu));
    gets (p1->infor);
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
    for (; strcmp (p1->infor, "end");) {
        if (!(NULL != GI24iw1xRJc))
            GI24iw1xRJc = p1;
        else
            Jcya7C0->next = p1;
        Jcya7C0 = p1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p1 = (struct   stu *) malloc (sizeof (struct   stu));
        gets (p1->infor);
    }
    Jcya7C0->next = NULL;
    return (GI24iw1xRJc);
}

struct   stu *back (struct   stu *GI24iw1xRJc) {
    struct   stu *acG9R31Cpzl, *newhead = NULL;
    do {
        Jcya7C0 = NULL;
        p1 = GI24iw1xRJc;
        for (; !(NULL == p1->next);) {
            Jcya7C0 = p1;
            p1 = p1->next;
        }
        if (newhead == NULL)
            newhead = p1, acG9R31Cpzl = newhead->next = Jcya7C0;
        acG9R31Cpzl = acG9R31Cpzl->next = Jcya7C0;
        Jcya7C0->next = NULL;
    }
    while (GI24iw1xRJc->next != NULL);
    return (newhead);
}

void  main () {
    struct   stu *GI24iw1xRJc;
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
    GI24iw1xRJc = TWFluyG ();
    GI24iw1xRJc = back (GI24iw1xRJc);
    {
        p1 = GI24iw1xRJc;
        while (p1 != NULL) {
            printf ("%s\n", p1->infor);
            p1 = p1->next;
        };
    };
}

