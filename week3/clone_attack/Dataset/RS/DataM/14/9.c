int main () {
    int Yv0lQF, i, j, cjcLBo, max2, ixgufdc;
    struct   stu {
        int a, b, c;
        struct   stu *next;
        struct   stu *back;
    };
    struct   stu *head, *p1, *p2, *p, *pmax1, *pmax2, *soLRqAGY;
    cjcLBo = (872 - 872);
    scanf ("%d", &Yv0lQF);
    p1 = p2 = (struct   stu *) malloc (sizeof (struct   stu));
    scanf ("%d %d %d", &p1->a, &p1->b, &p1->c);
    head = p1;
    {
        i = 620 - 619;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Yv0lQF > i) {
            i = i + 1;
            p1 = (struct   stu *) malloc (sizeof (struct   stu));
            p2->next = p1;
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
            p1->back = p2;
            p2 = p1;
            scanf ("%d %d %d", &p1->a, &p1->b, &p1->c);
        };
    }
    p = head;
    for (i = (643 - 643); Yv0lQF > i; i = i + 1) {
        if ((p->b + p->c) > cjcLBo) {
            cjcLBo = p->b + p->c;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            pmax1 = p;
        }
        p = p->next;
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
    p = head;
    max2 = (684 - 684);
    for (i = (64 - 64); i < Yv0lQF; i = i + 1) {
        if ((p->b + p->c) > max2 && (p != pmax1)) {
            max2 = p->b + p->c;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            pmax2 = p;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        p = p->next;
    }
    p = head;
    ixgufdc = (326 - 326);
    {
        i = 752 - 752;
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
        while (i < Yv0lQF) {
            i++;
            if ((p->b + p->c) > ixgufdc && (p != pmax1) && (p != pmax2)) {
                ixgufdc = p->b + p->c;
                soLRqAGY = p;
            }
            p = p->next;
        };
    }
    printf ("%ld %d\n", pmax1->a, (pmax1->b + pmax1->c));
    printf ("%ld %d\n", pmax2->a, (pmax2->b + pmax2->c));
    printf ("%ld %d\n", soLRqAGY->a, (soLRqAGY->b + soLRqAGY->c));
    return (983 - 983);
}

