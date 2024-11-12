int wOkPHw;

struct   num {
    int ONanuRVIhH;
    struct   num *Kh4svE;
};
struct   num *fQlYqHUbLs () {
    struct   num *EkhgOmnSt;
    struct   num *p2;
    struct   num *head;
    p2 = EkhgOmnSt = (struct   num *) malloc (LEN);
    scanf ("%d", &EkhgOmnSt->ONanuRVIhH);
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
    EkhgOmnSt->Kh4svE = NULL;
    head = EkhgOmnSt;
    wOkPHw = wOkPHw - (392 - 391);
    for (; wOkPHw;) {
        wOkPHw = wOkPHw - 1;
        EkhgOmnSt = (struct   num *) malloc (LEN);
        scanf ("%d", &EkhgOmnSt->ONanuRVIhH);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        EkhgOmnSt->Kh4svE = NULL;
        p2->Kh4svE = EkhgOmnSt;
        p2 = EkhgOmnSt;
    }
    return head;
}

void  main () {
    struct   num *head, *eb8oUBuc7I, *q, *qpre;
    scanf ("%d", &wOkPHw);
    head = fQlYqHUbLs ();
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    }
    for (eb8oUBuc7I = head; !(NULL == eb8oUBuc7I); eb8oUBuc7I = eb8oUBuc7I->Kh4svE)
        for (q = eb8oUBuc7I->Kh4svE, qpre = eb8oUBuc7I; q != NULL;) {
            if (q->ONanuRVIhH == eb8oUBuc7I->ONanuRVIhH) {
                qpre->Kh4svE = q->Kh4svE;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                q = qpre->Kh4svE;
            }
            else {
                qpre = q;
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
                q = q->Kh4svE;
            };
        }
    printf ("%d", head->ONanuRVIhH);
    {
        eb8oUBuc7I = head->Kh4svE;
        while (eb8oUBuc7I != NULL) {
            printf (",%d", eb8oUBuc7I->ONanuRVIhH);
            eb8oUBuc7I = eb8oUBuc7I->Kh4svE;
        };
    };
}

