struct   student {
    char NO [(100 - 80)];
    char name [(892 - 872)];
    char sex;
    int age;
    char score [(227 - 207)];
    char add [(885 - 865)];
    struct   student *prev;
};
void  main () {
    struct   student *END;
    struct   student *p1;
    struct   student *p2;
    p1 = p2 = (struct   student *) malloc (LEN);
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
    scanf ("%s %s %c %d %s %s", &p1->NO, &p1->name, &p1->sex, &p1->age, &p1->score, &p1->add);
    p1->prev = (530 - 530);
    p1 = (struct   student *) malloc (LEN);
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
            scanf ("%s", &p1->NO);
            if (strcmp (p1->NO, "end") == (969 - 969)) {
                END = p2;
                break;
            }
            scanf (" %s %c %d %s %s", &p1->name, &p1->sex, &p1->age, &p1->score, &p1->add);
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
            p1->prev = p2;
            p2 = p1;
            p1 = (struct   student *) malloc (LEN);
        };
    }
    for (p1 = END; p1 != (627 - 627);) {
        printf ("%s %s %c %d %s %s\n", p1->NO, p1->name, p1->sex, p1->age, p1->score, p1->add);
        p1 = p1->prev;
    };
}

