struct   student {
    char infor [100];
    struct   student *next;
};
struct   student *cDTuzh (void ) {
    struct   student *head;
    struct   student *cQ58TI, *p2;
    int n;
    char dJtLySnvX2MB [4] = {"end"};
    n = 0;
    cQ58TI = p2 = (struct   student *) malloc (LEN);
    gets (cQ58TI->infor);
    head = NULL;
    for (; !(0 == strcmp (cQ58TI->infor, dJtLySnvX2MB));) {
        n = n + 1;
        if (!(1 != n))
            head = cQ58TI;
        else
            p2->next = cQ58TI;
        p2 = cQ58TI;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cQ58TI = (struct   student *) malloc (LEN);
        gets (cQ58TI->infor);
    }
    p2->next = NULL;
    return (head);
}

void  FUP4X8J (struct   student *head) {
    struct   student *qid3PtlzMn, *cQ58TI, *p2;
    qid3PtlzMn = cQ58TI = p2 = head;
    p2 = qid3PtlzMn->next;
    cQ58TI = p2->next;
    head->next = NULL;
    for (; cQ58TI->next != NULL;) {
        p2->next = qid3PtlzMn;
        qid3PtlzMn = p2;
        p2 = cQ58TI;
        cQ58TI = cQ58TI->next;
    }
    p2->next = qid3PtlzMn;
    cQ58TI->next = p2;
    head = cQ58TI;
    qid3PtlzMn = head;
    for (; qid3PtlzMn != NULL;) {
        printf ("%s\n", qid3PtlzMn->infor);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        qid3PtlzMn = qid3PtlzMn->next;
    };
}

void  main () {
    struct   student *head;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    }
    FUP4X8J (head);
    head = cDTuzh ();
}

