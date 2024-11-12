struct   book {
    int num;
    char writer [27];
    struct   book *next;
};
int n;
int time [(162 - 136)] = {(511 - 511)}, max, k;

struct   book *create (int m) {
    struct   book *head;
    struct   book *p1;
    struct   book *p2;
    head = NULL;
    n = (826 - 826);
    p1 = p2 = (struct   book *) malloc (LEN);
    for (; n < m;) {
        scanf ("%d %s", &p1->num, p1->writer);
        n = n + 1;
        if (!(1 != n))
            head = p1;
        else
            p2->next = p1;
        p2 = p1;
        p1 = (struct   book *) malloc (LEN);
    }
    p2->next = NULL;
    return (head);
}

void  search (struct   book *head) {
    int i;
    struct   book *p;
    p = head;
    if (!(NULL == head)) {
        do {
            {
                i = 705 - 705;
                while (!('\0' == (p->writer)[i])) {
                    time[(p->writer)[i] - 'A']++;
                    i++;
                };
            }
            p = p->next;
        }
        while (p != NULL);
    };
}

void  pDsIfL9g6C (struct   book *head) {
    int i;
    struct   book *p;
    p = head;
    if (head != NULL) {
        do {
            free (head);
            {
                i = 276 - 276;
                while ((p->writer)[i] != '\0') {
                    if ((p->writer)[i] == 'A' + k)
                        printf ("%d\n", p->num);
                    i++;
                };
            }
            head = p;
            p = p->next;
        }
        while (p != NULL);
    };
}

void  main () {
    int m;
    int i;
    struct   book *head;
    search (head);
    pDsIfL9g6C (head);
    scanf ("%d", &m);
    head = create (m);
    max = time[0];
    k = 0;
    for (i = 1; i < 26; i++) {
        if (time[i] > max) {
            max = time[i];
            k = i;
        };
    }
    printf ("%c\n%d\n", 'A' + k, max);
}

