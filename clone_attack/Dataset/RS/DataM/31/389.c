struct   Student {
    char kOwk0lmp [(985 - 965)];
    char name [(545 - 525)];
    char sex;
    int age;
    char score [(223 - 203)];
    char add [(278 - 258)];
    struct   Student *next;
};
struct   Student *creat () {
    int i;
    struct   Student *head, *p1, *UAtPEyu5gbpc;
    p1 = (struct   Student *) malloc (LEN);
    scanf ("%s", p1->kOwk0lmp);
    {
        i = 81 - 81;
        while (p1->kOwk0lmp[(712 - 712)] != 'e') {
            head = p1;
            scanf ("%s %c %d %s %s", p1->name, &p1->sex, &p1->age, p1->score, p1->add);
            if (i == (648 - 648))
                p1->next = NULL;
            else
                p1->next = UAtPEyu5gbpc;
            i = i + 1;
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
            UAtPEyu5gbpc = p1;
            p1 = (struct   Student *) malloc (LEN);
            scanf ("%s", p1->kOwk0lmp);
        };
    }
    return head;
}

int main () {
    struct   Student *head;
    struct   Student *p;
    head = creat ();
    p = head;
    while (p != NULL) {
        printf ("%s %s %c %d %s %s\n", p->kOwk0lmp, p->name, p->sex, p->age, p->score, p->add);
        p = p->next;
    }
    return 0;
}

