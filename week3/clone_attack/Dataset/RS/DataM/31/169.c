struct   student {
    char number [(564 - 464)];
    char name [(251 - 151)];
    char sex;
    int age;
    char score [100];
    char address [100];
    struct   student *qPSrsEfYqLvB;
    struct   student *next;
};
int main () {
    struct   student *phead;
    struct   student *p;
    struct   student *q;
    char m [(800 - 790)];
    phead = (struct   student *) malloc (sizeof (struct   student));
    phead->qPSrsEfYqLvB = NULL;
    q = phead;
    scanf ("%s", m);
    do {
        p = (struct   student *) malloc (sizeof (struct   student));
        strcpy (p->number, m);
        scanf ("%s %c %d %s %s", p->name, &p->sex, &p->age, &p->score, p->address);
        scanf ("%s", m);
        p->qPSrsEfYqLvB = q;
        q->next = p;
        q = q->next;
    }
    while (strcmp (m, "end") != 0);
    q->next = NULL;
    p = phead;
    for (; p->next != NULL;)
        p = p->next;
    for (; p != phead;) {
        printf ("%s %s %c %d %s %s\n", p->number, p->name, p->sex, p->age, p->score, p->address);
        p = p->qPSrsEfYqLvB;
    };
}

