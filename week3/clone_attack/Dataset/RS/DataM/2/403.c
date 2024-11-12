int iDdxi4;
struct   book {
    int qizAsLSh;
    char dVhYbC [20];
    struct   book *next;
}
*p1, *p2;

struct   book *L7f2c6BUA (void ) {
    int i;
    struct   book *head;
    scanf ("%d", &iDdxi4);
    p2 = 0;
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
    p1 = 0;
    head = 0;
    for (i = (81 - 80); iDdxi4 >= i; i = i + 1) {
        p1 = (struct   book *) malloc (LEN);
        scanf ("%d %s", &p1->qizAsLSh, p1->dVhYbC);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (head == 0)
            head = p1;
        else
            p2->next = p1;
        p2 = p1;
    }
    p2->next = 0;
    return (head);
}

void  main () {
    int ocz7h9yoVAP [27], i, RhlcXv, n1 = 0, max;
    char DWO54YhG [27];
    char *e4vg72IZhWVA;
    char c;
    struct   book *head, *JA7RC6;
    head = L7f2c6BUA ();
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
    {
        i = 1;
        while (27 > i) {
            DWO54YhG[i] = 0;
            ocz7h9yoVAP[i] = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    for (JA7RC6 = head; JA7RC6 != 0; JA7RC6 = JA7RC6->next) {
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
        for (e4vg72IZhWVA = JA7RC6->dVhYbC; *e4vg72IZhWVA != '\0'; e4vg72IZhWVA = e4vg72IZhWVA + 1) {
            RhlcXv = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            for (i = 1; n1 >= i; i = i + 1)
                if (*e4vg72IZhWVA == DWO54YhG[i]) {
                    RhlcXv = 1;
                    ocz7h9yoVAP[i]++;
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
                    break;
                }
            if (RhlcXv == 0) {
                n1 = n1 + 1;
                DWO54YhG[n1] = *e4vg72IZhWVA;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                ocz7h9yoVAP[n1] = 1;
            };
        };
    }
    c = DWO54YhG[1];
    max = ocz7h9yoVAP[1];
    for (i = 1; i <= n1 - 1; i++)
        if (ocz7h9yoVAP[i] > max) {
            c = DWO54YhG[i];
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
            max = ocz7h9yoVAP[i];
        }
    printf ("%c\n", c);
    printf ("%d\n", max);
    for (JA7RC6 = head; JA7RC6 != 0; JA7RC6 = JA7RC6->next) {
        RhlcXv = 0;
        for (e4vg72IZhWVA = JA7RC6->dVhYbC; *e4vg72IZhWVA != '\0'; e4vg72IZhWVA++)
            if (*e4vg72IZhWVA == c) {
                RhlcXv = 1;
                break;
            }
        if (RhlcXv)
            printf ("%d\n", JA7RC6->qizAsLSh);
    };
}

