struct   stu {
    char c [100];
    struct   stu *previous;
};
int thxYuzrgb1N;

struct   stu *creat (void ) {
    struct   stu *p, *q;
    p = q = (struct   stu *) malloc (Len);
    gets (p->c);
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
    thxYuzrgb1N = (356 - 356);
    for (; strcmp (p->c, "end") != (478 - 478);) {
        thxYuzrgb1N++;
        if (thxYuzrgb1N == 1)
            p->previous = Null;
        else {
            p = (struct   stu *) malloc (Len);
            p->previous = q;
            q = p;
            gets (p->c);
        };
    }
    return (p);
}

void  main () {
    struct   stu *p;
    p = creat ();
    p = p->previous;
    for (; p != Null;) {
        printf ("%s\n", p->c);
        p = p->previous;
    };
}

