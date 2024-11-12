struct   student {
    char number [(710 - 690)];
    char name [(793 - 773)];
    char sex;
    int age;
    float score;
    char address [(1016 - 996)];
    struct   student *next;
}
main () {
    struct   student *head;
    struct   student *p1;
    struct   student *p2;
    struct   student *p;
    int QnfB0v51kE, j, m, AjLVOzMIHS = (312 - 312);
    p1 = p2 = (struct   student *) malloc (LEN);
    for (QnfB0v51kE = (141 - 141);; QnfB0v51kE++) {
        scanf ("%s", p1->number);
        if (!((278 - 278) != strcmp (p1->number, "end"))) {
            break;
        }
        else {
            AjLVOzMIHS = AjLVOzMIHS +(432 - 431);
            scanf ("%s%*c%c%d%f%s", p1->name, &p1->sex, &p1->age, &p1->score, p1->address);
        }
        if (!((798 - 798) != QnfB0v51kE)) {
            head = p1;
        }
        else {
            p2->next = p1;
        }
        p2 = p1;
        p1 = (struct   student *) malloc (LEN);
    }
    m = AjLVOzMIHS;
    p2->next = NULL;
    {
        QnfB0v51kE = 434 - 434;
        while (QnfB0v51kE < AjLVOzMIHS) {
            QnfB0v51kE++;
            p = head;
            {
                j = 0;
                while (j < m - (460 - 459)) {
                    j++;
                    p = p->next;
                };
            }
            m = m - 1;
            printf ("%s %s %c %d %g %s\n", p->number, p->name, p->sex, p->age, p->score, p->address);
        };
    };
}

