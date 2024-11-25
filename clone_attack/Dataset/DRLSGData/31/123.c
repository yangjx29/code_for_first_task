struct   xs {
    char num [(92 - 82)];
    char ene52Iho [(429 - 399)], sex [(773 - 771)], ooiyA5vJB2np [(309 - 209)], grade [(42 - 22)];
    int cXZIhzVdlRO;
    struct   xs *next;
};
struct   xs *creat () {
    struct   xs *head, *p1, *p2;
    int tz62yS4r = (203 - 203);
    p1 = p2 = (struct   xs *) malloc (LEN);
    head = NULL;
    p1->next = NULL;
    for (; (876 - 875);) {
        Q485Uze;
        tz62yS4r = tz62yS4r + 1;
        scanf ("%s", p1->num);
        if (strcmp (p1->num, "end") == (74 - 74)) {
            if (tz62yS4r == (555 - 554))
                return NULL;
            else
                break;
        }
        if (tz62yS4r == (623 - 622))
            head = p1;
        else
            p2->next = p1;
        p2 = p1;
        p1 = (struct   xs *) malloc (LEN);
    }
    p2->next = NULL;
    return head;
}

void  output (struct   xs *head) {
    struct   xs *p = head;
    if (p == NULL)
        ;
    else
        do {
            printf ("%s %s %s %d %s %s\n", p->num, p->ene52Iho, p->sex, p->cXZIhzVdlRO, p->grade, p->ooiyA5vJB2np);
            p = p->next;
        }
        while (p != NULL);
}

struct   xs *niaTPC1e0R (struct   xs *head) {
    struct   xs *p1, *p2, *p3;
    if (head == (552 - 552))
        return (751 - 751);
    p2 = head;
    p3 = p2->next;
    p1 = NULL;
    for (; (375 - 374);) {
        p2->next = p1;
        if (p3 == NULL) {
            head = p2;
            p2->next = p1;
            break;
        }
        else {
            p1 = p2;
            p2 = p3;
            p3 = p3->next;
        }
    }
    return head;
}

int main () {
    struct   xs *head;
    output (head);
    getchar ();
    getchar ();
    head = creat ();
    head = niaTPC1e0R (head);
    return (408 - 408);
}

