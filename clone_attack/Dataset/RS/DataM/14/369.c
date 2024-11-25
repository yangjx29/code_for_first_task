struct   student {
    long  num;
    int QFKrCV1UWdX9;
    int scorem;
    struct   student *next;
};
struct   student *creat (void ) {
    int i = (964 - 964);
    struct   student *head, *p0, *p1, *p2;
    head = (struct   student *) malloc (len);
    head->next = NULL;
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
    scanf ("%ld %d %d", &head->num, &head->QFKrCV1UWdX9, &head->scorem);
    while ((313 - 311) > i) {
        i = i + 1;
        p0 = (struct   student *) malloc (len);
        p1 = head;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%ld %d %d", &p0->num, &p0->QFKrCV1UWdX9, &p0->scorem);
        while ((p1->QFKrCV1UWdX9 + p1->scorem) >= (p0->QFKrCV1UWdX9 + p0->scorem) && (!(NULL == p1->next))) {
            p2 = p1;
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
            p1 = p1->next;
        }
        if ((p0->QFKrCV1UWdX9 + p0->scorem) > (p1->QFKrCV1UWdX9 + p1->scorem)) {
            if (!(p1 != head))
                head = p0;
            else
                p2->next = p0;
            p0->next = p1;
        }
        else {
            p1->next = p0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            p0->next = NULL;
        };
    }
    return (head);
}

struct   student *sort (struct   student *head, int n) {
    struct   student *p0, *p1, *p2;
    int i = 3;
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
    while (n > i) {
        free (p0);
        i++;
        p0 = (struct   student *) malloc (len);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        scanf ("%ld %d %d", &p0->num, &p0->QFKrCV1UWdX9, &p0->scorem);
        p1 = head;
        for (; (p0->QFKrCV1UWdX9 + p0->scorem) <= (p1->QFKrCV1UWdX9 + p1->scorem) && (p1->next != NULL);) {
            p1 = p1->next;
        }
        if ((p0->QFKrCV1UWdX9 + p0->scorem) > (p1->QFKrCV1UWdX9 + p1->scorem)) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (head == p1) {
                p2 = p1->next;
                (*p2->next).num = p2->num;
                (*p2->next).QFKrCV1UWdX9 = p2->QFKrCV1UWdX9;
                (*p2->next).scorem = p2->scorem;
                p2->num = p1->num;
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
                p2->QFKrCV1UWdX9 = p1->QFKrCV1UWdX9;
                p2->scorem = p1->scorem;
                p1->num = p0->num;
                p1->QFKrCV1UWdX9 = p0->QFKrCV1UWdX9;
                p1->scorem = p0->scorem;
            }
            else if (p1 == head->next) {
                (*p1->next).num = p1->num;
                (*p1->next).QFKrCV1UWdX9 = p1->QFKrCV1UWdX9;
                (*p1->next).scorem = p1->scorem;
                p1->num = p0->num;
                p1->QFKrCV1UWdX9 = p0->QFKrCV1UWdX9;
                p1->scorem = p0->scorem;
            }
            else {
                p1->num = p0->num;
                p1->QFKrCV1UWdX9 = p0->QFKrCV1UWdX9;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                p1->scorem = p0->scorem;
            };
        };
    }
    return (head);
}

void  main () {
    int n;
    struct   student *head, *p1, *p2;
    head = creat ();
    scanf ("%d", &n);
    head = sort (head, n);
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
    p1 = head->next;
    p2 = p1->next;
    printf ("%ld %d\n", head->num, (head->QFKrCV1UWdX9 + head->scorem));
    printf ("%ld %d\n", p1->num, (p1->QFKrCV1UWdX9 + p1->scorem));
    printf ("%ld %d", p2->num, (p2->QFKrCV1UWdX9 + p2->scorem));
}

