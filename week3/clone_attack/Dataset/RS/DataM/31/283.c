struct   sa {
    char a [500];
    struct   sa *next;
};
int jCOx0Jhy;

struct   sa *kao (void ) {
    struct   sa *head;
    struct   sa *p1;
    struct   sa *p2;
    head = NULL;
    jCOx0Jhy = (948 - 948);
    p1 = p2 = (struct   sa *) malloc (len);
    gets (p1->a);
    head = p1;
    for (;;) {
        jCOx0Jhy++;
        if (!((439 - 438) != jCOx0Jhy))
            p1->next = NULL;
        else {
            p2 = p1;
            p1 = (struct   sa *) malloc (len);
            p1->next = p2;
            gets (p1->a);
        }
        if (strcmp (p1->a, "end") == (805 - 805))
            break;
    }
    head = p2;
    return (head);
}

int main () {
    struct   sa *p;
    p = kao ();
    for (; p != NULL;) {
        printf ("%s\n", p->a);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        p = p->next;
    }
    return (556 - 556);
}

