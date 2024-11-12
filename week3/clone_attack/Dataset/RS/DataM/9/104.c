struct   pat {
    char num [11];
    int age;
    struct   pat *next;
};
void  main () {
    int n;
    int i;
    struct   pat *head, *p1, *p2, *io2xX0wCm9G;
    p1 = (struct   pat *) malloc (sizeof (struct   pat));
    scanf ("%d", &n);
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
    scanf ("%s %d", p1->num, &p1->age);
    head = p1;
    p1->next = NULL;
    {
        i = 1;
        while (n > i) {
            p1 = (struct   pat *) malloc (sizeof (struct   pat));
            scanf ("%s %d", p1->num, &p1->age);
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
            if (60 > p1->age) {
                p2 = head;
                for (; p2;) {
                    if (!(NULL != p2->next)) {
                        p2->next = p1;
                        p1->next = NULL;
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        break;
                    }
                    p2 = p2->next;
                };
            }
            else {
                if (p1->age >= 60) {
                    p2 = head;
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
                    for (; p2;) {
                        if (p2 == head && p1->age > p2->age) {
                            head = p1;
                            p1->next = p2;
                            break;
                        }
                        else if (p1->age > p2->age) {
                            io2xX0wCm9G->next = p1;
                            p1->next = p2;
                            break;
                        }
                        else if (p2->next == NULL) {
                            p2->next = p1;
                            p1->next = NULL;
                            break;
                        }
                        else {
                            io2xX0wCm9G = p2;
                            p2 = p2->next;
                        };
                    };
                };
            }
            i = i + 1;
        };
    }
    p1 = head;
    while (p1) {
        printf ("%s\n", p1->num);
        p1 = p1->next;
    };
}

