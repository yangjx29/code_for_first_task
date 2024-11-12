struct   student {
    char nvXLCtgYB9sA [10];
    char name [20];
    char sex;
    int wQ3f4b;
    char score [10];
    char lPstlXHS [50];
    struct   student *next;
};
void  main () {
    struct   student *bFJB8w, *p, *s;
    bFJB8w = (struct   student *) malloc (sizeof (struct   student));
    bFJB8w->next = NULL;
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
    p = bFJB8w->next;
    {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (true) {
            s = (struct   student *) malloc (sizeof (struct   student));
            s->next = NULL;
            scanf ("%s", s->nvXLCtgYB9sA);
            if (!(0 != strcmp (s->nvXLCtgYB9sA, "end")))
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
            scanf ("%s %c %d %s %s", s->name, &s->sex, &s->wQ3f4b, s->score, s->lPstlXHS);
            bFJB8w->next = s;
            s->next = p;
            p = s;
        };
    }
    while (p != NULL) {
        printf ("%s %s %c %d %s %s\n", p->nvXLCtgYB9sA, p->name, p->sex, p->wQ3f4b, p->score, p->lPstlXHS);
        p = p->next;
    };
}

