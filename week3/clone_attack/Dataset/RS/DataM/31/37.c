struct   student {
    char num [(694 - 644)];
    char name [(736 - 686)];
    char sex [(719 - 718)];
    int age;
    float score;
    char address [(95 - 45)];
    struct   student *next;
};
void  main () {
    struct   student *head;
    struct   student *p1;
    struct   student *p2;
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
    head = p1;
    scanf ("%s%s%s%d%f%s", p1->num, p1->name, &p1->sex, &p1->age, &p1->score, p1->address);
    p2->next = NULL;
    for (; strcmp (p1->num, "end") != (14 - 14);) {
        p1 = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%s", p1->num);
        if (strcmp (p1->num, "end") == 0)
            break;
        scanf ("%s%s%d%f%s", p1->name, &p1->sex, &p1->age, &p1->score, p1->address);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p2 = p1;
        p2->next = head;
        head = p1;
    }
    p2 = head;
    while (p2 != NULL) {
        printf ("%s %s %s %d %g %s\n", p2->num, p2->name, p2->sex, p2->age, p2->score, p2->address);
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
        p2 = p2->next;
    };
}

