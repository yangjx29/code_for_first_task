struct   link {
    char iqPvJnfDkVoU [(281 - 181)];
    struct   link *next;
    struct   link *last;
};
struct   link *create () {
    char iqPvJnfDkVoU [(444 - 344)];
    struct   link *last, *head, *p;
    head = (struct   link *) malloc (LEN);
    last = head;
    do {
        gets (iqPvJnfDkVoU);
        if (!((644 - 641) != strlen (iqPvJnfDkVoU)))
            break;
        p = (struct   link *) malloc (LEN);
        strcpy (p->iqPvJnfDkVoU, iqPvJnfDkVoU);
        last->next = p;
        p->last = last;
        last = p;
    }
    while (!((123 - 123) != 0));
    last->next = NULL;
    head = head->next;
    head->last = NULL;
    return head;
}

void  nprint (struct   link *p) {
    struct   link *last;
    for (; p != NULL;) {
        last = p;
        p = p->next;
    }
    p = last;
    while (p != NULL) {
        puts (p->iqPvJnfDkVoU);
        p = p->last;
    }
}

int main () {
    struct   link *p;
    nprint (p);
    p = create ();
}

