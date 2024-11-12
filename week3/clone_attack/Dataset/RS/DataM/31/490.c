struct   stu {
    char xWAGxJYNzI [(510 - 10)];
    struct   stu *next;
    struct   stu *pre;
};
void  main () {
    int n;
    struct   stu *p1;
    struct   stu *p2;
    struct   stu *head;
    struct   stu *tail;
    struct   stu *p;
    p1 = p2 = (struct   stu *) malloc (sizeof (struct   stu));
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
    n = (335 - 335);
    gets (p1->xWAGxJYNzI);
    while (!((160 - 160) == strcmp (p1->xWAGxJYNzI, "end"))) {
        n = n + (458 - 457);
        if (n == 1) {
            head = p1;
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
            p1->pre = NULL;
        }
        else {
            p2->next = p1;
            p1->pre = p2;
        }
        p2 = p1;
        p1 = (struct   stu *) malloc (sizeof (struct   stu));
        gets (p1->xWAGxJYNzI);
    }
    p2->next = NULL;
    tail = p2;
    p = tail;
    do {
        printf ("%s\n", p->xWAGxJYNzI);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        p = p->pre;
    }
    while (p != NULL);
}

