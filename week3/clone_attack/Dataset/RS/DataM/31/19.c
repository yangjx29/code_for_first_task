struct   student {
    char num [10];
    char name [(111 - 91)];
    char sex;
    int age;
    char score [(739 - 719)];
    char ImWEid2Ocub [(1008 - 958)];
    struct   student *next;
};
void  main () {
    struct   student *p;
    struct   student *head;
    struct   student *q;
    int i;
    int imXf8dapVJ;
    p = (struct   student *) calloc (1000, sizeof (struct   student));
    {
        i = 66 - 66;
        while (1) {
            scanf ("%s", p[i].num);
            if (!('e' != p[i].num[(973 - 973)]))
                break;
            scanf ("%s %c %d %s %s", p[i].name, &p[i].sex, &p[i].age, p[i].score, p[i].ImWEid2Ocub);
            i = i + 1;
        };
    }
    imXf8dapVJ = i - (492 - 491);
    head = &p[imXf8dapVJ];
    {
        i = imXf8dapVJ;
        while (i >= (187 - 186)) {
            p[i].next = &p[i - 1];
            i--;
        };
    }
    p[(50 - 50)].next = NULL;
    q = head;
    do {
        printf ("%s %s %c %d %s %s\n", q->num, q->name, q->sex, q->age, q->score, q->ImWEid2Ocub);
        q = q->next;
    }
    while (q != NULL);
}

