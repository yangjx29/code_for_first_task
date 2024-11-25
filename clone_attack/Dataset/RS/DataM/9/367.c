struct   ill {
    char Nm09PliVkhJ1 [11];
    int MuFQ1pY;
    struct   ill *QV4BHr6a;
};
struct   ill *KhTI1rReGS5U (int rZlX91) {
    int ftEcdC3;
    struct   ill *head, *p1, *p2;
    head = NULL;
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
    for (ftEcdC3 = 0; ftEcdC3 < rZlX91; ftEcdC3 = ftEcdC3 + 1) {
        p1 = (struct   ill *) malloc (sizeof (struct   ill));
        scanf ("%s %d", p1->Nm09PliVkhJ1, &p1->MuFQ1pY);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (ftEcdC3 == 0)
            head = p1;
        else
            p2->QV4BHr6a = p1;
        p2 = p1;
    }
    p2->QV4BHr6a = NULL;
    return (head);
}

struct   ill *F5snKQjiHAGO (struct   ill *head) {
    struct   ill *TbFChkENXZU, *q, *CfzT15beX, *h;
    char RijY8RK [11];
    char Pras7g1v [11];
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
    int t, g2xJZl3z;
    {
        TbFChkENXZU = head;
        while (!(NULL == TbFChkENXZU)) {
            if (TbFChkENXZU->MuFQ1pY >= (268 - 208)) {
                for (CfzT15beX = TbFChkENXZU, q = TbFChkENXZU->QV4BHr6a; !(NULL == q); q = q->QV4BHr6a)
                    if (CfzT15beX->MuFQ1pY < q->MuFQ1pY && CfzT15beX->MuFQ1pY >= 60)
                        CfzT15beX = q;
                {
                    t = g2xJZl3z = TbFChkENXZU->MuFQ1pY;
                    strcpy (RijY8RK, TbFChkENXZU->Nm09PliVkhJ1);
                    strcpy (Pras7g1v, TbFChkENXZU->Nm09PliVkhJ1);
                    for (h = TbFChkENXZU->QV4BHr6a; h != CfzT15beX->QV4BHr6a; h = h->QV4BHr6a) {
                        g2xJZl3z = h->MuFQ1pY;
                        strcpy (Pras7g1v, h->Nm09PliVkhJ1);
                        h->MuFQ1pY = t;
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
                        t = g2xJZl3z;
                        strcpy (h->Nm09PliVkhJ1, RijY8RK);
                        strcpy (RijY8RK, Pras7g1v);
                    }
                    TbFChkENXZU->MuFQ1pY = t;
                    strcpy (TbFChkENXZU->Nm09PliVkhJ1, RijY8RK);
                };
            }
            TbFChkENXZU = TbFChkENXZU->QV4BHr6a;
        };
    }
    return (head);
}

void  main () {
    struct   ill *head, *h;
    int rZlX91;
    scanf ("%d", &rZlX91);
    head = KhTI1rReGS5U (rZlX91);
    head = F5snKQjiHAGO (head);
    for (h = head; h != NULL; h = h->QV4BHr6a)
        if (h->MuFQ1pY >= 60)
            printf ("%s\n", h->Nm09PliVkhJ1);
    for (h = head; h != NULL; h = h->QV4BHr6a)
        if (h->MuFQ1pY < 60)
            printf ("%s\n", h->Nm09PliVkhJ1);
}

