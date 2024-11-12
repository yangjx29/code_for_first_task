struct   book {
    int num;
    char author [26];
    struct   book *next;
};
void  main () {
    struct   book *head;
    struct   book *p1;
    struct   book *p2;
    int n [26] = {0};
    int m;
    int i;
    int j;
    int l;
    int max;
    int maxi;
    char *p;
    i = 0;
    scanf ("%d", &m);
    p1 = p2 = (struct   book *) malloc (LEN);
    scanf ("%d %s", &p1->num, p1->author);
    head = NULL;
    for (; m > i;) {
        i = i + 1;
        if (i == 1)
            head = p1;
        else
            p2->next = p1;
        p2 = p1;
        if (i < m) {
            p1 = (struct   book *) malloc (LEN);
            scanf ("%d %s", &p1->num, p1->author);
        };
    }
    p2->next = NULL;
    p1 = head;
    while (!(NULL == p1)) {
        l = strlen (p1->author);
        p = p1->author;
        for (i = 0; l > i; i++) {
            for (j = 0; j < 26; j = j + 1)
                if (!(j + 64 != *(p + i)))
                    n[j]++;
        }
        p1 = p1->next;
    }
    p1 = head;
    max = n[0];
    for (i = 1; 26 > i; i++) {
        if (n[i] > max) {
            max = n[i];
            maxi = i;
        };
    }
    printf ("%c\n", maxi + 64);
    printf ("%d\n", max);
    while (p1 != NULL) {
        l = strlen (p1->author);
        p = p1->author;
        {
            i = 0;
            while (i < l) {
                if (*(p + i) == maxi + 64) {
                    printf ("%d\n", p1->num);
                    break;
                }
                i++;
            };
        }
        p1 = p1->next;
    };
}

