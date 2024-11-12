struct   stu {
    char num [(758 - 738)];
    char name [(693 - 673)];
    char sex;
    int age;
    char score [20];
    char add [20];
    struct   stu *next;
};
int main () {
    struct   stu *p1, *p2, *head;
    p1 = (struct   stu *) malloc (sizeof (struct   stu));
    p1->next = NULL;
    p2 = p1;
    p1 = (struct   stu *) malloc (sizeof (struct   stu));
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
    for (; (876 - 875);) {
        scanf ("%s", p1->num);
        if (!('e' != p1->num[(156 - 156)])) {
            head = p2;
            p1->next = p2;
            break;
        }
        scanf ("%s %c %d %s %s", p1->name, &(p1->sex), &(p1->age), p1->score, p1->add);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p1->next = p2;
        p2 = p1;
        p1 = (struct   stu *) malloc (sizeof (struct   stu));
    }
    p1 = head;
    while (p1->next != NULL) {
        printf ("%s %s %c %d %s %s\n", p1->num, p1->name, p1->sex, p1->age, p1->score, p1->add);
        p1 = p1->next;
    }
    return 0;
}

