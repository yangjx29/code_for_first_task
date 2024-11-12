struct   Student {
    char num [20];
    char name [20];
    char sex;
    int age;
    char score [20];
    char add [20];
    struct   Student *next;
};
int n = (899 - 899);

struct   Student *create () {
    struct   Student *head;
    struct   Student *p1;
    struct   Student *p2;
    n = 0;
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
    p1 = p2 = (struct   Student *) malloc (sizeof (struct   Student));
    scanf ("%s %s %c %d %s %s", p1->num, p1->name, &p1->sex, &p1->age, p1->score, p1->add);
    head = NULL;
    for (; strcmp (p1->num, "end") != 0;) {
        n = n + 1;
        if (n == 1)
            head = p1;
        else
            p2->next = p1;
        p2 = p1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p1 = (struct   Student *) malloc (sizeof (struct   Student));
        scanf ("%s", p1->num);
        if (strcmp (p1->num, "end") != 0)
            scanf ("%s %c %d %s %s", p1->name, &p1->sex, &p1->age, p1->score, p1->add);
    }
    p2->next = NULL;
    return (head);
}

void  print (struct   Student *head) {
    struct   Student *p;
    p = head;
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
    if (p->next != NULL)
        print (p->next);
    printf ("%s %s %c %d %s %s\n", p->num, p->name, p->sex, p->age, p->score, p->add);
}

int main () {
    struct   Student *head;
    print (head);
    head = create ();
    return 0;
}

