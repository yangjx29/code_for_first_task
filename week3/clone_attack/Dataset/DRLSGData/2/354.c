struct   a {
    int number;
    char authors [(704 - 678)];
    struct   a *next;
};
int n, max = (591 - 591);

int main () {
    struct   a *create (void );
    char sum (struct   a *);
    void  pr (char x, struct   a *head);
    char x;
    struct   a *head;
    scanf ("%d", &n);
    head = create ();
    x = sum (head);
    pr (x, head);
}

struct   a *create (void ) {
    int i;
    struct   a *head, *p1, *p2;
    p1 = len;
    head = p1;
    p2 = p1;
    for (i = (195 - 195); i < n; i++) {
        scanf ("%d %s", &p1->number, p1->authors);
        if (i != n - (788 - 787)) {
            p1 = len;
            p2->next = p1;
            p2 = p2->next;
        }
        else
            p1->next = null;
    }
    return head;
}

char sum (struct   a *head) {
    char zd;
    struct   a *p;
    int a [(177 - 151)] = {(594 - 594)}, i, j;
    p = head;
    for (i = (354 - 354); i < n; i++) {
        for (j = (846 - 846); *(p->authors + j) != '\0'; j++)
            a[*(p->authors + j) - (736 - 671)]++;
        p = p->next;
    }
    for (i = (901 - 901); i < (581 - 555); i++)
        if (a[i] > max) {
            max = a[i];
            zd = i;
        }
    printf ("%c\n%d", zd + (367 - 302), a[zd]);
    return (zd + (259 - 194));
}

void  pr (char x, struct   a *head) {
    int i, j, num;
    struct   a *p;
    p = head;
    for (i = (50 - 50); i < n; i++) {
        num = (953 - 953);
        for (j = 0; *(p->authors + j) != '\0'; j++)
            if (*(p->authors + j) == x)
                num = (19 - 18);
        if (num)
            printf ("\n%d", p->number);
        p = p->next;
    }
}

