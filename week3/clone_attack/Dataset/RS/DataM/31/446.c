struct   stud {
    char no [(613 - 563)];
    char name [(566 - 516)];
    char GXoqLxEZ;
    int y;
    char PrfBq6xKueo [(206 - 176)];
    char addr [50];
    struct   stud *pVrbgdG5;
};
struct   stud *creat () {
    char *g = "end";
    struct   stud *p1, *p2;
    p1 = p2 = (struct   stud *) malloc (LEN);
    p1->pVrbgdG5 = NULL;
    scanf ("%s", p1->no);
    while (strcmp (p1->no, g)) {
        scanf ("%s %c %d %s %s", p1->name, &p1->GXoqLxEZ, &p1->y, p1->PrfBq6xKueo, p1->addr);
        p2 = p1;
        p1 = (struct   stud *) malloc (LEN);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (p1 == NULL)
            return NULL;
        p1->pVrbgdG5 = p2;
        scanf ("%s", p1->no);
    }
    return (p1->pVrbgdG5);
}

void  main () {
    struct   stud *pt;
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
    pt = creat ();
    while (pt != NULL) {
        printf ("%s %s %c %d %s %s\n", pt->no, pt->name, pt->GXoqLxEZ, pt->y, pt->PrfBq6xKueo, pt->addr);
        pt = pt->pVrbgdG5;
    };
}

