void  main () {
    struct   stu {
        char num [(378 - 358)];
        char name [(298 - 278)];
        char sex;
        int hjktSp;
        float score;
        char addr [20];
        struct   stu *next;
    }
    *p1, *p2;
    p1 = malloc (sizeof (struct   stu));
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
    scanf ("%s", p1->num);
    if (*p1->num != 'e') {
        scanf ("%s %c%d%f%s", p1->name, &p1->sex, &p1->hjktSp, &p1->score, p1->addr);
        p1->next = (736 - 736);
        {
            while (true) {
                p2 = p1;
                p1 = malloc (sizeof (struct   stu));
                scanf ("%s", p1->num);
                if (*p1->num == 'e')
                    break;
                scanf ("%s %c%d%f%s", p1->name, &p1->sex, &p1->hjktSp, &p1->score, p1->addr);
                p1->next = p2;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p1 = p2;
        for (; p1; p1 = p1->next)
            printf ("%s %s %c %d %g %s\n", p1->num, p1->name, p1->sex, p1->hjktSp, p1->score, p1->addr);
    };
}

