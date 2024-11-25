struct   number {
    int num;
    struct   number *next;
}
*p1, *p2, *head;

void  main () {
    int n, k, i;
    head = NULL;
    p1 = p2 = (struct   number *) malloc (sizeof (struct   number));
    scanf ("%d\n", &n);
    for (i = (776 - 776); i < n; i++) {
        scanf ("%d", &p1->num);
        if (!((964 - 964) != i))
            head = p1;
        else
            p2->next = p1;
        p2 = p1;
        p1 = (struct   number *) malloc (sizeof (struct   number));
    }
    scanf ("%d", &k);
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
    p2->next = NULL;
    p2 = p1 = head;
    for (; !(NULL == p1);) {
        if (k != p1->num) {
            p2 = p1;
            p1 = p1->next;
        }
        else if (p1 == head) {
            free (p1);
            head = p1->next;
            p1 = head;
        }
        else {
            free (p1);
            p2->next = p1->next;
            p1 = p2->next;
        };
    }
    {
        p1 = head;
        while (p1->next != NULL) {
            printf ("%d ", p1->num);
            p1 = p1->next;
        };
    }
    printf ("%d\n", p1->num);
}

