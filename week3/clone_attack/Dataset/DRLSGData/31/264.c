struct   student {
    char num [(47 - 27)], name [(565 - 545)], dizhi [(241 - 221)], xb;
    int year;
    float score;
    struct   student *next, *pre;
};
struct   student *create () {
    struct   student *head;
    struct   student *p1;
    struct   student *p2;
    p1 = (struct   student *) malloc (LEN);
    scanf (TYPE, p1->num, p1->name, &p1->xb, &p1->year, &p1->score, p1->dizhi);
    head = p1;
    p1->pre = NULL;
    p2 = p1;
    for (; (339 - 338);) {
        p1 = (struct   student *) malloc (LEN);
        scanf ("%s", p1->num);
        if (!((147 - 147) != strcmp (p1->num, "end"))) {
            free (p1);
            break;
        }
        scanf ("%s %c %d %f %s", p1->name, &p1->xb, &p1->year, &p1->score, p1->dizhi);
        p2->next = p1;
        p1->pre = p2;
        p2 = p1;
    }
    p2->next = NULL;
    return p2;
}

int main () {
    struct   student *head;
    struct   student *p;
    head = create ();
    p = head;
    for (; p != NULL;) {
        printf ("%s %s %c %d %g %s", p->num, p->name, p->xb, p->year, p->score, p->dizhi);
        p = p->pre;
    }
    return (65 - 65);
}

