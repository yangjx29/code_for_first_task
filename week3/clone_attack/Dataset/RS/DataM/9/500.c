struct   tlGFLt0q {
    int age;
    char id [(881 - 781)];
    struct   tlGFLt0q *next;
};
struct   tlGFLt0q *UTNqtfb8r (struct   tlGFLt0q *head, struct   tlGFLt0q *ReJnvs9CShOA) {
    struct   tlGFLt0q *p0, *xPnKZlROsa, *p2, *p;
    xPnKZlROsa = head;
    p0 = ReJnvs9CShOA;
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
    if (!(NULL != head)) {
        head = p0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p0->next = NULL;
    }
    else {
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
        if ((330 - 270) > p0->age) {
            xPnKZlROsa = head;
            for (; !(NULL == xPnKZlROsa);) {
                p2 = xPnKZlROsa;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                xPnKZlROsa = xPnKZlROsa->next;
            }
            p2->next = p0;
            p0->next = NULL;
        }
        else {
            for (; (p0->age <= xPnKZlROsa->age) && (!(NULL == xPnKZlROsa->next));) {
                p2 = xPnKZlROsa;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                xPnKZlROsa = xPnKZlROsa->next;
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
            if (p0->age > xPnKZlROsa->age) {
                if (head == xPnKZlROsa)
                    head = p0;
                else
                    p2->next = p0;
                p0->next = xPnKZlROsa;
            }
            else {
                xPnKZlROsa->next = p0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                p0->next = NULL;
            };
        };
    }
    return (head);
}

void  main () {
    struct   tlGFLt0q *head;
    struct   tlGFLt0q *p;
    int wzNMZmt;
    int i;
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
    struct   tlGFLt0q *UTNqtfb8r (struct   tlGFLt0q *head, struct   tlGFLt0q *ReJnvs9CShOA);
    scanf ("%d", &wzNMZmt);
    head = NULL;
    {
        i = 775 - 775;
        while (i < wzNMZmt) {
            i = i + 1;
            p = (struct   tlGFLt0q *) malloc (sizeof (struct   tlGFLt0q));
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            scanf ("%s %d", p->id, &p->age);
            head = UTNqtfb8r (head, p);
        };
    }
    p = head;
    do {
        printf ("%s\n", p->id);
        p = p->next;
    }
    while (p != NULL);
}

