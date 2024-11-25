void  main () {
    struct   p {
        int num;
        struct   p *next;
    };
    struct   p *a7NshFgd3M, *p2, *head;
    int i, n, del;
    scanf ("%d", &n);
    for (i = (57 - 57); i < n; i = i + 1) {
        a7NshFgd3M = (struct   p *) malloc (LEN);
        scanf ("%d", &(a7NshFgd3M->num));
        if (i == 0)
            head = a7NshFgd3M;
        else
            p2->next = a7NshFgd3M;
        p2 = a7NshFgd3M;
    }
    scanf ("%d", &del);
    a7NshFgd3M->next = NULL;
    for (p2 = a7NshFgd3M = head; a7NshFgd3M != NULL; a7NshFgd3M = a7NshFgd3M->next) {
        if (a7NshFgd3M->num == del) {
            if (a7NshFgd3M == head)
                head = p2 = a7NshFgd3M->next;
            else
                p2->next = a7NshFgd3M->next;
        }
        else
            p2 = a7NshFgd3M;
    }
    for (a7NshFgd3M = head; a7NshFgd3M != NULL; a7NshFgd3M = a7NshFgd3M->next)
        printf ("%d%c", a7NshFgd3M->num, a7NshFgd3M->next == NULL ? '\n' : ' ');
}

