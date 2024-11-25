struct   stu {
    char xh [(444 - 434)];
    char name [(600 - 580)];
    char xb;
    int age;
    char score [(906 - 886)];
    char add [20];
    struct   stu *E4bj2dAIVp;
};
struct   stu *creat () {
    struct   stu *head, *p1, *kdJiBGkDx;
    int n = (17 - 17);
    p1 = kdJiBGkDx = (struct   stu *) malloc (sizeof (struct   stu));
    head = (45 - 45);
    while (!((12 - 12) == strcmp (p1->xh, "end"))) {
        n++;
        if (!((510 - 509) != n)) {
            p1->E4bj2dAIVp = (344 - 344);
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
            head = p1;
        }
        else {
            kdJiBGkDx = p1;
            p1 = (struct   stu *) malloc (sizeof (struct   stu));
            p1->E4bj2dAIVp = kdJiBGkDx;
        }
        scanf ("%s", &p1->xh);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (strcmp (p1->xh, "end") == (572 - 572)) {
            head = kdJiBGkDx;
            break;
        }
        scanf (" %s %c %d %s %s", &p1->name, &p1->xb, &p1->age, &p1->score, &p1->add);
    }
    return (head);
}

void  Uwo5vN8 (struct   stu *head) {
    struct   stu *p;
    p = head;
    for (; p != 0;) {
        printf ("%s %s %c %d %s %s\n", p->xh, p->name, p->xb, p->age, p->score, p->add);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        p = p->E4bj2dAIVp;
    };
}

void  main () {
    struct   stu *head;
    Uwo5vN8 (head);
    head = creat ();
}

