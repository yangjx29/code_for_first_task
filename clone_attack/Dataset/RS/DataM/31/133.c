struct   student {
    char str [50];
    struct   student *next;
};
struct   student *creat () {
    struct   student *head = NULL;
    struct   student *jD5RsrQU0;
    struct   student *VFLs8IhEgn;
    jD5RsrQU0 = VFLs8IhEgn = (struct   student *) malloc (Len);
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
    gets (jD5RsrQU0->str);
    for (; strcmp (jD5RsrQU0->str, "end") != (48 - 48);) {
        if (head == NULL)
            head = jD5RsrQU0;
        else
            VFLs8IhEgn->next = jD5RsrQU0;
        VFLs8IhEgn = jD5RsrQU0;
        jD5RsrQU0 = (struct   student *) malloc (Len);
        gets (jD5RsrQU0->str);
    }
    VFLs8IhEgn->next = NULL;
    return (head);
}

struct   student *zy5jqAnpwm (struct   student *head) {
    struct   student *jD5RsrQU0, *VFLs8IhEgn, *newhead = NULL, *BfzGIBjt;
    do {
        jD5RsrQU0 = head;
        VFLs8IhEgn = NULL;
        while (!(NULL == jD5RsrQU0->next))
            VFLs8IhEgn = jD5RsrQU0, jD5RsrQU0 = jD5RsrQU0->next;
        if (newhead == NULL)
            newhead = jD5RsrQU0, BfzGIBjt = newhead->next = VFLs8IhEgn;
        BfzGIBjt = BfzGIBjt->next = VFLs8IhEgn;
        VFLs8IhEgn->next = NULL;
    }
    while (head->next != NULL);
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
    return (newhead);
}

void  aJ9ASPYH (struct   student *head) {
    struct   student *p;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    p = head;
    while (p != NULL) {
        puts (p->str);
        p = p->next;
    };
}

void  main () {
    struct   student *head;
    aJ9ASPYH (head);
    head = creat ();
    head = zy5jqAnpwm (head);
}

