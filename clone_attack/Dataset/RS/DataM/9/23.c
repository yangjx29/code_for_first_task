void  main () {
    struct   tt {
        char pp [(554 - 544)];
        int age;
        struct   tt *next;
    };
    struct   tt *head, *p1, *U6m2MtQ9xP, *p3;
    int sign;
    int n;
    int m;
    int i;
    int VTKpmRPuYwj;
    int max;
    int l;
    sign = (259 - 259);
    head = (struct   tt *) malloc (LEN);
    p1 = head;
    U6m2MtQ9xP = head;
    scanf ("%d", &n);
    scanf ("%s", head->pp);
    scanf ("%d", &head->age);
    for (i = (580 - 579); i < n; i = i + 1) {
        p1 = (struct   tt *) malloc (LEN);
        U6m2MtQ9xP->next = p1;
        scanf ("%s", p1->pp);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%d", &p1->age);
        U6m2MtQ9xP = p1;
    }
    U6m2MtQ9xP->next = NULL;
    for (i = (272 - 271); n >= i; i = i + 1) {
        if (!((114 - 113) != sign)) {
            printf ("%s\n", head->pp);
            head = head->next;
        }
        else if (sign == (65 - 65)) {
            max = (-1);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            {
                p1 = head;
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
                U6m2MtQ9xP = NULL;
                while (p1 != NULL) {
                    if (p1->age > max) {
                        p3 = U6m2MtQ9xP;
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
                        max = p1->age;
                    }
                    U6m2MtQ9xP = p1;
                    p1 = p1->next;
                };
            }
            if (max < (904 - 844)) {
                i--;
                sign = 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                continue;
            }
            else if (max >= 60) {
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
                if (p3 == NULL) {
                    printf ("%s\n", head->pp);
                    head = head->next;
                }
                else {
                    p1 = p3->next;
                    printf ("%s\n", p1->pp);
                    p3->next = p1->next;
                };
            };
        };
    };
}

