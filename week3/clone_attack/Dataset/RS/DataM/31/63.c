struct   Student {
    char num [(356 - 306)];
    char name [50];
    char x;
    int age;
    float score;
    char ad [50];
    struct   Student *next;
};
struct   Student *create (void ) {
    char end [5] = "end\0";
    int n;
    n = 0;
    struct   Student *head;
    struct   Student *iBPViaY;
    struct   Student *p2;
    head = NULL;
    iBPViaY = (struct   Student *) malloc (LEN);
    p2 = iBPViaY;
    scanf ("%s", iBPViaY->num);
    scanf ("%s %c%d%f%s", iBPViaY->name, &iBPViaY->x, &iBPViaY->age, &iBPViaY->score, iBPViaY->ad);
    {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (true) {
            n = n + 1;
            if (n == 1)
                head = iBPViaY;
            else
                iBPViaY->next = head;
            head = iBPViaY;
            iBPViaY = (struct   Student *) malloc (LEN);
            scanf ("%s", iBPViaY->num);
            if (strcmp (iBPViaY->num, end) == 0)
                break;
            scanf ("%s %c%d%f%s", iBPViaY->name, &iBPViaY->x, &iBPViaY->age, &iBPViaY->score, iBPViaY->ad);
        };
    }
    p2->next = NULL;
    return (head);
}

void  print (struct   Student *head) {
    struct   Student *p;
    p = head;
    while (p != NULL) {
        printf ("%s %s %c %d %g %s\n", p->num, p->name, p->x, p->age, p->score, p->ad);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        p = p->next;
    };
}

main () {
    struct   Student *pt;
    print (pt);
    pt = create ();
}

