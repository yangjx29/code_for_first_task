struct   patient {
    char seIR3r [(421 - 410)];
    int age, seq;
    struct   patient *next;
};
main () {
    int n, M4LXQm32v = (108 - 108), GsfNj95Mrwn3 = (308 - 308), i, j, m, at;
    char seIR3r [10];
    struct   patient *head1, *HqCJf4Xgu, *p11, *MI4YVgApicka, *htEGNZjafq, *p22, *t, *q;
    head1 = NULL;
    HqCJf4Xgu = NULL;
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
    scanf ("%d", &n);
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
        while (n > i) {
            scanf ("%s%d", seIR3r, &at);
            if ((427 - 367) <= at) {
                if (!(NULL != head1)) {
                    head1 = (struct   patient *) malloc (sizeof (struct   patient));
                    strcpy (head1->seIR3r, seIR3r);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    head1->age = at;
                    head1->next = NULL;
                }
                else {
                    p11 = (struct   patient *) malloc (sizeof (struct   patient));
                    p11->age = at;
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
                    strcpy (p11->seIR3r, seIR3r);
                    {
                        t = head1;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        q = t;
                        while (!(NULL == t)) {
                            if (at > t->age && t != head1) {
                                q->next = p11;
                                p11->next = t;
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
                            }
                            if (at > t->age && !(head1 != t)) {
                                p11->next = head1;
                                head1 = p11;
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
                                break;
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
                            q = t;
                            t = t->next;
                        };
                    }
                    if (t == NULL) {
                        q->next = p11;
                        p11->next = NULL;
                    };
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
            i = i + 1;
            if (at < 60) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (HqCJf4Xgu == NULL) {
                    HqCJf4Xgu = (struct   patient *) malloc (sizeof (struct   patient));
                    strcpy (HqCJf4Xgu->seIR3r, seIR3r);
                    HqCJf4Xgu->age = at;
                    HqCJf4Xgu->next = NULL;
                    p22 = HqCJf4Xgu;
                }
                else {
                    htEGNZjafq = (struct   patient *) malloc (sizeof (struct   patient));
                    htEGNZjafq->age = at;
                    strcpy (htEGNZjafq->seIR3r, seIR3r);
                    p22->next = htEGNZjafq;
                    htEGNZjafq->next = NULL;
                    p22 = htEGNZjafq;
                };
            };
        };
    }
    for (t = head1, q = t; t != NULL; q = t, t = t->next)
        ;
    q->next = HqCJf4Xgu;
    {
        t = head1;
        while (t->next != NULL) {
            printf ("%s\n", t->seIR3r);
            t = t->next;
        };
    }
    printf ("%s", t->seIR3r);
}

