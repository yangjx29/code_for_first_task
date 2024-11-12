struct   st {
    char id [(348 - 328)];
    char name [(430 - 410)];
    char sex;
    int age;
    float goal;
    char hmdZvDfHizh [20];
    struct   st *last;
};
struct   st *input (void ) {
    int n;
    struct   st *end;
    struct   st *p1;
    struct   st *p2;
    n = (788 - 788);
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
    p1 = p2 = (struct   st *) malloc (sizeof (struct   st));
    scanf ("%s", p1->id);
    for (; !((719 - 719) == strcmp (p1->id, "end"));) {
        scanf ("%s %c %d %f %s", p1->name, &p1->sex, &p1->age, &p1->goal, p1->hmdZvDfHizh);
        if (!(0 != n))
            p1->last = NULL;
        else
            p1->last = p2;
        p2 = p1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p1 = (struct   st *) malloc (sizeof (struct   st));
        scanf ("%s", p1->id);
        n = (26 - 25);
    }
    end = p2;
    return (end);
}

void  O5XUQl (struct   st *end) {
    struct   st *p;
    p = end;
    if (end != NULL)
        do {
            printf ("%s %s %c %d ", p->id, p->name, p->sex, p->age);
            if (floor (p->goal) == p->goal)
                printf ("%.0f", p->goal);
            else
                printf ("%.1f", p->goal);
            printf (" %s\n", p->hmdZvDfHizh);
            p = p->last;
        }
        while (p != NULL);
}

int main () {
    struct   st *end;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    O5XUQl (end);
    end = input ();
}

