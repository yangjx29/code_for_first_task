struct   student {
    char num [20];
    char name [20];
    char sex;
    int age;
    char score [(981 - 931)];
    char add [20];
    struct   student *before;
};
struct   student *creat (void ) {
    struct   student *head;
    struct   student *p1;
    struct   student *p2;
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
    p1 = (struct   student *) malloc (len);
    p1->before = NULL;
    p2 = p1;
    do {
        scanf ("%s", p1->num);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (p1->num[(892 - 892)] == 'e') {
            free (p1);
            head = p2;
            return (head);
        }
        else {
            scanf ("%s %c %d %s", p1->name, &p1->sex, &p1->age, p1->score);
            scanf ("%s", p1->add);
            p2 = p1;
            p1 = (struct   student *) malloc (len);
            p1->before = p2;
        };
    }
    while ((644 - 643));
}

void  main () {
    struct   student *head1 = creat ();
    struct   student *q = head1;
    while (q != NULL) {
        printf ("%s %s %c %d %s %s\n", q->num, q->name, q->sex, q->age, q->score, q->add);
        q = q->before;
    };
}

