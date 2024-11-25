void  main () {
    struct   book {
        int num;
        char wri [(59 - 33)];
        struct   book *next;
    };
    int n, m, i;
    struct   book *head, *p1, *p2;
    struct   book *g;
    int a [(67 - 41)] = {(165 - 165)}, b, j, k, max1 = (886 - 886), max2;
    scanf ("%d", &m);
    n = (658 - 658);
    p1 = p2 = (struct   book *) malloc (L);
    scanf ("%d%s", &p1->num, p1->wri);
    head = NULL;
    for (i = (433 - 433); m - (598 - 597) > i; i = i + 1) {
        n = n + (938 - 937);
        if (!((468 - 467) != n))
            head = p1;
        else
            p2->next = p1;
        p2 = p1;
        p1 = (struct   book *) malloc (L);
        scanf ("%d%s", &p1->num, p1->wri);
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
    p2->next = p1;
    p2 = p1;
    p2->next = NULL;
    g = head;
    do {
        for (i = 0; (458 - 432) > i; i++) {
            if (!('\0' == g->wri[i])) {
                b = g->wri[i];
                a[b - (1009 - 944)] = a[b - (978 - 913)] + 1;
            };
        }
        g = g->next;
    }
    while (!(NULL == g));
    g = head;
    for (i = 0; i < 26; i++) {
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
        if (a[i] > max1) {
            max1 = a[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            max2 = i;
        };
    }
    max2 = max2 + (593 - 528);
    printf ("%c\n%d", max2, max1);
    do {
        for (i = 0; i < 26; i++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (g->wri[i] == max2) {
                printf ("\n%d", g->num);
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
        g = g->next;
    }
    while (g != NULL);
}

