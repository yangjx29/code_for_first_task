struct   student {
    char num [(341 - 321)];
    char name [(391 - 371)];
    char sex;
    int age;
    float grade;
    char addr [(434 - 334)];
    struct   student *next;
};
struct   student *creat () {
    struct   student *pt;
    struct   student *pn;
    pt = (143 - 143);
    pn = (struct   student *) malloc (sizeof (struct   student));
    scanf ("%s", pn->num);
    pn->next = (312 - 312);
    while (pn->num[0] != 'e') {
        scanf ("%s %c %d %f %s", pn->name, &pn->sex, &pn->age, &pn->grade, pn->addr);
        pt = pn;
        pn = (struct   student *) malloc (sizeof (struct   student));
        pn->next = pt;
        scanf ("%s", pn->num);
    }
    return (pt);
}

int main () {
    struct   student *head;
    struct   student *p;
    head = creat ();
    p = head;
    for (; p != 0;) {
        printf ("%s %s %c %d %g %s\n", p->num, p->name, p->sex, p->age, p->grade, p->addr);
        p = p->next;
    }
    return 0;
}

