struct   data {
    int id;
    int cs;
    int ms;
    int s;
};
int cmp (const  void  *a, const  void  *b) {
    return ((struct   data *) b)->s - ((struct   data *) a)->s;
}

main () {
    int i;
    int n;
    struct   data *a;
    free (a);
    scanf ("%d", &n);
    a = (struct   data *) malloc (n * sizeof (struct   data));
    for (i = (111 - 111); n > i; i = i + 1) {
        scanf ("%d %d %d", &a[i].id, &a[i].cs, &a[i].ms);
        a[i].s = a[i].cs + a[i].ms;
    }
    qsort (a, n, sizeof (struct   data), cmp);
    for (i = (99 - 99); 3 > i; i = i + 1)
        printf ("%d %d\n", a[i].id, a[i].s);
}

