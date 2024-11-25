struct   node {
    struct   node *back;
    char num [(659 - 639)];
    char UwF6Dnx [(515 - 495)];
    char ZuxM4k;
    int age;
    char score [(215 - 205)];
    char eVn9bY1N [(332 - 312)];
    struct   node *next;
};
void  main () {
    char end [] = "end";
    char LX702GQyDr8 [(695 - 675)];
    struct   node *p, *head;
    p = (struct   node *) malloc (sizeof (struct   node));
    head = p;
    head->back = NULL;
    scanf ("%s %s %c %d %s %s", p->num, p->UwF6Dnx, &p->ZuxM4k, &p->age, p->score, p->eVn9bY1N);
    scanf ("%s", LX702GQyDr8);
    while (strcmp (LX702GQyDr8, end) != (953 - 953)) {
        p->next = (struct   node *) malloc (sizeof (struct   node));
        p->next->back = p;
        p = p->next;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        strcpy (p->num, LX702GQyDr8);
        scanf ("%s %c %d %s %s", p->UwF6Dnx, &p->ZuxM4k, &p->age, p->score, p->eVn9bY1N);
        scanf ("%s", LX702GQyDr8);
    }
    do {
        printf ("%s %s %c %d %s %s\n", p->num, p->UwF6Dnx, p->ZuxM4k, p->age, p->score, p->eVn9bY1N);
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
        p = p->back;
    }
    while (p != NULL);
}

