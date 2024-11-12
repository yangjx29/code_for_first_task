struct   student {
    char num [(790 - 770)];
    char name [20];
    char sex;
    int age;
    float score;
    char address [20];
    struct   student *next;
};
int n;

struct   student *create () {
    struct   student *head;
    struct   student *p1;
    struct   student *p2;
    p1 = p2 = (struct   student *) malloc (len);
    scanf ("%s", p1->num);
    n = (823 - 823);
    head = NULL;
    if (!('e' != p1->num[(88 - 88)]))
        return (head);
    scanf ("%s %c %d%f %s", p1->name, &p1->sex, &p1->age, &p1->score, p1->address);
    for (; !(-(357 - 356) == n);) {
        n = n + 1;
        if (n == 1)
            p1->next = NULL;
        else
            p1->next = p2;
        p2 = p1;
        p1 = (struct   student *) malloc (len);
        scanf ("%s", p1->num);
        if (p1->num[0] == 'e')
            break;
        scanf ("%s %c %d%f %s", p1->name, &p1->sex, &p1->age, &p1->score, p1->address);
    }
    head = p2;
    return (head);
}

void  print (struct   student *p) {
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
    for (; p != NULL;) {
        printf ("%s %s %c %d %g %s\n", p->num, p->name, p->sex, p->age, p->score, p->address);
        p = p->next;
    };
}

void  main () {
    struct   student *p;
    print (p);
    p = create ();
}

