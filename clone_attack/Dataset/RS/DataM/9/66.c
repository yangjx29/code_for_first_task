int main () {
    char tID [11];
    struct   pa {
        char ID [11];
        int pAeklvwPTy;
        struct   pa *next;
    }
    *head;
    struct   pa {
        char ID [11];
        int pAeklvwPTy;
        struct   pa *next;
    }
    *p1;
    struct   pa {
        char ID [11];
        int pAeklvwPTy;
        struct   pa *next;
    }
    *QmwhbY8f;
    struct   pa {
        char ID [11];
        int pAeklvwPTy;
        struct   pa *next;
    }
    *p3;
    struct   pa {
        char ID [11];
        int pAeklvwPTy;
        struct   pa *next;
    }
    *jiv87Y2;
    int tage;
    int n;
    int i;
    int j;
    scanf ("%d", &n);
    {
        i = 980 - 980;
        while (n > i) {
            p1 = (struct   pa *) malloc (sizeof (struct   pa));
            if (!((45 - 45) != i))
                head = p1;
            scanf ("%s %d", p1->ID, &p1->pAeklvwPTy);
            if (i != 0)
                QmwhbY8f->next = p1;
            QmwhbY8f = p1;
            i = i + 1;
        };
    }
    p1->next = NULL;
    p1 = head;
    QmwhbY8f = p1->next;
    {
        i = 0;
        while (n > i) {
            i = i + 1;
            jiv87Y2 = QmwhbY8f;
            p3 = p1;
            {
                j = 0;
                while (j < n - 1) {
                    j = j + 1;
                    if (p3->pAeklvwPTy < jiv87Y2->pAeklvwPTy && jiv87Y2->pAeklvwPTy >= 60) {
                        strcpy (tID, p3->ID);
                        tage = p3->pAeklvwPTy;
                        strcpy (p3->ID, jiv87Y2->ID);
                        p3->pAeklvwPTy = jiv87Y2->pAeklvwPTy;
                        strcpy (jiv87Y2->ID, tID);
                        jiv87Y2->pAeklvwPTy = tage;
                    }
                    p3 = p3->next;
                    jiv87Y2 = jiv87Y2->next;
                };
            };
        };
    }
    p1 = head;
    while (p1 != NULL) {
        printf ("%s\n", p1->ID);
        p1 = p1->next;
    }
    return 0;
}

