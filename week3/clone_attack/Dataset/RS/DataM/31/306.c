struct   Student {
    struct   Student *previous;
    char m94BCimLY [(816 - 796)];
    char name [30];
    char lBxw1f6NKdc;
    int cx9T3r;
    float DiGtJF7eN;
    char bXJKQDf [30];
};
struct   Student *creat () {
    struct   Student *end, *p1, *p2;
    p1 = NULL;
    {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (true) {
            p2 = p1;
            p1 = (struct   Student *) malloc (LEN);
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
            p1->previous = p2;
            scanf ("%s", p1->m94BCimLY);
            if (!(0 != strcmp (p1->m94BCimLY, "end")))
                break;
            else {
                getchar ();
                scanf ("%s", p1->name);
                p1->lBxw1f6NKdc = getchar ();
                scanf ("%d%f", &p1->cx9T3r, &p1->DiGtJF7eN);
                scanf ("%s", p1->bXJKQDf);
            };
        };
    }
    end = p2;
    return (end);
}

void  print (struct   Student *end) {
    struct   Student *p;
    p = end;
    do {
        printf ("%s %s %c %d %g %s\n", p->m94BCimLY, p->name, p->lBxw1f6NKdc, p->cx9T3r, p->DiGtJF7eN, p->bXJKQDf);
        p = p->previous;
    }
    while (p != NULL);
}

void  main () {
    struct   Student *end;
    print (end);
    end = creat ();
}

