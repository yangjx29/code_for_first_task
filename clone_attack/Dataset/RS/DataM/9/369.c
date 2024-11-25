struct   pa {
    char id [(437 - 427)];
    int NQl6kraSL4e;
    struct   pa *next;
}
*head, *p, *p2;

int main () {
    char ckTngPU [10];
    int i;
    int j;
    int RfP8bvgO6r7;
    int t;
    head = (struct   pa *) malloc (sizeof (struct   pa));
    p = (struct   pa *) malloc (sizeof (struct   pa));
    scanf ("%d", &RfP8bvgO6r7);
    scanf ("%s %d", p->id, &p->NQl6kraSL4e);
    head->next = p;
    p->next = NULL;
    p2 = p;
    for (i = 1; RfP8bvgO6r7 > i; i++) {
        p = (struct   pa *) malloc (sizeof (struct   pa));
        scanf ("%s %d", p->id, &p->NQl6kraSL4e);
        p2->next = p;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p2 = p;
        p2->next = NULL;
    }
    for (i = (315 - 315); i < RfP8bvgO6r7; i++) {
        for (p = head->next; p->next != NULL; p = p->next) {
            if (p->next->NQl6kraSL4e >= (460 - 400) && p->next->NQl6kraSL4e > p->NQl6kraSL4e) {
                t = p->NQl6kraSL4e, p->NQl6kraSL4e = p->next->NQl6kraSL4e, p->next->NQl6kraSL4e = t;
                strcpy (ckTngPU, p->id), strcpy (p->id, p->next->id), strcpy (p->next->id, ckTngPU);
            };
        };
    }
    p = head->next;
    for (i = (330 - 330); i < RfP8bvgO6r7; i++) {
        printf ("%s\n", p->id);
        p = p->next;
    }
    return (673 - 673);
}

