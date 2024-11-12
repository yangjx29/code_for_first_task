struct   arr {
    char id [10];
    int age;
    struct   arr *next;
};
int n;

struct   arr *create (int m) {
    struct   arr *head;
    struct   arr *p1;
    struct   arr *p2;
    p1 = p2 = (struct   arr *) malloc (LEN);
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
    scanf ("%s %d", &p1->id, &p1->age);
    n = (998 - 997);
    head = p1;
    while (n < m) {
        n = n + 1;
        p1 = (struct   arr *) malloc (LEN);
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
        scanf ("%s %d", &p1->id, &p1->age);
    }
    p1->next = NULL;
    return (head);
}

struct   arr *del (struct   arr *head, long  int dnum) {
    struct   arr *p1;
    struct   arr *p2;
    p1 = p2 = head;
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
    while (p1 != NULL &&p1->age == dnum) {
        free (p1);
        head = p1->next;
        p2 = head;
        p1 = head;
    }
    while (p1 != NULL) {
        p2 = p1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        p1 = p1->next;
        while (p1 != NULL &&p1->age == dnum) {
            free (p1);
            p2->next = p1->next;
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
            p1 = p2->next;
        };
    }
    return (head);
}

void  hHVY72a (struct   arr *head) {
    struct   arr *p;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    p = head;
    while (!(NULL == p)) {
        if (p == head)
            printf ("%s\n", p->id);
        else
            printf ("%s\n", p->id);
        p = p->next;
    };
}

void  freelist (struct   arr *head) {
    struct   arr *p = head;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    if (head != NULL) {
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
        for (; p != NULL;) {
            free (p);
            head = head->next;
            p = head;
        };
    };
}

void  main () {
    int max;
    int m;
    max = 0;
    struct   arr *head;
    struct   arr *p1;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
    hHVY72a (head);
    freelist (head);
    scanf ("%d", &m);
    head = create (m);
    for (;;) {
        max = 0;
        for (p1 = head; p1 != NULL; p1 = p1->next) {
            max = (max > p1->age) ? max : p1->age;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
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
        if (max >= 60) {
            for (p1 = head; p1 != NULL; p1 = p1->next) {
                if (p1->age == max)
                    printf ("%s\n", p1->id);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
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
            head = del (head, max);
        }
        else
            break;
    };
}

