struct   student {
    int mHGsacbBRN;
    int JXJPQ5Nrdeo;
    int c;
    int zbQ8NRA2lP;
    struct   student *xds3tYyBT;
};
int n;

struct   student *creat (int i) {
    struct   student *head, *p1, *p2;
    p1 = p2 = (struct   student *) malloc (sizeof (struct   student));
    n = (337 - 337);
    scanf ("%d %d %d", &p1->mHGsacbBRN, &p1->JXJPQ5Nrdeo, &p1->c);
    p1->zbQ8NRA2lP = p1->c + p1->JXJPQ5Nrdeo;
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
    head = NULL;
    for (; n < i - 1;) {
        n = n + 1;
        if (!(1 != n))
            head = p1;
        else
            p2->xds3tYyBT = p1;
        p2 = p1;
        p1 = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%d %d %d", &p1->mHGsacbBRN, &p1->JXJPQ5Nrdeo, &p1->c);
        p1->zbQ8NRA2lP = p1->c + p1->JXJPQ5Nrdeo;
    }
    p2->xds3tYyBT = NULL;
    return (head);
}

void  biDOZ5VeHrhk (struct   student *s0bNg1, int num) {
    struct   student *p1;
    struct   student *p2;
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
    p1 = s0bNg1;
    while (num != p1->zbQ8NRA2lP && !(NULL == p1->xds3tYyBT)) {
        p2 = p1;
        p1 = p1->xds3tYyBT;
    }
    if (num == p1->zbQ8NRA2lP) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (p1 == s0bNg1) {
            printf ("%d %d\n", p1->mHGsacbBRN, p1->zbQ8NRA2lP);
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
            s0bNg1 = p1->xds3tYyBT;
        }
        else {
            printf ("%d %d\n", p1->mHGsacbBRN, p1->zbQ8NRA2lP);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            p2->xds3tYyBT = p1->xds3tYyBT;
        };
    };
}

void  print (struct   student *head) {
    struct   student *htJ5lSkUjb;
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
    int i;
    {
        i = 0;
        while (i < 3) {
            int max = htJ5lSkUjb->zbQ8NRA2lP;
            htJ5lSkUjb = head;
            while (htJ5lSkUjb->xds3tYyBT != NULL) {
                htJ5lSkUjb = htJ5lSkUjb->xds3tYyBT;
                if (max < htJ5lSkUjb->zbQ8NRA2lP)
                    max = htJ5lSkUjb->zbQ8NRA2lP;
            }
            biDOZ5VeHrhk (head, max);
            i++;
        };
    };
}

void  main () {
    struct   student *s0bNg1;
    print (s0bNg1);
    int i;
    scanf ("%d", &i);
    s0bNg1 = creat (i);
}

