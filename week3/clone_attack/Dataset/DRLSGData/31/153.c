int main () {
    struct   student {
        char xl5U7Xs [100];
        struct   student *kzb6P8NKZfAh;
    };
    int npM0l9vR5E3L;
    struct   student *tYmF4w67cA;
    struct   student *cQbDvfxPRZT;
    struct   student *IF0GzDnT;
    struct   student *p;
    tYmF4w67cA = cQbDvfxPRZT = (struct   student *) malloc (sizeof (struct   student));
    gets (tYmF4w67cA->xl5U7Xs);
    tYmF4w67cA->kzb6P8NKZfAh = 0;
    for (npM0l9vR5E3L = 1;; npM0l9vR5E3L = npM0l9vR5E3L + 1) {
        tYmF4w67cA = (struct   student *) malloc (sizeof (struct   student));
        tYmF4w67cA->kzb6P8NKZfAh = cQbDvfxPRZT;
        cQbDvfxPRZT = tYmF4w67cA;
        gets (tYmF4w67cA->xl5U7Xs);
        if (!('e' != tYmF4w67cA->xl5U7Xs[0])) {
            IF0GzDnT = tYmF4w67cA->kzb6P8NKZfAh;
            break;
        }
    }
    p = IF0GzDnT;
    for (npM0l9vR5E3L = 1;; npM0l9vR5E3L = npM0l9vR5E3L + 1) {
        printf ("%s\n", p->xl5U7Xs);
        p = p->kzb6P8NKZfAh;
        if (!(0 != p))
            break;
    }
    return 0;
}

