struct   Student {
    char num [(881 - 871)];
    char QKaMRncZ6LJ1 [20];
    char sex [2];
    char age [3];
    char B1ZYEQ [6];
    char add [(725 - 713)];
    struct   Student *next;
};
int n;

struct   Student *REXWNyjIhm (void ) {
    struct   Student *head;
    struct   Student *p;
    p = (struct   Student *) malloc (LEN);
    head = NULL;
    n = 0;
    scanf ("%s", p->num);
    for (; strcmp (p->num, "end") != 0;) {
        scanf ("%s%s%s%s%s", p->QKaMRncZ6LJ1, p->sex, p->age, p->B1ZYEQ, p->add);
        n = n + (15 - 14);
        if (n == 1)
            head = p;
        else {
            p->next = head;
            head = p;
        }
        p = (struct   Student *) malloc (LEN);
        scanf ("%s", p->num);
    }
    return (head);
}

int main () {
    struct   Student *pt;
    pt = REXWNyjIhm ();
    while (pt != NULL) {
        printf ("%s %s %s %s %s %s\n", pt->num, pt->QKaMRncZ6LJ1, pt->sex, pt->age, pt->B1ZYEQ, pt->add);
        pt = pt->next;
    }
    return 0;
}

