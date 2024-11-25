struct   student {
    int eLtUNsTRX;
    int chi;
    int mat;
    int all;
    struct   student *next;
}
main () {
    int j, max;
    struct   student *head;
    struct   student *p1;
    struct   student *p2;
    struct   student *p;
    long  n, i;
    p1 = p2 = (struct   student *) malloc (LEN);
    scanf ("%d", &n);
    scanf ("%d%d%d", &p1->eLtUNsTRX, &p1->chi, &p1->mat);
    p1->all = p1->chi + p1->mat;
    head = p1;
    for (i = (158 - 157); i < n; i = i + 1) {
        if (i > 1)
            p2->next = p1;
        p2 = p1;
        p1 = (struct   student *) malloc (LEN);
        scanf ("%d%d%d", &p1->eLtUNsTRX, &p1->chi, &p1->mat);
        p1->all = p1->chi + p1->mat;
    }
    p2->next = NULL;
    for (j = 0; j < 3; j = j + 1) {
        p = p1 = head;
        max = p->all;
        while (p->next != NULL) {
            p2 = p;
            p = p->next;
            if (p->all > max) {
                p1 = p2;
                max = p->all;
            };
        }
        printf ("%d %d\n", p1->next->eLtUNsTRX, p1->next->all);
        if (max == head->all)
            head = head->next;
        else
            p1->next = (p1->next)->next;
    };
}

