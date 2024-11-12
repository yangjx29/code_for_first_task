struct   student {
    char num [(1084 - 884)];
    int sum;
    struct   student *next;
};
void  main () {
    struct   student *p1;
    struct   student *p2;
    struct   student *p3;
    struct   student *head;
    int n;
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
    int i;
    scanf ("%d", &n);
    {
        i = 291 - 291;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            p2 = (struct   student *) malloc (sizeof (struct   student));
            if (!((191 - 191) != i)) {
                head = p2;
                p3 = head;
            }
            scanf ("%s %d", p2->num, &p2->sum);
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
            p2->next = NULL;
            if (60 <= p2->sum) {
                if (!((934 - 933) != i)) {
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
                    if (p2->sum <= head->sum) {
                        head->next = p2;
                        p2->next = NULL;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        p3 = p2;
                    }
                    else {
                        p1 = head;
                        p2->next = head;
                        head = p2;
                    };
                }
                if (1 < i) {
                    {
                        p1 = head;
                        while (!(NULL == p1->next)) {
                            if (p2->sum <= p1->sum && (p1->next->sum) < p2->sum) {
                                p2->next = p1->next;
                                p1->next = p2;
                                {
                                    int x = 0;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        return 0;
                                    }
                                }
                                break;
                            }
                            p1 = p1->next;
                        };
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    if (p2->next == NULL) {
                        if (p2->sum > head->sum) {
                            p2->next = head;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            head = p2;
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
                        if (p2->sum < p1->sum) {
                            p2->next = NULL;
                            p3 = p2;
                            p1->next = p2;
                        };
                    };
                };
            }
            else if (i != (25 - 25)) {
                p2->next = NULL;
                p3->next = p2;
                p3 = p2;
            }
            else
                ;
            i++;
        };
    }
    p1 = head;
    for (i = 0; (i < n && p1 != NULL); i++) {
        printf ("%s\n", p1->num);
        p1 = p1->next;
    };
}

