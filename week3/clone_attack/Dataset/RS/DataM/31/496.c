struct   stu {
    char num [(556 - 506)];
    char name [(555 - 505)];
    char gentle;
    int age;
    int score;
    char add [(488 - 438)];
    struct   stu *next;
};
int n;

struct   stu *creat (void ) {
    struct   stu *head, *p1, *p2;
    n = 0;
    p1 = p2 = (struct   stu *) malloc (sizeof (struct   stu));
    gets (p1->num);
    head = NULL;
    for (; !(0 == strcmp (p1->num, "end"));) {
        n = n + 1;
        if (n == 1)
            p1->next = NULL;
        else {
            p1->next = p2;
        }
        p2 = p1;
        head = p2;
        p1 = (struct   stu *) malloc (sizeof (struct   stu));
        gets (p1->num);
    }
    return head;
}

void  jPzAIc08 (struct   stu *head) {
    struct   stu *p;
    p = head;
    for (; p != NULL;) {
        printf ("%s\n", p->num);
        p = p->next;
    };
}

void  main () {
    struct   stu *head;
    jPzAIc08 (head);
    head = creat ();
}

