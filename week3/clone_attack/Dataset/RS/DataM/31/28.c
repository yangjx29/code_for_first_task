struct   student {
    char BzOIHE6W [100];
    struct   student *iwjAnI7ysVF;
};
void  DsJwBqxvt (struct   student *p) {
    printf ("%s\n", p->BzOIHE6W);
    if (!(NULL == p->iwjAnI7ysVF))
        DsJwBqxvt (p->iwjAnI7ysVF);
}

main () {
    struct   student stu, *head, *tail, *O9qn15cSXh3, *zUB12cVJmS;
    DsJwBqxvt (head);
    tail = (struct   student *) malloc (LEN);
    tail->iwjAnI7ysVF = NULL;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    gets (tail->BzOIHE6W);
    O9qn15cSXh3 = tail;
    while (strcmp (O9qn15cSXh3->BzOIHE6W, "end") != 0) {
        zUB12cVJmS = (struct   student *) malloc (LEN);
        zUB12cVJmS->iwjAnI7ysVF = O9qn15cSXh3;
        gets (zUB12cVJmS->BzOIHE6W);
        O9qn15cSXh3 = zUB12cVJmS;
    }
    head = O9qn15cSXh3->iwjAnI7ysVF;
}

