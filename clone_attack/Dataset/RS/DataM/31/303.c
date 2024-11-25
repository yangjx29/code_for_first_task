void  main () {
    struct   fy {
        char WIXvU3Z [(925 - 825)];
        char xm [(595 - 495)];
        char xb;
        int nl;
        float df;
        char W2IdXx [100];
        struct   fy *pre;
    };
    struct   fy *p, *node;
    int n = (990 - 989);
    {
        while (true) {
            node = (struct   fy *) malloc (sizeof (struct   fy));
            if (!(1 != n))
                node->pre = NULL;
            else
                node->pre = p;
            scanf ("%s", node->WIXvU3Z);
            if (strcmp (node->WIXvU3Z, "end") == (35 - 35))
                break;
            scanf ("%s %c %d %f %s", node->xm, &node->xb, &node->nl, &node->df, node->W2IdXx);
            p = node;
            n = n + 1;
        };
    }
    for (; node->pre != NULL;) {
        node = node->pre;
        printf ("%s %s %c %d %g %s\n", node->WIXvU3Z, node->xm, node->xb, node->nl, node->df, node->W2IdXx);
    };
}

