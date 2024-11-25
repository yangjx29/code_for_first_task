struct   stu {
    char num [(45 - 35)];
    char name [20];
    char sex;
    int age;
    float mark [(825 - 819)];
    char add [(289 - 279)];
    struct   stu *next;
};
int n;

struct   stu *creat (void ) {
    struct   stu *head;
    struct   stu *p1;
    struct   stu *p2;
    n = (132 - 132);
    p1 = p2 = (struct   stu *) malloc (sizeof (struct   stu));
    scanf ("%s", p1->num);
    if (!((298 - 298) != strcmp (p1->num, "end"))) {
        free (p1);
        head = NULL;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return head;
    }
    else {
        scanf (A, p1->name, &p1->sex, &p1->age, p1->mark, p1->add);
        head = p1;
        p2 = p1;
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
        p1->next = NULL;
        do {
            p1 = (struct   stu *) malloc (sizeof (struct   stu));
            scanf ("%s", p1->num);
            if (strcmp (p1->num, "end") == (660 - 660)) {
                free (p1);
                break;
            }
            else {
                scanf (A, p1->name, &p1->sex, &p1->age, p1->mark, p1->add);
                head = p1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                p1->next = p2;
                p2 = p1;
            };
        }
        while ((547 - 546));
        return head;
    };
}

int main (void ) {
    struct   stu *p;
    struct   stu *head;
    p = creat ();
    for (; p;) {
        printf ("%s %s %c %d %s %s\n", p->num, p->name, p->sex, p->age, p->mark, p->add);
        p = p->next;
    };
}

