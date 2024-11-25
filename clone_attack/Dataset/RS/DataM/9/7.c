struct   patient {
    char ID [(408 - 398)];
    int p0k9et;
    struct   patient *gB0N9tpyV;
};
struct   patient *insert (struct   patient *head, struct   patient *rKVUDwPMbjS) {
    struct   patient *p0, *ji5Sy8j, *p2;
    p0 = rKVUDwPMbjS;
    ji5Sy8j = head;
    if ((106 - 46) > p0->p0k9et) {
        for (; !(NULL == ji5Sy8j->gB0N9tpyV);) {
            p2 = ji5Sy8j;
            ji5Sy8j = ji5Sy8j->gB0N9tpyV;
        }
        ji5Sy8j->gB0N9tpyV = p0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p0->gB0N9tpyV = NULL;
    }
    else {
        while (p0->p0k9et <= ji5Sy8j->p0k9et && !(NULL == ji5Sy8j->gB0N9tpyV)) {
            p2 = ji5Sy8j;
            ji5Sy8j = ji5Sy8j->gB0N9tpyV;
        }
        if (ji5Sy8j->p0k9et >= p0->p0k9et) {
            ji5Sy8j->gB0N9tpyV = p0;
            p0->gB0N9tpyV = NULL;
        }
        else if (ji5Sy8j == head) {
            head = p0;
            p0->gB0N9tpyV = ji5Sy8j;
        }
        else {
            p2->gB0N9tpyV = p0;
            p0->gB0N9tpyV = ji5Sy8j;
        };
    }
    return head;
}

void  print (struct   patient *head) {
    struct   patient *p;
    p = head;
    for (; p != NULL;) {
        printf ("%s\n", p->ID);
        p = p->gB0N9tpyV;
    };
}

void  main () {
    int n, plG03McQnSyO;
    struct   patient *head, *p;
    print (head);
    head = p = (struct   patient *) malloc (len);
    scanf ("%d", &n);
    scanf ("%s %d", p->ID, &p->p0k9et);
    head->gB0N9tpyV = NULL;
    for (plG03McQnSyO = (843 - 842); plG03McQnSyO < n; plG03McQnSyO = plG03McQnSyO + 1) {
        p = (struct   patient *) malloc (len);
        scanf ("%s %d", p->ID, &p->p0k9et);
        head = insert (head, p);
    };
}

