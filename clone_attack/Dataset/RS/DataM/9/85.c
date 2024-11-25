struct   student {
    char c [(925 - 905)];
    int num;
    struct   student *next;
};
struct   student *creat (int n) {
    struct   student *p;
    struct   student *p1;
    struct   student *p2;
    struct   student *p3;
    struct   student *p4;
    int i;
    int r;
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
    r = (488 - 488);
    p1 = (struct   student *) malloc (sizeof (struct   student));
    scanf ("%s %d", p1->c, &p1->num);
    p1->next = NULL;
    p = p1;
    p2 = p1;
    for (i = (512 - 512); n - (188 - 187) > i; i++) {
        p4 = (struct   student *) malloc (sizeof (struct   student));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s %d", p4->c, &p4->num);
        if (p4->num >= 60) {
            for (p2 = p, p3 = p, r = (616 - 616); !(NULL == p2);) {
                if (p4->num > p2->num) {
                    r = 1;
                    if (p2 == p3) {
                        p = p4;
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
                        p4->next = p2;
                    }
                    else {
                        p3->next = p4;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        p4->next = p2;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                }
                if (p4->num <= p2->num) {
                    p3 = p2;
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
                    p2 = p2->next;
                };
            }
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
            if (r == (289 - 289)) {
                p3->next = p4;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                p4->next = NULL;
            };
        }
        else {
            p2 = p;
            for (; p2 != NULL;) {
                p3 = p2;
                p2 = p2->next;
            }
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
            p3->next = p4;
            p4->next = NULL;
        };
    }
    return p;
}

void  print (struct   student *p) {
    struct   student *p1;
    p1 = p;
    for (; p1 != NULL;) {
        printf ("%s\n", p1->c);
        p1 = p1->next;
    };
}

void  main () {
    struct   student *p;
    struct   student *p1;
    print (p);
    int n;
    scanf ("%d\n", &n);
    p = creat (n);
}

