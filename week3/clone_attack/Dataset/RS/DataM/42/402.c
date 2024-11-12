void  main () {
    struct   p {
        int WXsfrtFOwGPL;
        struct   p *next;
    };
    struct   p *p1, *pJHu5hENg, *head;
    int i, d98wJMk, del;
    scanf ("%d", &d98wJMk);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (d98wJMk > i) {
            p1 = (struct   p *) malloc (LEN);
            scanf ("%d", &(p1->WXsfrtFOwGPL));
            if (!(0 != i))
                head = p1;
            else
                pJHu5hENg->next = p1;
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
            i++;
            pJHu5hENg = p1;
        };
    }
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
    scanf ("%d", &del);
    p1->next = NULL;
    {
        pJHu5hENg = head;
        p1 = head;
        while (!(NULL == p1)) {
            if (p1->WXsfrtFOwGPL == del) {
                if (p1 == head)
                    head = pJHu5hENg = p1->next;
                else
                    pJHu5hENg->next = p1->next;
            }
            else
                pJHu5hENg = p1;
            p1 = p1->next;
        };
    }
    for (p1 = head; p1 != NULL; p1 = p1->next)
        printf ("%d%c", p1->WXsfrtFOwGPL, p1->next == NULL ? '\n' : ' ');
}

