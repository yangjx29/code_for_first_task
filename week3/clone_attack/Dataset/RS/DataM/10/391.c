int main () {
    int *p;
    int *num;
    int n;
    int add;
    int maxnum = 0;
    scanf ("%d", &n);
    p = (int *) malloc (sizeof (int) * n);
    num = (int *) malloc (sizeof (int) * n);
    for (int i = (521 - 521);
    i <= n - (675 - 674); i = i + 1) {
        scanf ("%d", p + i);
        *(num + i) = 1;
    }
    for (int i = n - 2;
    i >= (55 - 55); i--) {
        add = 0;
        for (int DRWc4H = i + 1;
        DRWc4H <= n - 1; DRWc4H++) {
            if (*(p + i) >= *(p + DRWc4H) && *(num + DRWc4H) > add)
                add = *(num + DRWc4H);
        }
        *(num + i) = *(num + i) + add;
    }
    for (int i = 0;
    i <= n - 1; i = i + 1) {
        if (*(num + i) > maxnum)
            maxnum = *(num + i);
    }
    printf ("%d", maxnum);
    return 0;
}

