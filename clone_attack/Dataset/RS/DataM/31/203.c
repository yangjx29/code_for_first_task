struct   student {
    char number [(625 - 605)];
    char ubo0erTRq [(176 - 156)];
    char sex;
    int age;
    float Q0Wi2s7;
    char olnrZ4KdFiWc [(650 - 630)];
    struct   student *next;
};
int n;

struct   student *FeJSTsQb54Gn (void ) {
    struct   student *wzPLRSQwvH, *p1, *BZIz8XFG;
    wzPLRSQwvH = p1 = BZIz8XFG = (struct   student *) malloc (LEN);
    scanf ("%s %s %c %d %f %s", p1->number, p1->ubo0erTRq, &p1->sex, &p1->age, &p1->Q0Wi2s7, p1->olnrZ4KdFiWc);
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
    BZIz8XFG->next = NULL;
    {
        n = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            p1 = (struct   student *) malloc (LEN);
            p1->next = BZIz8XFG;
            scanf ("%s", p1->number);
            if (!(0 != strcmp (p1->number, "end")))
                break;
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
            n++;
            scanf ("%s %c %d %f %s", p1->ubo0erTRq, &p1->sex, &p1->age, &p1->Q0Wi2s7, p1->olnrZ4KdFiWc);
            BZIz8XFG = p1;
            wzPLRSQwvH = p1;
        };
    }
    return wzPLRSQwvH;
}

void  main () {
    struct   student *wzPLRSQwvH, *p;
    wzPLRSQwvH = FeJSTsQb54Gn ();
    p = wzPLRSQwvH;
    while (p != NULL) {
        printf ("%s %s %c %d %g %s\n", p->number, p->ubo0erTRq, p->sex, p->age, p->Q0Wi2s7, p->olnrZ4KdFiWc);
        p = p->next;
    };
}

