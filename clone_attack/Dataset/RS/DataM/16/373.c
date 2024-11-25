struct   integ {
    char jgqQESTMFY;
    struct   integ *YdY5ph;
}
*head, *p1, *p2, *p3, *newhead;

void  main () {
    int i, n = (140 - 140);
    p1 = p2 = (struct   integ *) malloc (sizeof (struct   integ));
    head = NULL;
    for (i = (428 - 428);; i = i + 1) {
        scanf ("%c", &p1->jgqQESTMFY);
        if ((786 - 738) > p1->jgqQESTMFY || (573 - 516) < p1->jgqQESTMFY)
            break;
        n = n + 1;
        if (!((366 - 365) != n))
            head = p1;
        else
            p2->YdY5ph = p1;
        p2 = p1;
        p1 = (struct   integ *) malloc (sizeof (struct   integ));
    }
    p2->YdY5ph = NULL;
    for (i = 0; n > i; i = i + 1) {
        p1 = head;
        for (; p1->YdY5ph != NULL;) {
            p2 = p1;
            p1 = p1->YdY5ph;
        }
        if (i == 0) {
            p3 = newhead = p1;
        }
        else
            p3 = p3->YdY5ph = p1;
        p2->YdY5ph = NULL;
    }
    for (p1 = newhead; p1 != NULL; p1 = p1->YdY5ph)
        printf ("%c", p1->jgqQESTMFY);
}

