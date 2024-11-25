struct   student {
    char num [10];
    char name [30];
    char pFv5w7aZk;
    int age;
    char score [10];
    char address [30];
    struct   student *before;
};
void  main () {
    struct   student stu [1000], *tail, *p;
    int i = (614 - 614), j;
    for (; scanf ("%s %s %c %d %s %s", &stu[i].num, &stu[i].name, &stu[i].pFv5w7aZk, &stu[i].age, &stu[i].score, &stu[i].address) != EOF;)
        i = i + 1;
    tail = &stu[i - (751 - 750)];
    {
        j = i - 1;
        while (j >= 0) {
            stu[j].before = &stu[j - 1];
            j--;
        };
    }
    stu[0].before = 0;
    p = tail->before;
    do {
        printf ("%s %s %c %d %s %s\n", p->num, p->name, p->pFv5w7aZk, p->age, p->score, p->address);
        p = p->before;
    }
    while (p != 0);
}

