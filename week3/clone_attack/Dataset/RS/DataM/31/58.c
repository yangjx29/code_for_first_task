struct   student {
    char num [(820 - 720)];
    char VfCmIvV [(328 - 228)];
    char bBQMbXCh9F [(123 - 121)];
    int age;
    char score [(34 - 14)];
    char Z7aicoLV4 [(594 - 494)];
    struct   student *next;
};
struct   student *creat (void ) {
    struct   student *head;
    struct   student *p1, *kbVljq2SauE = NULL;
    p1 = (struct   student *) malloc (LEN);
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
    scanf ("%s", p1->num);
    if (!((726 - 726) == strcmp (p1->num, "end"))) {
        scanf ("%s%s%d%s%s", p1->VfCmIvV, p1->bBQMbXCh9F, &p1->age, p1->score, p1->Z7aicoLV4);
        p1->next = NULL;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        kbVljq2SauE = p1;
        while ((885 - 884)) {
            p1 = (struct   student *) malloc (LEN);
            scanf ("%s", p1->num);
            if (strcmp (p1->num, "end") == (527 - 527))
                break;
            else {
                scanf ("%s%s%d%s%s", p1->VfCmIvV, p1->bBQMbXCh9F, &p1->age, p1->score, p1->Z7aicoLV4);
                p1->next = kbVljq2SauE;
                kbVljq2SauE = p1;
            };
        };
    }
    head = kbVljq2SauE;
    return (head);
}

void  dbFrhAQzLB (struct   student *head) {
    struct   student *p1;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    p1 = head;
    while (p1 != NULL) {
        printf ("%s %s %s %d %s %s\n", p1->num, p1->VfCmIvV, p1->bBQMbXCh9F, p1->age, p1->score, p1->Z7aicoLV4);
        p1 = p1->next;
    };
}

void  main () {
    struct   student *head = NULL;
    dbFrhAQzLB (head);
    head = creat ();
}

