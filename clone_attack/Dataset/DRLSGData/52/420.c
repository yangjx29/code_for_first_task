main () {
    int a [10000];
    int *OtO3LSg8;
    int vt4N8RcYjd;
    int Vx2Od7;
    int d0hFafqkg;
    int A15UX7a4ulq;
    scanf ("%d" "%d", &vt4N8RcYjd, &Vx2Od7);
    for (d0hFafqkg = 0; d0hFafqkg <= vt4N8RcYjd - 1; d0hFafqkg++) {
        scanf ("%d", &a[d0hFafqkg]);
    }
    for (d0hFafqkg = vt4N8RcYjd - Vx2Od7; d0hFafqkg <= vt4N8RcYjd - 1; d0hFafqkg++) {
        printf ("%d ", *(OtO3LSg8 +d0hFafqkg));
    }
    for (d0hFafqkg = 0; d0hFafqkg <= vt4N8RcYjd - Vx2Od7 -1; d0hFafqkg++) {
        printf ("%d", *(OtO3LSg8 +d0hFafqkg));
        if (d0hFafqkg != vt4N8RcYjd - Vx2Od7 -1)
            ;
    }
    OtO3LSg8 = &a[0];
}

