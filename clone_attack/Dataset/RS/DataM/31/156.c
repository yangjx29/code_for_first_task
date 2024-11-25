char ex [4] = {"end"};

struct   student {
    char n [100];
    struct   student *next;
};
void  main () {
    struct   student *a = NULL, *b = NULL;
    struct   student *suAs70, *p1, *p2;
    int n = 0;
    suAs70 = NULL;
    p2 = NULL;
    p1 = (struct   student *) malloc (LEN);
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
    gets (p1->n);
    for (; strcmp (ex, p1->n) != 0;) {
        p1->next = p2;
        p2 = p1;
        p1 = (struct   student *) malloc (LEN);
        gets (p1->n);
    }
    p1 = NULL;
    suAs70 = p2;
    a = suAs70;
    for (; a != NULL;) {
        puts (a->n);
        b = a->next;
        a = b;
    };
}

