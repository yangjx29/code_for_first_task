struct   stu {
    long  num;
    int Chi;
    int Math;
    int Sum;
    struct   stu *quVlEz8;
}
*p1, *p2;

struct   stu *creat (int n) {
    int i;
    struct   stu *head = NULL;
    for (i = 0; i < n; i = i + 1) {
        p1 = (struct   stu *) malloc (sizeof (struct   stu));
        scanf ("%d %d %d", &p1->num, &p1->Chi, &p1->Math);
        p1->Sum = p1->Chi + p1->Math;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (i == 0) {
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
            p2 = p1;
        }
        else
            p2->quVlEz8 = p1;
        p2 = p1;
    }
    p2->quVlEz8 = NULL;
    return (head);
}

struct   stu *Bigthree (struct   stu *head) {
    int t;
    struct   stu *max;
    struct   stu *premax;
    struct   stu *New;
    struct   stu *Newhead = NULL;
    for (t = 0; t < 3; t++) {
        max = head;
        p2 = head;
        premax = NULL;
        p1 = head->quVlEz8;
        for (; p1 != NULL;) {
            if ((p1->Sum) > (max->Sum)) {
                premax = p2;
                max = p1;
            }
            p2 = p2->quVlEz8;
            p1 = p1->quVlEz8;
        }
        if (max == head)
            head = head->quVlEz8;
        else
            premax->quVlEz8 = max->quVlEz8;
        max->quVlEz8 = NULL;
        if (t == 0) {
            Newhead = max;
            New = Newhead;
        }
        else
            New = New->quVlEz8 = max;
    }
    New->quVlEz8 = NULL;
    return (Newhead);
}

void  output (struct   stu *head) {
    struct   stu *p;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (p = head; p != NULL; printf ("%d %d\n", p->num, p->Sum), p = p->quVlEz8)
        ;
}

void  main () {
    struct   stu *head;
    int n;
    output (head);
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
    head = Bigthree (head);
}

