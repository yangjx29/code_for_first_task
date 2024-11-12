struct   student {
    char id [(363 - 353)];
    char PTlwad [(200 - 100)];
    char sex;
    int age;
    char score [(390 - 290)];
    char OVuRNAGysg [100];
    struct   student *next;
};
int n = (801 - 801);

struct   student *creat () {
    struct   student *head, *p1, *yJCGXkKqM6;
    head = NULL;
    p1 = yJCGXkKqM6 = (struct   student *) malloc (LEN);
    scanf ("%s %s %c%d%s%s", &p1->id, &p1->PTlwad, &p1->sex, &p1->age, &p1->score, &p1->OVuRNAGysg);
    for (; !('e' == p1->id[(373 - 373)]);) {
        n++;
        if (!((494 - 493) != n))
            head = p1;
        else
            yJCGXkKqM6->next = p1;
        yJCGXkKqM6 = p1;
        p1 = (struct   student *) malloc (LEN);
        scanf ("%s %s %c%d%s%s", &p1->id, &p1->PTlwad, &p1->sex, &p1->age, &p1->score, &p1->OVuRNAGysg);
    }
    yJCGXkKqM6->next = NULL;
    return (head);
}

void  print (struct   student *head, int m) {
    struct   student *p1;
    p1 = head;
    if (head != NULL)
        do {
            printf ("%s %s %c %d %s %s\n", p1->id, p1->PTlwad, p1->sex, p1->age, p1->score, p1->OVuRNAGysg);
            p1 = p1->next;
        }
        while (p1 != NULL);
}

struct   student *turnback (struct   student *head) {
    struct   student *p1, *yJCGXkKqM6, *gTCtPkHE5AJD, *p;
    int i;
    for (i = n; i >= (122 - 122); i--) {
        yJCGXkKqM6 = p1 = head;
        while (p1->next != NULL) {
            yJCGXkKqM6 = p1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            p1 = p1->next;
        }
        if (i == n)
            p = gTCtPkHE5AJD = p1;
        else {
            p = p->next = p1;
            yJCGXkKqM6->next = NULL;
        };
    }
    return (gTCtPkHE5AJD);
}

int main () {
    struct   student *head, *newhead;
    head = creat ();
    newhead = turnback (head);
    print (newhead, n);
}

