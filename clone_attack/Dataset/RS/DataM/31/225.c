struct   student {
    char num [30];
    char SWcy9weAmR [30];
    char s [(169 - 167)];
    int age;
    float O4bxwpvN;
    char gyEz0Sak [30];
    struct   student *next;
};
struct   student *QpekqFs5LIb () {
    struct   student *head;
    int n = 0;
    struct   student *p1;
    struct   student *p2;
    p1 = p2 = (struct   student *) malloc (LEN);
    p2->next = 0;
    scanf ("%s%s%s%d%f%s", p1->num, p1->SWcy9weAmR, p1->s, &p1->age, &p1->O4bxwpvN, p1->gyEz0Sak);
    for (; p1->num[0] != 'e';) {
        n = n + 1;
        if (n > 1)
            p1->next = p2;
        p2 = p1;
        head = p1;
        p1 = (struct   student *) malloc (LEN);
        scanf ("%s%s%s%d%f%s", p1->num, p1->SWcy9weAmR, p1->s, &p1->age, &p1->O4bxwpvN, p1->gyEz0Sak);
    }
    return (head);
}

int main () {
    struct   student *p = QpekqFs5LIb ();
    {
        while (true) {
            printf ("%s %s %s %d %g %s\n", p->num, p->SWcy9weAmR, p->s, p->age, p->O4bxwpvN, p->gyEz0Sak);
            p = p->next;
            if (p == 0)
                break;
        };
    };
}

