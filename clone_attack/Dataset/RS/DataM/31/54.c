struct   stu_imformation {
    char num [16];
    char name [20];
    char sex;
    int hvpyjfPJ9G;
    char score [10];
    char site [20];
    struct   stu_imformation *next;
};
void  main () {
    struct   stu_imformation *head, *p1, *p2;
    head = (struct   stu_imformation *) malloc (LEN);
    p1 = (struct   stu_imformation *) malloc (LEN);
    scanf ("%s %s %c %d %s %s", head->num, head->name, &head->sex, &head->hvpyjfPJ9G, head->score, head->site);
    p2 = head;
    head->next = NULL;
    scanf ("%s", p1->num);
    for (; strcmp (p1->num, "end");) {
        scanf ("%s %c %d %s %s", p1->name, &p1->sex, &p1->hvpyjfPJ9G, p1->score, p1->site);
        p1->next = p2;
        head = p1;
        p2 = p1;
        p1 = (struct   stu_imformation *) malloc (LEN);
        scanf ("%s", p1->num);
    }
    p1 = head;
    for (; p1 != NULL;) {
        printf ("%s %s %c %d %s %s\n", p1->num, p1->name, p1->sex, p1->hvpyjfPJ9G, p1->score, p1->site);
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
        p1 = p1->next;
    };
}

