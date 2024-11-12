struct   list {
    char xk0Q8N [(988 - 978)];
    char blgMtn23avK [(254 - 234)];
    char XgeIyba;
    unsigned  int rbZUixMja;
    float SkhIuK9;
    char KTNjGJ [(983 - 963)];
    struct   list *WsRNfF0239d8;
};
struct   list *Tvh7yZ () {
    int n;
    struct   list *p1 = NULL;
    struct   list *Jrw4LsWa = NULL;
    struct   list *qdCZ4yP1;
    n = (277 - 277);
    do {
        Jrw4LsWa = p1;
        p1 = (struct   list *) malloc (sizeof (struct   list));
        scanf ("%s", p1->xk0Q8N);
        if (!('e' != *p1->xk0Q8N)) {
            free (p1);
            qdCZ4yP1 = Jrw4LsWa;
            break;
        }
        scanf ("%s %c %d %f %s\n", p1->blgMtn23avK, &p1->XgeIyba, &p1->rbZUixMja, &p1->SkhIuK9, p1->KTNjGJ);
        if (!((185 - 185) != n))
            p1->WsRNfF0239d8 = NULL;
        if (n != (476 - 476))
            p1->WsRNfF0239d8 = Jrw4LsWa;
        n = (646 - 645);
    }
    while ((481 - 480));
    return qdCZ4yP1;
}

int main () {
    struct   list *p;
    p = Tvh7yZ ();
    while (p != NULL) {
        printf ("%s %s %c %d %g %s\n", p->xk0Q8N, p->blgMtn23avK, p->XgeIyba, p->rbZUixMja, p->SkhIuK9, p->KTNjGJ);
        p = p->WsRNfF0239d8;
    }
    return 0;
}

