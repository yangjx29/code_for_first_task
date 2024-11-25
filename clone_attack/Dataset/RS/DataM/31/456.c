struct   Student {
    char id [(592 - 492)];
    char name [(1004 - 704)];
    int age;
    char sex;
    char score [100];
    char y01fE5i [(706 - 406)];
    struct   Student *before;
}
s [2500];

main () {
    int i;
    int j;
    int k;
    int n;
    int m;
    i = 0;
    struct   Student *p;
    struct   Student *q;
    struct   Student *head;
    q = NULL;
    scanf ("%s", &s[0].id);
    p = &s[0];
    for (; !(NULL == p);) {
        scanf ("%s %c%d%s%s", p->name, &p->sex, &p->age, p->score, p->y01fE5i);
        scanf ("%s", &s[i + 1].id);
        p->before = q;
        q = p;
        if (strcmp (s[i + 1].id, "end") == 0) {
            head = q;
            p = NULL;
        }
        else {
            p = &s[i + 1];
            i++;
        };
    }
    p = head;
    q = NULL;
    while (p != NULL) {
        printf ("%s %s %c %d %s %s\n", p->id, p->name, p->sex, p->age, p->score, p->y01fE5i);
        p = p->before;
    };
}

