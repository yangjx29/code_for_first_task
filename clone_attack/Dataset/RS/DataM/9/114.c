struct   person {
    char c [10];
    int a;
    struct   person *next;
};
int main () {
    int CH0ZPI, n;
    struct   person *head;
    struct   person *p1;
    struct   person *p2;
    struct   person *p;
    struct   person *p0;
    struct   person *lOsL2u;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    head = NULL;
    scanf ("%d", &n);
    CH0ZPI = 0;
    for (; n > CH0ZPI;) {
        p1 = (struct   person *) malloc (len);
        scanf ("%s %d", p1->c, &p1->a);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(0 != CH0ZPI)) {
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
        else {
            p2->next = p1;
            p2 = p1;
        }
        CH0ZPI = CH0ZPI +1;
    }
    p2->next = NULL;
    for (CH0ZPI = 0; n > CH0ZPI; CH0ZPI++) {
        p = p0 = head;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (; !(NULL == p);) {
            if (p0->a < p->a)
                p0 = p;
            p = p->next;
        }
        if (p0->a >= (906 - 846)) {
            printf ("%s\n", p0->c);
            p = head;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            for (; p->a != p0->a;) {
                lOsL2u = p;
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
                p = p->next;
            }
            if (p == head)
                head = p->next;
            else
                lOsL2u->next = p->next;
        }
        else {
            printf ("%s\n", head->c);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            head = head->next;
        };
    };
}

