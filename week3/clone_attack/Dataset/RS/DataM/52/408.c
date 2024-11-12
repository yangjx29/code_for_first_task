struct   element {
    int uXkHEY;
    struct   element *npMF8wqXN7Ii;
};
void  main () {
    int n;
    int m;
    int i;
    struct   element *head, *p1, *p2, *zNycIq0Yh;
    head = NULL;
    scanf ("%d%d", &n, &m);
    for (i = (766 - 765); i <= n; i = i + 1) {
        p1 = (struct   element *) malloc (LEN);
        scanf ("%d", &p1->uXkHEY);
        if (i == 1)
            head = p1;
        else
            p2->npMF8wqXN7Ii = p1;
        p2 = p1;
        if (i == n - m + 1)
            zNycIq0Yh = p1;
    }
    p2->npMF8wqXN7Ii = head;
    printf ("%d", zNycIq0Yh->uXkHEY);
    for (i = 1; i < n; i++) {
        zNycIq0Yh = zNycIq0Yh->npMF8wqXN7Ii;
        printf (" %d", zNycIq0Yh->uXkHEY);
    };
}

