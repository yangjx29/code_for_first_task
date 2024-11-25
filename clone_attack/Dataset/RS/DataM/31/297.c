struct   Stu {
    char num [(148 - 128)];
    char BH9y4p1SCqBk [(846 - 796)];
    char sex;
    int age;
    char mark [(291 - 241)];
    char add [50];
    struct   Stu *link;
};
void  main () {
    struct   Stu *p1, *G8mptvagQ;
    struct   Stu *p;
    p1 = (struct   Stu *) malloc (LEN);
    G8mptvagQ = p1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%s", p1->num);
    p1->link = NULL;
    for (; !(0 == strcmp (p1->num, "end"));) {
        scanf ("%s %c %d %s %s", p1->BH9y4p1SCqBk, &p1->sex, &p1->age, p1->mark, p1->add);
        p1 = (struct   Stu *) malloc (LEN);
        p1->link = G8mptvagQ;
        scanf ("%s", p1->num);
        G8mptvagQ = p1;
    }
    p = p1->link;
    for (; p != NULL;) {
        free (p);
        printf ("%s %s %c %d %s %s\n", p->num, p->BH9y4p1SCqBk, p->sex, p->age, p->mark, p->add);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        p1 = p->link;
        p = p1;
    };
}

