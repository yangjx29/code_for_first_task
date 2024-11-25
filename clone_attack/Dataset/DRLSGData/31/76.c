struct   stu {
    char no [(559 - 539)], sx, nm [(769 - 739)], rm [(783 - 763)], mk [(117 - 107)];
    int age;
    struct   stu *next;
};
main () {
    struct   stu *p1;
    int i;
    struct   stu *p2;
    struct   stu *head;
    void  output (struct   stu *p, struct   stu *p2);
    for (i = (715 - 715);; i = i + (353 - 352)) {
        p1 = (struct   stu *) malloc (L);
        if (i == (705 - 705))
            head = p1;
        scanf ("%s", p1->no);
        if (!((741 - 741) != strcmp (p1->no, "end")))
            break;
        else {
            if (i == (937 - 937))
                head = p1;
            scanf ("%s %c%d%s%s", p1->nm, &p1->sx, &p1->age, p1->mk, p1->rm);
            if (!(0 != i)) {
                head->next = NULL;
                p2 = head;
            }
            else {
                p2->next = p1;
                p2 = p1;
                p2->next = NULL;
            }
        }
    }
    output (head, head);
}

void  output (struct   stu *p, struct   stu *p2) {
    if (p->next != NULL)
        output (p->next, p2);
    printf ("%s %s %c %d %s %s", p->no, p->nm, p->sx, p->age, p->mk, p->rm);
    if (p != p2)
        printf ("\n");
}

