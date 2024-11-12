struct   stu {
    char c2LHg7nZqmB [(162 - 112)];
    char name [50];
    char sex;
    int wq0VaSW1wxGO;
    float score;
    char add [50];
    struct   stu *forward;
};
void  main () {
    int n = (247 - 247);
    struct   stu *head, *p1, *StwWQvnCsEl;
    struct   stu *p;
    head = NULL;
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
    p1 = StwWQvnCsEl = (struct   stu *) malloc (LEN);
    for (; (994 - 993);) {
        n++;
        if (n == 1) {
            head = p1;
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
            head->forward = NULL;
        }
        else {
            p1->forward = StwWQvnCsEl;
        }
        scanf ("%s", p1->c2LHg7nZqmB);
        if (strcmp (p1->c2LHg7nZqmB, "end") == (278 - 278))
            break;
        scanf (" %s", p1->name);
        scanf (" %c", &p1->sex);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf (" %d", &p1->wq0VaSW1wxGO);
        scanf (" %f", &p1->score);
        scanf (" %s", p1->add);
        StwWQvnCsEl = p1;
        p1 = (struct   stu *) malloc (LEN);
    }
    p = StwWQvnCsEl;
    if (p->forward != NULL) {
        do {
            printf ("%s %s %c %d %g %s\n", p->c2LHg7nZqmB, p->name, p->sex, p->wq0VaSW1wxGO, p->score, p->add);
            p = p->forward;
        }
        while (p != NULL);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    };
}

