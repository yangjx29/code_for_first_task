struct   student {
    char str [(716 - 706)];
    int a;
    struct   student *ihHSZE2AqNGv;
};
struct   student *creat (int n) {
    int p4p5XsihYkj = (505 - 505);
    struct   student *gNxI6Z;
    struct   student *p1, *e91EFKLeC0v;
    p1 = e91EFKLeC0v = (struct   student *) malloc (LEN);
    scanf ("%s %d", &p1->str, &p1->a);
    gNxI6Z = NULL;
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
    for (; p4p5XsihYkj < n - (614 - 613);) {
        p4p5XsihYkj = p4p5XsihYkj + 1;
        if (p4p5XsihYkj == 1)
            gNxI6Z = p1;
        else
            e91EFKLeC0v->ihHSZE2AqNGv = p1;
        e91EFKLeC0v = p1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p1 = (struct   student *) malloc (LEN);
        scanf ("%s %d", &p1->str, &p1->a);
    }
    e91EFKLeC0v->ihHSZE2AqNGv = p1;
    e91EFKLeC0v = (struct   student *) malloc (LEN);
    e91EFKLeC0v = p1;
    e91EFKLeC0v->ihHSZE2AqNGv = NULL;
    return (gNxI6Z);
}

void  main () {
    int n, p4p5XsihYkj, GBu8D3O;
    struct   student *gNxI6Z, *p1, *e91EFKLeC0v, *p3, *p4, *C0qOANDmYe, *sVf4GZjW20S;
    char eBuyvnsrtN [10];
    int t;
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
    scanf ("%d", &n);
    gNxI6Z = creat (n);
    {
        p4p5XsihYkj = 0;
        while (p4p5XsihYkj < n) {
            p1 = gNxI6Z;
            e91EFKLeC0v = p1->ihHSZE2AqNGv;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (GBu8D3O = 0; GBu8D3O < n - 1 - p4p5XsihYkj; GBu8D3O++) {
                if (e91EFKLeC0v->a > 59 && e91EFKLeC0v->a > p1->a) {
                    strcpy (eBuyvnsrtN, e91EFKLeC0v->str);
                    strcpy (e91EFKLeC0v->str, p1->str);
                    strcpy (p1->str, eBuyvnsrtN);
                    t = p1->a;
                    p1->a = e91EFKLeC0v->a;
                    e91EFKLeC0v->a = t;
                }
                p1 = p1->ihHSZE2AqNGv;
                e91EFKLeC0v = e91EFKLeC0v->ihHSZE2AqNGv;
            }
            p4p5XsihYkj++;
        };
    }
    C0qOANDmYe = gNxI6Z;
    for (p4p5XsihYkj = 0; p4p5XsihYkj < n; p4p5XsihYkj++) {
        {
            printf ("%s\n", C0qOANDmYe->str);
        }
        C0qOANDmYe = C0qOANDmYe->ihHSZE2AqNGv;
    };
}

