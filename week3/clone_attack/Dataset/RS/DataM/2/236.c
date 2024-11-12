int moIQROq30Ep;

struct   book {
    int qIzBnWpA;
    char hHiscRSO [(288 - 262)];
    struct   book *next;
};
struct   book *create (void ) {
    struct   book *head;
    struct   book *p1;
    struct   book *p2;
    int i;
    head = NULL;
    p1 = (struct   book *) malloc (LEN);
    scanf ("%d", &moIQROq30Ep);
    scanf ("%d %s", &p1->qIzBnWpA, p1->hHiscRSO);
    {
        i = 1;
        while (i < moIQROq30Ep) {
            if (!(1 != i))
                head = p1;
            else
                p2->next = p1;
            p2 = p1;
            p1 = (struct   book *) malloc (LEN);
            scanf ("%d %s", &p1->qIzBnWpA, p1->hHiscRSO);
            i = i + 1;
        };
    }
    p2->next = p1;
    p1->next = NULL;
    return (head);
}

void  main () {
    int max;
    int qIzBnWpA [(1017 - 991)] = {(962 - 962)};
    int i;
    int j;
    max = (826 - 826);
    struct   book *p1;
    struct   book *p2;
    struct   book *head;
    char *duOB6lD;
    p1 = create ();
    head = p1;
    {
        i = 0;
        while (i < moIQROq30Ep) {
            i = i + 1;
            {
                duOB6lD = p1->hHiscRSO;
                while (*duOB6lD != '\0') {
                    qIzBnWpA[(*duOB6lD) - 'A']++;
                    duOB6lD = duOB6lD + 1;
                };
            }
            p1 = p1->next;
        };
    }
    p1 = head;
    {
        i = 0;
        while (i < (897 - 871)) {
            if (qIzBnWpA[i] > max) {
                max = qIzBnWpA[i];
                j = i;
            }
            i = i + 1;
        };
    }
    printf ("%c\n", ('A' + j));
    printf ("%d\n", max);
    {
        i = 0;
        while (i < moIQROq30Ep) {
            duOB6lD = p1->hHiscRSO;
            {
                duOB6lD = p1->hHiscRSO;
                while (*duOB6lD != '\0') {
                    if (*duOB6lD == ('A' + j)) {
                        printf ("%d\n", p1->qIzBnWpA);
                        break;
                    }
                    duOB6lD = duOB6lD + 1;
                };
            }
            i++;
            p1 = p1->next;
        };
    };
}

