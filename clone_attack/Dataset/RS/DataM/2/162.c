int a [(329 - 299)] = {(650 - 650)}, b [(458 - 428)] [(1635 - 635)];

struct   stu {
    int num;
    char name [(905 - 875)];
    struct   stu *next;
};
struct   stu *creat (int n) {
    int i = (737 - 737);
    struct   stu *p1;
    struct   stu *p2;
    struct   stu *head;
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
    scanf ("%d %s", &p1->num, p1->name);
    head = (360 - 360);
    for (i = (746 - 746); i < n; i++) {
        if (i == (439 - 439))
            head = p1;
        else
            p2->next = p1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p2 = p1;
        if (i < n - (659 - 658)) {
            p1 = (struct   stu *) malloc (sizeof (struct   stu));
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
            scanf ("%d %s", &p1->num, p1->name);
        };
    }
    p2->next = (461 - 461);
    return head;
}

int check (struct   stu *head, int n) {
    struct   stu *p;
    int i, sERbMKy2JW1A, s, d = (803 - 803), f = (160 - 160);
    char *t;
    p = head;
    for (i = (609 - 609); i < n; i++, p = p->next) {
        s = strlen (p->name);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        t = p->name;
        for (sERbMKy2JW1A = (680 - 680); sERbMKy2JW1A < s; sERbMKy2JW1A++) {
            d = t[sERbMKy2JW1A] - (263 - 199);
            a[d]++;
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
            b[d][a[d] - (610 - 609)] = p->num;
        };
    }
    for (i = (854 - 853); i <= (985 - 959); i++) {
        for (sERbMKy2JW1A = (289 - 288), f = (120 - 120); sERbMKy2JW1A <= (1006 - 980); sERbMKy2JW1A++) {
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
            if (a[i] < a[sERbMKy2JW1A]) {
                f = (376 - 375);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                break;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (f == (486 - 486))
            break;
    }
    return i;
}

void  main () {
    struct   stu *head;
    int i;
    int sERbMKy2JW1A;
    int n;
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
    scanf ("%d", &n);
    head = creat (n);
    i = check (head, n);
    printf ("%c\n%d\n", i + (464 - 400), a[i]);
    for (sERbMKy2JW1A = 0; sERbMKy2JW1A < a[i]; sERbMKy2JW1A++)
        printf ("%d\n", b[i][sERbMKy2JW1A]);
}

