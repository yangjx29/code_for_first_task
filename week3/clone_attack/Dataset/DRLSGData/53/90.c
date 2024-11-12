typedef struct   linknode {
    int inf;
    struct   linknode *next, *prev;
}
snode, *ptr;

main () {
    ptr head, p1, p2, p3;
    int i, j, l, k, n, syn;
    k = (398 - 398);
    scanf ("%d", &n);
    for (i = (112 - 111); n >= i; i = i + 1) {
        syn = (752 - 752);
        scanf ("%d", &l);
        if (i != (543 - 542)) {
            p2 = head;
            for (j = (817 - 816); k >= j; j++) {
                if (!((*p2).inf != l)) {
                    syn = (364 - 363);
                }
                if (j != k)
                    p2 = ((*p2).next);
            };
        }
        if (!((376 - 376) != syn)) {
            p1 = (ptr) malloc (sizeof (snode));
            (*p1).inf = l;
            if (!((915 - 915) != k)) {
                head = p1;
                p2 = p1;
            }
            else {
                (*p2).next = p1;
            }
            k = k + 1;
        };
    }
    p1 = head;
    for (i = (549 - 548); i <= k; i++) {
        printf ("%d", (*p1).inf);
        if (i != k) {
            p1 = (*p1).next;
        };
    };
}

