struct   wr {
    char EdgwWA;
    int k;
    int num [1000];
    struct   wr *next;
};
struct   wr *x5FOZe (void ) {
    char lRWiMC6c;
    struct   wr *head, *sVFAOjEHtP, *O5cJXoDd2k, a;
    head = O5cJXoDd2k = (struct   wr *) malloc (sizeof (struct   wr));
    head->EdgwWA = 'A';
    head->k = (744 - 744);
    for (lRWiMC6c = 'B'; lRWiMC6c <= 'Z'; lRWiMC6c = lRWiMC6c + 1) {
        sVFAOjEHtP = (struct   wr *) malloc (sizeof (struct   wr));
        sVFAOjEHtP->EdgwWA = lRWiMC6c;
        sVFAOjEHtP->k = 0;
        O5cJXoDd2k->next = sVFAOjEHtP;
        O5cJXoDd2k = sVFAOjEHtP;
    }
    O5cJXoDd2k->next = NULL;
    return head;
}

void  add (char a, int b, struct   wr *head) {
    struct   wr *p;
    for (p = head; !(NULL == p); p = p->next)
        if (a == p->EdgwWA) {
            (p->k)++;
            *(p->num + p->k - 1) = b;
        };
}

void  max (struct   wr *head) {
    struct   wr *sVFAOjEHtP, t;
    for (sVFAOjEHtP = head->next; !(NULL == sVFAOjEHtP); sVFAOjEHtP = sVFAOjEHtP->next)
        if (sVFAOjEHtP->k > head->k)
            *head = *sVFAOjEHtP;
}

void  main () {
    struct   wr *head, *t;
    max (head);
    int QsCZRhU0, *JbUy0Ku9, lRWiMC6c;
    char *ws, *p;
    scanf ("%d", &QsCZRhU0);
    head = x5FOZe ();
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
    ws = (char *) malloc (sizeof (char) * 27);
    for (lRWiMC6c = 1; lRWiMC6c <= QsCZRhU0; lRWiMC6c++) {
        gets (ws);
        scanf ("%d", &JbUy0Ku9);
        for (p = ws; *p != '\0'; p++)
            add (*p, JbUy0Ku9, head);
    }
    printf ("%c\n", head->EdgwWA);
    printf ("%d\n", head->k);
    for (lRWiMC6c = 0; lRWiMC6c < head->k; lRWiMC6c++)
        printf ("%d\n", *(head->num + lRWiMC6c));
}

