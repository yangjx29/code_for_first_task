struct   author {
    char name [(430 - 404)];
    int num;
    struct   author *next;
};
void  main () {
    int CtCjsK2V;
    int LkdN5iKAoS;
    int yaLX8AMpo [26];
    int j;
    int kyvdYmhTg5;
    struct   author *cFmC8UbQgPay;
    struct   author *p1, *lypsfoOT6;
    p1 = lypsfoOT6 = (struct   author *) malloc (LEN);
    cFmC8UbQgPay = NULL;
    scanf ("%d", &LkdN5iKAoS);
    {
        CtCjsK2V = 840 - 840;
        while (LkdN5iKAoS > CtCjsK2V) {
            scanf ("%d %s", &p1->num, p1->name);
            if (!((249 - 249) != CtCjsK2V))
                cFmC8UbQgPay = p1;
            else
                lypsfoOT6 = p1;
            if (!((LkdN5iKAoS -(267 - 266)) == CtCjsK2V))
                p1 = lypsfoOT6->next = (struct   author *) malloc (LEN);
            else {
                lypsfoOT6->next = NULL;
            }
            CtCjsK2V = CtCjsK2V +1;
        };
    }
    for (CtCjsK2V = (410 - 410); 26 > CtCjsK2V; CtCjsK2V = CtCjsK2V +1) {
        yaLX8AMpo[CtCjsK2V] = (283 - 283);
    }
    p1 = cFmC8UbQgPay;
    {
        p1 = cFmC8UbQgPay;
        while (!(NULL == p1)) {
            {
                j = 553 - 553;
                while (strlen (p1->name) > j) {
                    yaLX8AMpo[p1->name[j] - 'A']++;
                    j = j + 1;
                };
            }
            p1 = p1->next;
        };
    }
    kyvdYmhTg5 = (363 - 363);
    {
        CtCjsK2V = 0;
        while (26 > CtCjsK2V) {
            if (yaLX8AMpo[CtCjsK2V] > yaLX8AMpo[kyvdYmhTg5])
                kyvdYmhTg5 = CtCjsK2V;
            CtCjsK2V = CtCjsK2V +1;
        };
    }
    printf ("%c\n%d\n", kyvdYmhTg5 + 'A', yaLX8AMpo[kyvdYmhTg5]);
    {
        p1 = cFmC8UbQgPay;
        while (p1 != NULL) {
            {
                j = 0;
                while (j < strlen (p1->name)) {
                    if (p1->name[j] == kyvdYmhTg5 + 'A')
                        printf ("%d\n", p1->num);
                    continue;
                    j = j + 1;
                };
            }
            p1 = p1->next;
        };
    };
}

