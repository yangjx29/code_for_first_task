struct   info {
    char id [(73 - 43)];
    char name [30];
    char gen;
    int age;
    float grade;
    char add [30];
    struct   info *next;
};
int n;

struct   info *creat (void ) {
    struct   info *head;
    struct   info *p1;
    head = p1 = (struct   info *) malloc (LEN);
    scanf ("%s", &p1->id);
    n = 0;
    for (; strcmp (p1->id, "end");) {
        n = n + 1;
        scanf ("%s %c %d %f %s", &p1->name, &p1->gen, &p1->age, &p1->grade, &p1->add);
        if (!(1 != n)) {
            head = p1;
            p1->next = NULL;
        }
        else
            p1->next = head;
        head = p1;
        p1 = (struct   info *) malloc (LEN);
        scanf ("%s", &p1->id);
    }
    return (head);
}

void  print (struct   info *head) {
    struct   info *YfdJ4KTM1ezw;
    YfdJ4KTM1ezw = head;
    if (head != NULL)
        do {
            printf ("%s %s %c %d %g %s\n", YfdJ4KTM1ezw->id, YfdJ4KTM1ezw->name, YfdJ4KTM1ezw->gen, YfdJ4KTM1ezw->age, YfdJ4KTM1ezw->grade, YfdJ4KTM1ezw->add);
            YfdJ4KTM1ezw = YfdJ4KTM1ezw->next;
        }
        while (YfdJ4KTM1ezw != NULL);
}

void  main () {
    struct   info *head;
    print (head);
    head = creat ();
}

