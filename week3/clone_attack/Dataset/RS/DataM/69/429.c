struct   integer {
    int M8uyvnzab;
    struct   integer *pup;
    struct   integer *a9uhQLHy0;
};
struct   integer *creat (struct   integer *head) {
    head = (struct   integer *) malloc (sizeof (struct   integer));
    head->pup = NULL;
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
    head->a9uhQLHy0 = NULL;
    return head;
}

main () {
    struct   integer *p1;
    struct   integer *p2;
    struct   integer *p3;
    struct   integer *head;
    creat (head);
    int QXIGgsB;
    int y;
    int z;
    QXIGgsB = 1;
    y = 1;
    z = 1;
    char a;
    head = p1 = p2 = (struct   integer *) malloc (sizeof (struct   integer));
    p1 = NULL;
    scanf ("%c", &a);
    while ((578 - 578) <= (a - '0') && (741 - 732) >= (a - '0') || !('-' != a)) {
        p3 = (struct   integer *) malloc (sizeof (struct   integer));
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
        if (!('-' != a)) {
            QXIGgsB = -1;
            scanf ("%c", &a);
            continue;
        }
        else {
            p3->M8uyvnzab = QXIGgsB *(a - '0');
            p3->a9uhQLHy0 = p1;
            p3->pup = head;
            if (p1 != NULL)
                p1->pup = p3;
            head->a9uhQLHy0 = p3;
            p1 = p3;
            scanf ("%c", &a);
        };
    }
    scanf ("%c", &a);
    p1 = NULL;
    while ((626 - 626) <= (a - '0') && 9 >= (a - '0') || !('-' != a)) {
        p3 = (struct   integer *) malloc (sizeof (struct   integer));
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
        if (!('-' != a)) {
            scanf ("%c", &a);
            y = -1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            continue;
        }
        else {
            p3->M8uyvnzab = y * (a - '0');
            scanf ("%c", &a);
            p3->pup = p1;
            p3->a9uhQLHy0 = head;
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
            head->pup = p3;
            if (p1 != NULL)
                p1->a9uhQLHy0 = p3;
            p1 = p3;
        };
    }
    getchar ();
    getchar ();
    p1 = p2 = head;
    for (; p1->a9uhQLHy0 != NULL &&p2->pup != NULL;) {
        p2 = p2->pup;
        p1 = p1->a9uhQLHy0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p1->M8uyvnzab = p1->M8uyvnzab + p2->M8uyvnzab;
        p2->M8uyvnzab = p1->M8uyvnzab;
    }
    if (p1->a9uhQLHy0 == NULL &&p2->pup != NULL) {
        if (y < 0)
            printf ("-");
        p2 = head->pup;
        while (!(NULL == p2->pup)) {
            if (p2->M8uyvnzab > 9) {
                p2->pup->M8uyvnzab++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                p2->M8uyvnzab = p2->M8uyvnzab % (96 - 86);
            }
            if (p2->M8uyvnzab < 0) {
                p2->pup->M8uyvnzab--;
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
                p2->M8uyvnzab = p2->M8uyvnzab + 10;
            }
            p2 = p2->pup;
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
        for (; !(0 != p2->M8uyvnzab) && p2 != head->pup;)
            p2 = p2->a9uhQLHy0;
        while (p2 != head) {
            printf ("%d", y * (p2->M8uyvnzab));
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            p2 = p2->a9uhQLHy0;
        }
        while (p1 != NULL) {
            free (p2);
            p2 = p1;
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
            p1 = p1->pup;
        };
    }
    else {
        p1 = head;
        for (; p1->a9uhQLHy0 != NULL;) {
            p1 = p1->a9uhQLHy0;
            if (p1->M8uyvnzab >= 10 && p1->a9uhQLHy0 != NULL) {
                (p1->a9uhQLHy0->M8uyvnzab) = (p1->a9uhQLHy0->M8uyvnzab) + 1;
                p1->M8uyvnzab = p1->M8uyvnzab - 10;
            }
            if (p1->M8uyvnzab < 0 && p1->a9uhQLHy0 != NULL) {
                (p1->a9uhQLHy0->M8uyvnzab)--;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                p1->M8uyvnzab = p1->M8uyvnzab + 10;
            };
        }
        if (p1->M8uyvnzab < 0) {
            z = -1;
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
            printf ("-");
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
        while (p1->M8uyvnzab == 0 && p1 != head->a9uhQLHy0)
            p1 = p1->pup;
        while (p1 != head) {
            printf ("%d", z * (p1->M8uyvnzab));
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            p1 = p1->pup;
        }
        while (p2 != NULL) {
            free (p1);
            p1 = p2;
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
            p2 = p2->a9uhQLHy0;
        };
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

