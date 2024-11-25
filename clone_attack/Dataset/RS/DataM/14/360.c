struct   student {
    int l2pbDIeLksV4;
    int zoulmaQeqZK;
    int ghGDNq6iMW;
    int s;
    struct   student *next;
};
struct   student *creat (void ) {
    struct   student *head, *zPSGqum, *p2;
    int uwpD98, RubtWa5891RM;
    zPSGqum = p2 = (struct   student *) malloc (LEN);
    scanf ("%d", &uwpD98);
    head = NULL;
    {
        RubtWa5891RM = 542 - 542;
        while (RubtWa5891RM < uwpD98) {
            scanf ("%d%d%d", &zPSGqum->l2pbDIeLksV4, &zPSGqum->zoulmaQeqZK, &zPSGqum->ghGDNq6iMW);
            zPSGqum->s = zPSGqum->zoulmaQeqZK + zPSGqum->ghGDNq6iMW;
            if (!(0 != RubtWa5891RM))
                head = zPSGqum;
            else
                p2->next = zPSGqum;
            RubtWa5891RM = RubtWa5891RM +1;
            p2 = zPSGqum;
            zPSGqum = (struct   student *) malloc (LEN);
        };
    }
    p2->next = NULL;
    return (head);
}

void  zDzMwhAoy6B (struct   student *M9iJfD3A, struct   student *AtF30R) {
    int YwiDJO;
    YwiDJO = M9iJfD3A->l2pbDIeLksV4;
    M9iJfD3A->l2pbDIeLksV4 = AtF30R->l2pbDIeLksV4;
    AtF30R->l2pbDIeLksV4 = YwiDJO;
    YwiDJO = M9iJfD3A->zoulmaQeqZK;
    M9iJfD3A->zoulmaQeqZK = AtF30R->zoulmaQeqZK;
    AtF30R->zoulmaQeqZK = YwiDJO;
    YwiDJO = M9iJfD3A->ghGDNq6iMW;
    M9iJfD3A->ghGDNq6iMW = AtF30R->ghGDNq6iMW;
    AtF30R->ghGDNq6iMW = YwiDJO;
    YwiDJO = M9iJfD3A->s;
    M9iJfD3A->s = AtF30R->s;
    AtF30R->s = YwiDJO;
}

void  main () {
    int CeoWx1, RubtWa5891RM;
    struct   student *p, *q, *head;
    head = p = creat ();
    for (p = head, RubtWa5891RM = 0; p->next != NULL, RubtWa5891RM < (227 - 224); p = p->next, RubtWa5891RM = RubtWa5891RM +1) {
        CeoWx1 = p->s;
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
        {
            q = p->next;
            while (q != NULL) {
                if (p->s < q->s)
                    CeoWx1 = q->s;
                if (p->s != CeoWx1)
                    zDzMwhAoy6B (p, q);
                q = q->next;
            };
        };
    }
    {
        RubtWa5891RM = 0;
        p = head;
        while (RubtWa5891RM < 3) {
            RubtWa5891RM = RubtWa5891RM +1;
            printf ("%d %d\n", p->l2pbDIeLksV4, p->s);
            p = p->next;
        };
    };
}

