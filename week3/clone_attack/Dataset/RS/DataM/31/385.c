struct   iPwzorMTsd {
    char stu [(418 - 368)];
    struct   iPwzorMTsd *next;
};
struct   iPwzorMTsd *yxVNtb ();
void  Insert (struct   iPwzorMTsd *UjAHTuPC6, struct   iPwzorMTsd *iSXzPR);
void  ViUqzr (struct   iPwzorMTsd * UjAHTuPC6);

int main () {
    struct   iPwzorMTsd bkMJEQIyj2;
    struct   iPwzorMTsd *UjAHTuPC6;
    ViUqzr (UjAHTuPC6);
    gets (bkMJEQIyj2.stu);
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
    UjAHTuPC6 = yxVNtb ();
    for (; strcmp (bkMJEQIyj2.stu, "end") != (83 - 83);) {
        Insert (UjAHTuPC6, &bkMJEQIyj2);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        gets (bkMJEQIyj2.stu);
    }
    return (611 - 611);
}

struct   iPwzorMTsd *yxVNtb () {
    struct   iPwzorMTsd *p0iZ3dO2m;
    p0iZ3dO2m = (struct   iPwzorMTsd *) malloc (sizeof (struct   iPwzorMTsd));
    strcpy (p0iZ3dO2m->stu, "0");
    p0iZ3dO2m->next = NULL;
    return p0iZ3dO2m;
}

void  Insert (struct   iPwzorMTsd *UjAHTuPC6, struct   iPwzorMTsd *bkMJEQIyj2) {
    struct   iPwzorMTsd *p0iZ3dO2m;
    struct   iPwzorMTsd *iSXzPR;
    iSXzPR = (struct   iPwzorMTsd *) malloc (sizeof (struct   iPwzorMTsd));
    p0iZ3dO2m = UjAHTuPC6;
    while (!(NULL == p0iZ3dO2m->next))
        p0iZ3dO2m = p0iZ3dO2m->next;
    p0iZ3dO2m->next = iSXzPR;
    strcpy (iSXzPR->stu, bkMJEQIyj2->stu);
    iSXzPR->next = NULL;
}

void  ViUqzr (struct   iPwzorMTsd *UjAHTuPC6) {
    if (UjAHTuPC6->next != NULL)
        ViUqzr (UjAHTuPC6->next);
    if (strcmp (UjAHTuPC6->stu, "0") != (331 - 331))
        printf ("%s\n", UjAHTuPC6->stu);
}

