int main () {
    struct   joyan {
        char num [10];
        char name [20];
        char D50kGQ2EfNi [(249 - 248)];
        int age;
        float score;
        char plS2xd1wXNHk [20];
        struct   joyan *next;
    };
    struct   joyan *head, *p1, *p2;
    struct   joyan *p;
    struct   joyan *KrkS7Ayd8;
    struct   joyan *temp;
    int n = 1, i;
    p1 = p2 = head = (struct   joyan *) malloc (LEN);
    scanf ("%s%s%s%d%f%s", p1->num, p1->name, p1->D50kGQ2EfNi, &p1->age, &p1->score, p1->plS2xd1wXNHk);
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
    p1->next = NULL;
    while (p1->num[0] >= '0' && p1->num[0] <= '9') {
        p1 = (struct   joyan *) malloc (LEN);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s", p1->num);
        if (p1->num[0] != 'e') {
            n = n + 1;
            scanf ("%s%s%d%f%s", p1->name, p1->D50kGQ2EfNi, &p1->age, &p1->score, p1->plS2xd1wXNHk);
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
            p2->next = p1;
            p2 = p1;
        }
        else {
            p2->next = NULL;
            break;
        };
    }
    p = head;
    if (p->next != NULL) {
        KrkS7Ayd8 = p->next;
        if (KrkS7Ayd8->next == NULL) {
            p->next = NULL;
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
            KrkS7Ayd8->next = p;
        }
        else {
            p->next = NULL;
            temp = p;
            p = KrkS7Ayd8;
            KrkS7Ayd8 = KrkS7Ayd8->next;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (KrkS7Ayd8->next != NULL) {
                p->next = temp;
                temp = p;
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
                p = KrkS7Ayd8;
                KrkS7Ayd8 = KrkS7Ayd8->next;
            }
            p->next = temp;
            KrkS7Ayd8->next = p;
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        head = KrkS7Ayd8;
    }
    p1 = head;
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
        while (i < n) {
            i = i + 1;
            printf ("%s %s %s %d %g %s\n", p1->num, p1->name, p1->D50kGQ2EfNi, p1->age, p1->score, p1->plS2xd1wXNHk);
            p1 = p1->next;
        };
    }
    return 0;
}

