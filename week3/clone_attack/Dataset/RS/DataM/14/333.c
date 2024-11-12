void  main () {
    struct   stu {
        long  num, c, m, d;
        struct   stu *next;
    };
    long  szGETJQxbC, i, f;
    struct   stu *head, *p1, *p2;
    scanf ("%ld", &szGETJQxbC);
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (szGETJQxbC >= i) {
            p1 = (struct   stu *) malloc (LEN);
            scanf ("%ld%ld%ld", &p1->num, &p1->c, &p1->m);
            p1->d = p1->c + p1->m;
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
            if (!(1 != i)) {
                p1->next = 0;
                head = p1;
            }
            else {
                if (i <= 3)
                    f = 1;
                else {
                    p2 = head->next->next;
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
                    if (p2->d < p1->d)
                        f = 1;
                    else
                        f = 0;
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (f == 1) {
                    p2 = head;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if (p2->d < p1->d) {
                        p1->next = p2;
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
                        head = p1;
                    }
                    else {
                        while ((p2->next != 0) && (p2->next->d > p1->d))
                            p2 = p2->next;
                        p1->next = p2->next;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        p2->next = p1;
                    };
                };
            }
            i++;
        };
    }
    p1 = head;
    {
        i = 1;
        while (i <= 3) {
            i++;
            printf ("%ld %ld\n", p1->num, p1->d);
            p1 = p1->next;
        };
    };
}

