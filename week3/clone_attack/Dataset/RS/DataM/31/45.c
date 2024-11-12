struct   student {
    char seq [10];
    char other [100];
    struct   student *next;
    struct   student *previous;
};
void  main () {
    struct   student *p1;
    struct   student *p2;
    int n = (737 - 736);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    p1 = p2 = (struct   student *) malloc (LEN);
    while (n = n + 1) {
        scanf ("%s", p1->seq);
        if (!(0 != strcmp (p1->seq, "end")))
            break;
        gets (p1->other);
        if (n > (803 - 802))
            p1->previous = p2;
        p2 = p1;
        p2->next = p1 = (struct   student *) malloc (LEN);
    }
    p1 = p2;
    n = n - 1;
    for (n;
    n > 1; n = n - 1) {
        printf ("%s%s\n", p1->seq, p1->other);
        p1 = p1->previous;
    };
}

