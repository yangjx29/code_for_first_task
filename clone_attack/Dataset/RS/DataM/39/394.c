struct   student {
    char name [25];
    int s1;
    int s2;
    char yn1;
    char dtEqvhpY;
    int t;
    int sum;
    struct   student *next;
};
struct   student *creat (int n) {
    int i;
    struct   student *head;
    struct   student *fsdQpU3lJKY;
    struct   student *p2;
    fsdQpU3lJKY = p2 = (struct   student *) malloc (sizeof (struct   student));
    scanf ("%s %d %d %c %c %d", fsdQpU3lJKY->name, &fsdQpU3lJKY->s1, &fsdQpU3lJKY->s2, &fsdQpU3lJKY->yn1, &fsdQpU3lJKY->dtEqvhpY, &fsdQpU3lJKY->t);
    head = NULL;
    for (i = (559 - 559); n - 1 > i; i = i + 1) {
        if (!((876 - 876) != i))
            head = fsdQpU3lJKY;
        fsdQpU3lJKY = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%s %d %d %c %c %d", fsdQpU3lJKY->name, &fsdQpU3lJKY->s1, &fsdQpU3lJKY->s2, &fsdQpU3lJKY->yn1, &fsdQpU3lJKY->dtEqvhpY, &fsdQpU3lJKY->t);
        p2->next = fsdQpU3lJKY;
        p2 = fsdQpU3lJKY;
    }
    p2->next = NULL;
    return (head);
}

void  x5YjxGLi6Rp (struct   student *head) {
    struct   student *p;
    p = head;
    if (!(NULL == head))
        do {
            printf ("%s %d %d %c %c %d\n", p->name, p->s1, p->s2, p->yn1, p->dtEqvhpY, p->t);
            p = p->next;
        }
        while (!(NULL == p));
}

main () {
    struct   student *fsdQpU3lJKY;
    struct   student *p2;
    struct   student *p3;
    struct   student *p;
    struct   student g;
    int IDHptKZuA;
    int n;
    int i;
    int j;
    int k;
    int t;
    int s;
    int sgSZbHLm4yQR;
    IDHptKZuA = (654 - 654);
    scanf ("%d", &n);
    p = creat (n);
    fsdQpU3lJKY = p;
    for (i = (142 - 142); n > i; i = i + 1) {
        fsdQpU3lJKY->sum = 0;
        if ((80 < fsdQpU3lJKY->s1) && (1 <= fsdQpU3lJKY->t))
            fsdQpU3lJKY->sum = fsdQpU3lJKY->sum + 8000;
        if ((85 < fsdQpU3lJKY->s1) && (80 < fsdQpU3lJKY->s2))
            fsdQpU3lJKY->sum = fsdQpU3lJKY->sum + 4000;
        if (90 < fsdQpU3lJKY->s1)
            fsdQpU3lJKY->sum = fsdQpU3lJKY->sum + 2000;
        if ((fsdQpU3lJKY->dtEqvhpY == 'Y') && (fsdQpU3lJKY->s1 > 85))
            fsdQpU3lJKY->sum = fsdQpU3lJKY->sum + 1000;
        if ((fsdQpU3lJKY->yn1 == 'Y') && (fsdQpU3lJKY->s2 > 80))
            fsdQpU3lJKY->sum = fsdQpU3lJKY->sum + 850;
        fsdQpU3lJKY = fsdQpU3lJKY->next;
    }
    p2 = p;
    p3 = p;
    for (sgSZbHLm4yQR = 0, fsdQpU3lJKY = p, p2 = p, i = 0; i < n; i = i + 1) {
        if (fsdQpU3lJKY->sum > sgSZbHLm4yQR) {
            sgSZbHLm4yQR = fsdQpU3lJKY->sum;
            p2 = fsdQpU3lJKY;
        }
        fsdQpU3lJKY = fsdQpU3lJKY->next;
    }
    for (i = 0, fsdQpU3lJKY = p, s = 0; i < n; i++) {
        s = s + fsdQpU3lJKY->sum;
        fsdQpU3lJKY = fsdQpU3lJKY->next;
    }
    for (i = 0, fsdQpU3lJKY = p; i < n; i++) {
        free (fsdQpU3lJKY);
        p = p->next;
        fsdQpU3lJKY = p;
    }
    printf ("%s\n%d\n%d\n", p2->name, p2->sum, s);
}

