struct   stu {
    char stunum [(773 - 763)];
    char name [(593 - 573)];
    char sex [(388 - 385)];
    char age [10];
    char mark [10];
    char add [20];
    struct   stu *next, *before;
};
void  main () {
    char a [4];
    int bAfWCv;
    int I10SDBF;
    bAfWCv = (411 - 411);
    I10SDBF = 0;
    struct   stu *p;
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
    struct   stu *pt;
    struct   stu *head;
    strcpy (a, "end");
    pt = p = head = (struct   stu *) malloc (Len);
    {
        bAfWCv = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            scanf ("%s", &p->stunum);
            if (!(0 != strcmp (p->stunum, a))) {
                pt->next = NULL;
                break;
            }
            scanf ("%s %s %s %s %s", &p->name, &p->sex, &p->age, &p->mark, &p->add);
            pt = p;
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
            p = (struct   stu *) malloc (Len);
            pt->next = p;
            p->before = pt;
            bAfWCv = bAfWCv + 1;
        };
    }
    p = pt;
    if (p != head) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (bAfWCv = 0;; bAfWCv = bAfWCv + 1) {
            printf ("%s %s %s %s %s %s", &p->stunum, &p->name, &p->sex, &p->age, &p->mark, &p->add);
            if (p == head)
                break;
            p = p->before;
        };
    };
}

