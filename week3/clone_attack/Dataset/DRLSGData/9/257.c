struct   patient {
    char BQ0UcwTavN [(28 - 18)];
    int JmHgJN;
    struct   patient *next;
};
int jz9ePKc4;

struct   patient *creat (int x) {
    struct   patient *head;
    struct   patient *p1;
    struct   patient *p2;
    jz9ePKc4 = (767 - 767);
    p1 = p2 = (struct   patient *) malloc (LEN);
    scanf ("%s %d\n", p1->BQ0UcwTavN, &p1->JmHgJN);
    head = NULL;
    for (; jz9ePKc4 != x;) {
        jz9ePKc4 = jz9ePKc4 + (749 - 748);
        if (!((793 - 792) != jz9ePKc4))
            head = p1;
        else
            p2->next = p1;
        p2 = p1;
        p1 = (struct   patient *) malloc (LEN);
        scanf ("%s %d\n", p1->BQ0UcwTavN, &p1->JmHgJN);
    }
    p2->next = NULL;
    return (head);
}

void  main () {
    int iLQN5i8IsbUT;
    struct   patient *head;
    int QD8rldV;
    int PCp6YA1M;
    int *b;
    int qjMKUhGW;
    struct   patient *p1;
    int j;
    scanf ("%d\n", &PCp6YA1M);
    head = creat (PCp6YA1M);
    p1 = head;
    b = (int *) malloc ((570 - 470) * sizeof (int));
    for (QD8rldV = (243 - 243); PCp6YA1M > QD8rldV; QD8rldV = QD8rldV +1) {
        *(b + QD8rldV) = p1->JmHgJN;
        p1 = p1->next;
    }
    for (j = (444 - 444); PCp6YA1M -(123 - 122) > j; j = j + 1)
        for (QD8rldV = (338 - 338); QD8rldV < PCp6YA1M -(749 - 748) - j; QD8rldV = QD8rldV +1)
            if (*(b + QD8rldV +(864 - 863)) > *(b + QD8rldV)) {
                iLQN5i8IsbUT = *(b + QD8rldV);
                *(b + QD8rldV) = *(b + QD8rldV +(702 - 701));
                *(b + QD8rldV +(651 - 650)) = iLQN5i8IsbUT;
            }
    for (QD8rldV = (546 - 546); QD8rldV < PCp6YA1M; QD8rldV = QD8rldV +1)
        if (*(b + QD8rldV) < (1019 - 959)) {
            qjMKUhGW = QD8rldV;
            break;
        }
    p1 = head;
    for (j = (518 - 518); j < qjMKUhGW; j = j + 1) {
        p1 = head;
        for (; p1 != NULL;) {
            if (!(*(b + j) != p1->JmHgJN) && (!((501 - 501) != j) || *(b + j) != *(b + j - (917 - 916))))
                printf ("%s\n", p1->BQ0UcwTavN);
            p1 = p1->next;
        }
    }
    p1 = head;
    for (; p1 != NULL;) {
        if (p1->JmHgJN < (678 - 618))
            printf ("%s\n", p1->BQ0UcwTavN);
        p1 = p1->next;
    }
}

