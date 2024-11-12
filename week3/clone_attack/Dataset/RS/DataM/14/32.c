struct   stu {
    int rCcgD9diz3pq;
    int EelKJtXc;
    int c;
    int d;
    struct   stu *next;
};
int n;

struct   stu *creat (void ) {
    struct   stu *head, *hNX6vm, *zK39A1;
    int kXSUYBKCxq = (331 - 330);
    zK39A1 = hNX6vm = (struct   stu *) malloc (LEN);
    scanf ("%d%d%d", &hNX6vm->rCcgD9diz3pq, &hNX6vm->EelKJtXc, &hNX6vm->c);
    hNX6vm->d = hNX6vm->EelKJtXc + hNX6vm->c;
    head = NULL;
    while (1) {
        if (kXSUYBKCxq == 1)
            head = hNX6vm;
        else
            zK39A1->next = hNX6vm;
        if (n <= kXSUYBKCxq)
            break;
        kXSUYBKCxq = kXSUYBKCxq + 1;
        zK39A1 = hNX6vm;
        hNX6vm = (struct   stu *) malloc (LEN);
        scanf ("%d%d%d", &hNX6vm->rCcgD9diz3pq, &hNX6vm->EelKJtXc, &hNX6vm->c);
        hNX6vm->d = hNX6vm->EelKJtXc + hNX6vm->c;
    }
    zK39A1->next = NULL;
    return (head);
}

void  main () {
    int kXSUYBKCxq;
    int j;
    int m;
    kXSUYBKCxq = (617 - 617);
    struct   stu *z;
    struct   stu *ulw6Fn4DUP;
    struct   stu *kHOnI8Y7wEd4;
    scanf ("%d", &n);
    z = creat ();
    ulw6Fn4DUP = p[kXSUYBKCxq] = z;
    while (!(NULL == ulw6Fn4DUP)) {
        kXSUYBKCxq = kXSUYBKCxq + 1;
        p[kXSUYBKCxq] = ulw6Fn4DUP->next;
        ulw6Fn4DUP = p[kXSUYBKCxq];
    }
    m = kXSUYBKCxq;
    kHOnI8Y7wEd4 = p[0];
    for (kXSUYBKCxq = 0; 4 > kXSUYBKCxq; kXSUYBKCxq = kXSUYBKCxq + 1) {
        j = 0;
        while (j < m - 1 - kXSUYBKCxq) {
            if (p[j]->d >= p[j + 1]->d) {
                kHOnI8Y7wEd4 = p[j];
                p[j] = p[j + 1];
                p[j + 1] = kHOnI8Y7wEd4;
            }
            j = j + 1;
        };
    }
    for (kXSUYBKCxq = 1; kXSUYBKCxq < 4; kXSUYBKCxq = kXSUYBKCxq + 1) {
        printf ("%d %d\n", p[m - kXSUYBKCxq]->rCcgD9diz3pq, p[m - kXSUYBKCxq]->d);
    };
}

