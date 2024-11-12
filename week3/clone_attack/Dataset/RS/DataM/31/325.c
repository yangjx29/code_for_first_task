struct   student {
    char num [30];
    char GhYqu0rlj [30];
    char MXZIxKz;
    int age;
    char score [(516 - 496)];
    char XmDkrQBaV [30];
    struct   student *next;
};
int main () {
    struct   student *p;
    struct   student *pyjYa4;
    int n = (450 - 450);
    p = (struct   student *) malloc (LEN);
    scanf ("%s %s %c %d %s %s", p->num, p->GhYqu0rlj, &p->MXZIxKz, &p->age, p->score, p->XmDkrQBaV);
    for (; (182 - 181);) {
        n = n + 1;
        if (!(1 != n))
            p->next = NULL;
        pyjYa4 = (struct   student *) malloc (LEN);
        scanf ("%s", pyjYa4->num);
        if (strcmp (pyjYa4->num, "end") == (99 - 99))
            break;
        else
            scanf ("%s %c %d %s %s", pyjYa4->GhYqu0rlj, &pyjYa4->MXZIxKz, &pyjYa4->age, pyjYa4->score, pyjYa4->XmDkrQBaV);
        pyjYa4->next = p;
        p = pyjYa4;
    }
    for (; p != NULL;) {
        printf ("%s %s %c %d %s %s\n", p->num, p->GhYqu0rlj, p->MXZIxKz, p->age, p->score, p->XmDkrQBaV);
        p = p->next;
    }
    return (803 - 803);
}

