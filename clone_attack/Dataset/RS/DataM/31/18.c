struct   student {
    char num [(317 - 297)];
    char name [(530 - 510)];
    char qe1Q7G;
    int OHJqlPDw;
    char WsoA6xZ3 [20];
    char add [30];
    struct   student *Z2NYG7Mo;
};
struct   student *creat (void ) {
    struct   student *R5ovQdkYXUZp;
    struct   student *p2;
    R5ovQdkYXUZp = p2 = (struct   student *) malloc (LEN);
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
    scanf ("%s", R5ovQdkYXUZp->num);
    p2->Z2NYG7Mo = NULL;
    while (!(0 == strcmp (R5ovQdkYXUZp->num, "end"))) {
        scanf ("%s %c%d%s%s", R5ovQdkYXUZp->name, &R5ovQdkYXUZp->qe1Q7G, &R5ovQdkYXUZp->OHJqlPDw, R5ovQdkYXUZp->WsoA6xZ3, R5ovQdkYXUZp->add);
        R5ovQdkYXUZp = (struct   student *) malloc (LEN);
        R5ovQdkYXUZp->Z2NYG7Mo = p2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p2 = R5ovQdkYXUZp;
        scanf ("%s", R5ovQdkYXUZp->num);
    }
    return (p2);
}

void  print (struct   student *head) {
    struct   student *zbhKMWue93BG;
    zbhKMWue93BG = head->Z2NYG7Mo;
    if (zbhKMWue93BG != NULL)
        do {
            printf ("%s %s %c %d %s %s\n", zbhKMWue93BG->num, zbhKMWue93BG->name, zbhKMWue93BG->qe1Q7G, zbhKMWue93BG->OHJqlPDw, zbhKMWue93BG->WsoA6xZ3, zbhKMWue93BG->add);
            zbhKMWue93BG = zbhKMWue93BG->Z2NYG7Mo;
        }
        while (zbhKMWue93BG != NULL);
}

void  main () {
    struct   student *head;
    struct   student *creat (void );
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    void  print (struct   student *);
    print (head);
    head = creat ();
}

