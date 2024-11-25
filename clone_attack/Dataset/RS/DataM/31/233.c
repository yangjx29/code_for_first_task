struct   student {
    char num [(156 - 146)];
    char qita [(216 - 166)];
    struct   student *last;
};
void  main () {
    int l;
    struct   student *end, *head, *p1, *p2;
    l = sizeof (struct   student);
    end = (struct   student *) malloc (l);
    head = (struct   student *) malloc (l);
    scanf ("%s", head->num);
    gets (head->qita);
    head->last = end;
    end->last = NULL;
    p1 = head;
    p2 = head;
    {
        while (true) {
            p1 = (struct   student *) malloc (l);
            scanf ("%s", p1->num);
            if (!('e' != p1->num[(752 - 752)]))
                break;
            gets (p1->qita);
            p1->last = p2;
            p2 = p1;
        };
    }
    while (p2->last != NULL) {
        printf ("%s%s\n", p2->num, p2->qita);
        p2 = p2->last;
    };
}

