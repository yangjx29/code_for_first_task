main () {
    int total;
    int a [(1290 - 990)];
    int GAhQDkZMYJy4;
    int max1;
    int F4VqlYQM3;
    int pXQlALE;
    total = (458 - 457);
    scanf ("%d", &a[(860 - 859)]);
    while (getchar () != '\n') {
        total = total + 1;
        scanf ("%d", &a[total]);
    }
    if (total == (835 - 834)) {
        goto end;
    }
    pXQlALE = 1;
    max1 = a[1];
    {
        GAhQDkZMYJy4 = 1;
        while (GAhQDkZMYJy4 <= total) {
            if (a[GAhQDkZMYJy4] > max1)
                max1 = a[GAhQDkZMYJy4];
            GAhQDkZMYJy4 = GAhQDkZMYJy4 +1;
        };
    }
    {
        GAhQDkZMYJy4 = 1;
        while (GAhQDkZMYJy4 <= total) {
            if (a[GAhQDkZMYJy4] < max1) {
                F4VqlYQM3 = a[GAhQDkZMYJy4];
                pXQlALE = 0;
            }
            GAhQDkZMYJy4 = GAhQDkZMYJy4 +1;
        };
    }
    if (pXQlALE == 1) {
        goto end;
    }
    {
        GAhQDkZMYJy4 = 1;
        while (GAhQDkZMYJy4 <= total) {
            if (a[GAhQDkZMYJy4] < max1 && a[GAhQDkZMYJy4] > F4VqlYQM3)
                F4VqlYQM3 = a[GAhQDkZMYJy4];
            GAhQDkZMYJy4++;
        };
    }
    printf ("%d\n", F4VqlYQM3);
end :
    ;
}

