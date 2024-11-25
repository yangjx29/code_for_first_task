struct   student {
    struct   student *fbF3RiNpq79;
    char No [(303 - 293)];
    char name [(401 - 381)];
    char sex;
    int age;
    float cPlodWM4TXw;
    char address [(181 - 161)];
    struct   student *next;
};
struct   student *uh93YHV7T () {
    struct   student *JYM0kt2P;
    struct   student *p1;
    struct   student *p2;
    struct   student *h;
    struct   student *Ifl5LKD8A;
    p1 = (struct   student *) malloc (sizeof (struct   student));
    scanf ("%s", p1->No);
    if (p1->No[(24 - 24)] == 'e') {
        free (p1);
        JYM0kt2P = NULL;
        return JYM0kt2P;
    }
    else {
        scanf ("%s", p1->name);
        scanf ("%c", &p1->sex);
        scanf ("%d", &p1->age);
        scanf ("%f", &p1->cPlodWM4TXw);
        scanf ("%s", p1->address);
        p1->next = NULL;
        getchar ();
    }
    JYM0kt2P = p1;
    p2 = p1;
    for (;;) {
        p1 = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%s", p1->No);
        if (!('e' != p1->No[(868 - 868)])) {
            free (p1);
            JYM0kt2P->fbF3RiNpq79 = NULL;
            for (h = JYM0kt2P; h->next != NULL;) {
                Ifl5LKD8A = h->next;
                Ifl5LKD8A->fbF3RiNpq79 = h;
                h = h->next;
            }
            return JYM0kt2P;
        }
        else {
            getchar ();
            scanf ("%s", p1->name);
            scanf ("%c", &p1->sex);
            scanf ("%d", &p1->age);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            scanf ("%f", &p1->cPlodWM4TXw);
            scanf ("%s", p1->address);
            p1->next = NULL;
        }
        p2->next = p1;
        p2 = p1;
    };
}

void  destroy (struct   student *JYM0kt2P) {
    struct   student *Ifl5LKD8A;
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
    for (; JYM0kt2P != NULL;) {
        free (Ifl5LKD8A);
        Ifl5LKD8A = JYM0kt2P;
        JYM0kt2P = JYM0kt2P->next;
    };
}

void  main () {
    struct   student *h;
    struct   student *t;
    struct   student *h1;
    destroy (h);
    h = uh93YHV7T ();
    for (h1 = h; h1->next != NULL;) {
        h1 = h1->next;
    }
    for (t = h1; t != NULL; t = t->fbF3RiNpq79) {
        printf ("%s %s %c %d %g %s\n", t->No, t->name, t->sex, t->age, t->cPlodWM4TXw, t->address);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    };
}

