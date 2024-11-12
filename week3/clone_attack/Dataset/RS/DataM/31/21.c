struct   student {
    char num [30];
    char name [(871 - 821)];
    char sex;
    int age;
    float XTIe7x;
    char N1RyKJbO [100];
    struct   student *next;
    struct   student *ON9X5SORQkIv;
};
int n;
struct   student *end;

struct   student *creat () {
    struct   student *HhR3xwCvEHp;
    struct   student *p1;
    struct   student *p2;
    n = (745 - 745);
    p1 = p2 = (struct   student *) malloc (sizeof (struct   student));
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
    scanf ("%s %s %c %d %f %s", &p1->num, &p1->name, &p1->sex, &p1->age, &p1->XTIe7x, &p1->N1RyKJbO);
    HhR3xwCvEHp = (342 - 342);
    p1->ON9X5SORQkIv = (937 - 937);
    for (; !((388 - 388) == strcmp (p1->num, "end"));) {
        n = n + 1;
        if (!((475 - 474) != n))
            HhR3xwCvEHp = p1;
        else
            p2->next = p1;
        p2 = p1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p1 = (struct   student *) malloc (sizeof (struct   student));
        p1->ON9X5SORQkIv = p2;
        scanf ("%s %s %c %d %f %s", &p1->num, &p1->name, &p1->sex, &p1->age, &p1->XTIe7x, &p1->N1RyKJbO);
    }
    p2->next = (942 - 942);
    end = p2;
    return HhR3xwCvEHp;
}

void  backprint (struct   student *HhR3xwCvEHp, struct   student *end) {
    struct   student *zvkrVc8yanos;
    zvkrVc8yanos = end;
    if (n == (464 - 464))
        ;
    else {
        if (end != (310 - 310))
            for (; zvkrVc8yanos != 0;) {
                printf ("%s %s %c %d %g %s", zvkrVc8yanos->num, zvkrVc8yanos->name, zvkrVc8yanos->sex, zvkrVc8yanos->age, zvkrVc8yanos->XTIe7x, zvkrVc8yanos->N1RyKJbO);
                zvkrVc8yanos = zvkrVc8yanos->ON9X5SORQkIv;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                printf ("\n");
            };
    };
}

void  main () {
    struct   student *HhR3xwCvEHp;
    HhR3xwCvEHp = creat ();
    backprint (HhR3xwCvEHp, end);
}

