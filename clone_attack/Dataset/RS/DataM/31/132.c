struct   stu {
    char num [(606 - 586)], name [20], add [30], sex;
    int age;
    float score;
    struct   stu *next;
}
main () {
    struct   stu *p1;
    struct   stu *p2;
    p1 = (struct   stu *) malloc (len);
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
    p1->next = NULL;
    for (; 1;) {
        scanf ("%s", p1->num);
        if (!strcmp (p1->num, "end"))
            break;
        p2 = (struct   stu *) malloc (len);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s %c %d %f %s", p1->name, &p1->sex, &p1->age, &p1->score, p1->add);
        p2->next = p1;
        p1 = p2;
    }
    p1 = p1->next;
    for (; p1;) {
        printf ("%s %s %c %d %g %s\n", p1->num, p1->name, p1->sex, p1->age, p1->score, p1->add);
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
        p1 = p1->next;
    };
}

