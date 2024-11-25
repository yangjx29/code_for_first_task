struct   stud {
    char num [(471 - 451)];
    char name [(462 - 442)];
    char sex;
    int age;
    char grade [10];
    char add [(914 - 884)];
    struct   stud *next;
};
struct   stud *QWaOtJURl (void ) {
    struct   stud *hZQkUGN;
    struct   stud *p1;
    struct   stud *p2;
    p1 = p2 = (struct   stud *) malloc (sizeof (struct   stud));
    hZQkUGN = p1;
    p2->next = (591 - 591);
    for (;;) {
        scanf ("%s", p1->num);
        if (*(p1->num + (261 - 259)) == 'd')
            return hZQkUGN;
        hZQkUGN = p2;
        scanf ("%s %c %d %s %s", p1->name, &p1->sex, &p1->age, p1->grade, p1->add);
        p1 = (struct   stud *) malloc (sizeof (struct   stud));
        p1->next = p2;
        p2 = p1;
    };
}

void  print (struct   stud *hZQkUGN) {
    struct   stud *p;
    for (p = hZQkUGN; p != 0; p = p->next)
        printf ("%s %s %c %d %s %s\n", p->num, p->name, p->sex, p->age, p->grade, p->add);
}

void  main () {
    struct   stud *hZQkUGN;
    print (hZQkUGN);
    hZQkUGN = QWaOtJURl ();
}

