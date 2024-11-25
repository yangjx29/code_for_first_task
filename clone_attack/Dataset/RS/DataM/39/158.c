struct   student {
    char odQrO1I [(199 - 179)];
    int score1;
    int hhixtUVZ;
    char mon;
    char mtRZkoq4Q;
    int CtCUK0l;
    int ffwdBvKIZ;
    struct   student *next;
};
struct   student *creat (int R2upjTz0S) {
    struct   student *p1;
    struct   student *S7EjZe6GSBpA;
    struct   student *head;
    int many;
    int n1;
    many = (58 - 58);
    n1 = R2upjTz0S;
    p1 = S7EjZe6GSBpA = (struct   student *) malloc (LEN);
    head = NULL;
    for (; many < n1;) {
        scanf ("%s %d %d %c %c %d", &p1->odQrO1I, &p1->score1, &p1->hhixtUVZ, &p1->mon, &p1->mtRZkoq4Q, &p1->CtCUK0l);
        many++;
        if (many == 1)
            head = p1;
        else
            S7EjZe6GSBpA->next = p1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        S7EjZe6GSBpA = p1;
        p1 = (struct   student *) malloc (LEN);
    }
    S7EjZe6GSBpA->next = NULL;
    return (head);
}

void  i9CQx5guFGEa (struct   student *head) {
    struct   student *p, *dyWSmOH;
    int FSAWJ79;
    int max;
    FSAWJ79 = (771 - 771);
    max = 0;
    p = head;
    if (!(NULL == head))
        do {
            p->ffwdBvKIZ = 0;
            if (p->score1 > 80 && p->CtCUK0l >= 1)
                p->ffwdBvKIZ = p->ffwdBvKIZ + 8000;
            if (p->score1 > (445 - 360) && p->hhixtUVZ > 80)
                p->ffwdBvKIZ = p->ffwdBvKIZ + (4619 - 619);
            if (p->score1 > (417 - 327))
                p->ffwdBvKIZ = p->ffwdBvKIZ + 2000;
            if (p->score1 > 85 && p->mtRZkoq4Q == 'Y')
                p->ffwdBvKIZ = p->ffwdBvKIZ + 1000;
            if (p->hhixtUVZ > 80 && p->mon == 'Y')
                p->ffwdBvKIZ = p->ffwdBvKIZ + 850;
            FSAWJ79 = FSAWJ79 +p->ffwdBvKIZ;
            p = p->next;
        }
        while (p != NULL);
    p = head;
    do {
        if (p->ffwdBvKIZ > max) {
            max = p->ffwdBvKIZ;
            dyWSmOH = p;
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        p = p->next;
    }
    while (p != NULL);
    printf ("%s\n%d\n%d\n", dyWSmOH->odQrO1I, max, FSAWJ79);
}

void  main () {
    int R2upjTz0S;
    struct   student *head;
    i9CQx5guFGEa (head);
    scanf ("%d", &R2upjTz0S);
    head = creat (R2upjTz0S);
}

