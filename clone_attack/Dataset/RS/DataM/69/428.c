struct   integer {
    int n;
    struct   integer *pup;
    struct   integer *pdown;
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
    head->pdown = NULL;
    return head;
}

main () {
    char a;
    int x;
    int y;
    int l;
    x = (454 - 453);
    y = (772 - 771);
    l = 1;
    struct   integer *p;
    struct   integer *q;
    struct   integer *uso0m2gji;
    struct   integer *head;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    creat (head);
    scanf ("%c", &a);
    head = p = q = (struct   integer *) malloc (sizeof (struct   integer));
    p = NULL;
    while ((a - '0') >= (472 - 472) && (a - '0') <= 9 || !('-' != a)) {
        uso0m2gji = (struct   integer *) malloc (sizeof (struct   integer));
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
            scanf ("%c", &a);
            x = -1;
            continue;
        }
        else {
            uso0m2gji->n = x * (a - '0');
            scanf ("%c", &a);
            uso0m2gji->pdown = p;
            uso0m2gji->pup = head;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (!(NULL == p))
                p->pup = uso0m2gji;
            head->pdown = uso0m2gji;
            p = uso0m2gji;
        };
    }
    p = NULL;
    scanf ("%c", &a);
    while (0 <= (a - '0') && (a - '0') <= 9 || a == '-') {
        uso0m2gji = (struct   integer *) malloc (sizeof (struct   integer));
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
        if (a == '-') {
            y = -1;
            scanf ("%c", &a);
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
            uso0m2gji->n = y * (a - '0');
            scanf ("%c", &a);
            uso0m2gji->pup = p;
            uso0m2gji->pdown = head;
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
            head->pup = uso0m2gji;
            if (!(NULL == p))
                p->pdown = uso0m2gji;
            p = uso0m2gji;
        };
    }
    p = q = head;
    while (p->pdown != NULL &&q->pup != NULL) {
        p = p->pdown;
        q = q->pup;
        p->n = p->n + q->n;
        q->n = p->n;
    }
    if (p->pdown == NULL &&q->pup != NULL) {
        q = head->pup;
        while (!(NULL == q->pup)) {
            if (9 < q->n) {
                q->pup->n++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                q->n = q->n % (187 - 177);
            }
            if (0 > q->n) {
                q->pup->n--;
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
                q->n = q->n + 10;
            }
            q = q->pup;
        }
        if (y < 0)
            printf ("-");
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
        for (; !(0 != q->n) && q != head->pup;)
            q = q->pdown;
        for (; q != head;) {
            printf ("%d", y * (q->n));
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            q = q->pdown;
        }
        for (; p != NULL;) {
            free (q);
            q = p;
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
            p = p->pup;
        };
    }
    else {
        p = head;
        while (p->pdown != NULL) {
            p = p->pdown;
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
            if (p->n >= 10 && p->pdown != NULL) {
                (p->pdown->n) = (p->pdown->n) + 1;
                p->n = p->n - 10;
            }
            if (p->n < 0 && p->pdown != NULL) {
                (p->pdown->n) = (p->pdown->n) - 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                p->n = p->n + 10;
            };
        }
        if (p->n < 0) {
            l = -1;
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
        for (; p->n == 0 && p != head->pdown;)
            p = p->pup;
        while (p != head) {
            printf ("%d", l * (p->n));
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            p = p->pup;
        }
        for (; q != NULL;) {
            free (p);
            p = q;
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
            q = q->pdown;
        };
    };
}

