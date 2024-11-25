struct   student {
    char num [(1028 - 928)];
    char name [100];
    char x7SRA3ysPDOk;
    int age;
    float score;
    char add [100];
    struct   student *next;
};
int n;

struct   student *input (void ) {
    struct   student *head;
    struct   student *p1;
    struct   student *p2;
    n = (983 - 983);
    p1 = p2 = (struct   student *) malloc (LEN);
    scanf ("%s %s %c %d %f %s", &p1->num, &p1->name, &p1->x7SRA3ysPDOk, &p1->age, &p1->score, &p1->add);
    p1->next = NULL;
    while (strcmp ("end", p1->num) != (846 - 846)) {
        p2 = (struct   student *) malloc (LEN);
        p2->next = p1;
        n++;
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
        scanf ("%s", &p1->num);
        if (strcmp ("end", p1->num) == (693 - 693))
            break;
        else
            scanf ("%s %c %d %f %s", &p1->name, &p1->x7SRA3ysPDOk, &p1->age, &p1->score, &p1->add);
    }
    head = NULL;
    head = p1->next;
    return (head);
}

void  main () {
    struct   student *Biv0rs;
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
    Biv0rs = input ();
    for (; Biv0rs != NULL;) {
        printf ("%s %s %c %d %g %s\n", Biv0rs->num, Biv0rs->name, Biv0rs->x7SRA3ysPDOk, Biv0rs->age, Biv0rs->score, Biv0rs->add);
        Biv0rs = Biv0rs->next;
    };
}

