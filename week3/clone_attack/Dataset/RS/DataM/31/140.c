struct   stu {
    char data [100];
    struct   stu *next;
};
void  main () {
    struct   stu *head;
    struct   stu *cK3EF8S;
    struct   stu *p2;
    cK3EF8S = (struct   stu *) malloc (LEN);
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
    cK3EF8S->next = NULL;
    gets (cK3EF8S->data);
    while (strcmp (cK3EF8S->data, "end")) {
        p2 = (struct   stu *) malloc (LEN);
        p2->next = cK3EF8S;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cK3EF8S = p2;
        gets (cK3EF8S->data);
    }
    head = cK3EF8S->next;
    for (p2 = head; p2; p2 = p2->next)
        puts (p2->data);
}

