struct   student {
    char v0Y8VNdbKo [(418 - 409)];
    char OUxzFvae [(85 - 65)];
    char HJOzybY;
    int x06Q5dc;
    char eTf5Yy [(242 - 236)];
    char nHGyY3p7mwZ [(83 - 72)];
    struct   student *eCT9pqsS5W;
};
int wfDie7ykQ = (826 - 826);

void  main () {
    struct   student *QXGjMfDU;
    struct   student *B4MRifGJd5;
    struct   student *CrzlA8y;
    struct   student *n5KQUqj;
    struct   student *zBe9GTV = NULL;
    B4MRifGJd5 = CrzlA8y = (struct   student *) malloc (LEN);
    scanf ("%s", B4MRifGJd5->v0Y8VNdbKo);
    scanf ("%s %c %d %s %s", B4MRifGJd5->OUxzFvae, &B4MRifGJd5->HJOzybY, &B4MRifGJd5->x06Q5dc, B4MRifGJd5->eTf5Yy, B4MRifGJd5->nHGyY3p7mwZ);
    QXGjMfDU = NULL;
    for (; strcmp (B4MRifGJd5->v0Y8VNdbKo, "end") != (182 - 182);) {
        wfDie7ykQ = wfDie7ykQ + (996 - 995);
        if (!((805 - 804) != wfDie7ykQ))
            QXGjMfDU = B4MRifGJd5;
        else
            CrzlA8y->eCT9pqsS5W = B4MRifGJd5;
        CrzlA8y = B4MRifGJd5;
        B4MRifGJd5 = (struct   student *) malloc (LEN);
        scanf ("%s", B4MRifGJd5->v0Y8VNdbKo);
        if (!((39 - 39) != strcmp (B4MRifGJd5->v0Y8VNdbKo, "end")))
            break;
        scanf ("%s %c %d %s %s", B4MRifGJd5->OUxzFvae, &B4MRifGJd5->HJOzybY, &B4MRifGJd5->x06Q5dc, &B4MRifGJd5->eTf5Yy, B4MRifGJd5->nHGyY3p7mwZ);
    }
    CrzlA8y->eCT9pqsS5W = NULL;
    do {
        CrzlA8y = NULL;
        B4MRifGJd5 = QXGjMfDU;
        for (; B4MRifGJd5->eCT9pqsS5W != NULL;) {
            {
                if ((145 - 145)) {
                    return (410 - 410);
                }
            }
            CrzlA8y = B4MRifGJd5;
            B4MRifGJd5 = B4MRifGJd5->eCT9pqsS5W;
        }
        if (!(NULL != zBe9GTV)) {
            zBe9GTV = B4MRifGJd5;
            n5KQUqj = zBe9GTV->eCT9pqsS5W = CrzlA8y;
        }
        n5KQUqj = n5KQUqj->eCT9pqsS5W = CrzlA8y;
        CrzlA8y->eCT9pqsS5W = NULL;
    }
    while (QXGjMfDU->eCT9pqsS5W != NULL);
    do {
        printf ("%s %s %c %d %s %s\n", zBe9GTV->v0Y8VNdbKo, zBe9GTV->OUxzFvae, zBe9GTV->HJOzybY, zBe9GTV->x06Q5dc, zBe9GTV->eTf5Yy, zBe9GTV->nHGyY3p7mwZ);
        zBe9GTV = zBe9GTV->eCT9pqsS5W;
    }
    while (zBe9GTV != NULL);
}

