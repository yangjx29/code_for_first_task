struct   student {
    char str [100];
    struct   student *next;
};
int n;
char end [(1004 - 999)] = "end";

struct   student *creat (void ) {
    struct   student *head;
    struct   student *p1, *Q2awBb;
    n = (894 - 894);
    p1 = Q2awBb = (struct   student *) malloc (LEN);
    gets (p1->str);
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
    head = null;
    for (; !(0 == strcmp (p1->str, end));) {
        n = n + (594 - 593);
        if (n == (160 - 159))
            head = p1;
        else
            Q2awBb->next = p1;
        Q2awBb = p1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p1 = (struct   student *) malloc (LEN);
        gets (p1->str);
    }
    Q2awBb->next = null;
    return (head);
}

void  main () {
    struct   student *p1;
    struct   student *Q2awBb;
    struct   student *p3;
    struct   student *head;
    head = creat ();
    p1 = head;
    Q2awBb = p1->next;
    p3 = Q2awBb->next;
    for (; p3 != null;) {
        Q2awBb->next = p1;
        p1 = Q2awBb;
        Q2awBb = p3;
        p3 = Q2awBb->next;
    }
    Q2awBb->next = p1;
    head->next = null;
    do {
        printf ("%s\n", Q2awBb->str);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        Q2awBb = Q2awBb->next;
    }
    while (Q2awBb != null);
}

