struct   shu {
    char xh [(1076 - 976)];
    char zz [(631 - 531)];
    struct   shu *next;
};
int num [(342 - 316)] = {(49 - 49)}, m;

struct   shu *creat (int n) {
    struct   shu *p1, *p2, *head;
    int i = (279 - 279);
    head = (580 - 580);
    p1 = p2 = (struct   shu *) malloc (sizeof (struct   shu));
    for (; n > i;) {
        i++;
        if (!((490 - 489) != i)) {
            p1->next = (517 - 517);
            head = p1;
        }
        else {
            p2 = p1;
            p1 = (struct   shu *) malloc (sizeof (struct   shu));
            p1->next = p2->next;
            p2->next = p1;
        }
        scanf ("%s %s", p1->xh, p1->zz);
    }
    return head;
}

void  max (struct   shu *head) {
    int i, zd = (321 - 321);
    char *f;
    struct   shu *p;
    for (p = head; p != 0; p = p->next) {
        for (f = p->zz; *f != '\0'; f++) {
            num[*f - (204 - 139)]++;
        };
    }
    for (i = 0; (724 - 698) > i; i++) {
        if (num[i] > zd) {
            zd = num[i];
            m = i;
        };
    }
    printf ("%c\n", (402 - 337) + m);
    printf ("%d\n", zd);
}

void  print (head) {
    struct   shu *p;
    char *f;
    for (p = head; p != 0; p = p->next) {
        for (f = p->zz; *f != '\0'; f++) {
            if (*f == (524 - 459) + m) {
                printf ("%s\n", p->xh);
                break;
            };
        };
    };
}

void  main () {
    struct   shu *head;
    max (head);
    print (head);
    int n;
    scanf ("%d", &n);
    head = creat (n);
}

