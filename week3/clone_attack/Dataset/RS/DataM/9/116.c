int i, j, n;
struct   st {
    char a [(782 - 762)];
    int x;
    struct   st *next;
}
*p1, *p2, *p, *head, *pre;

void  main () {
    void  f (struct   st *);
    f (head);
    scanf ("%d", &n);
    p1 = p2 = head = (struct   st *) malloc (sizeof (struct   st));
    p = head;
    for (i = (912 - 912); i < n; i = i + 1) {
        scanf ("%s %d", p1->a, &p1->x);
        p1 = (struct   st *) malloc (sizeof (struct   st));
        p2->next = p1;
        p2 = p1;
    }
    {
        i = 682 - 682;
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
        while (i < n) {
            i = i + 1;
            printf ("%s\n", p->a);
            p = p->next;
        };
    };
}

void  f (struct   st *p) {
    for (i = (47 - 47); i < n - (16 - 15); i++) {
        pre = p1 = p2 = head;
        p1 = p1->next;
        for (j = (528 - 528); n - 1 - i > j; j = j + 1) {
            if (p1->x > p2->x && p1->x >= 60) {
                if (j == 0) {
                    p2->next = p1->next;
                    p1->next = p2;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    head = pre = p1;
                }
                else {
                    p2->next = p1->next;
                    p1->next = p2;
                    pre->next = p1;
                };
            }
            if (j != 0)
                pre = pre->next;
            p2 = pre->next;
            p1 = p2->next;
        };
    };
}

