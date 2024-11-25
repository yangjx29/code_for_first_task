main () {
    int m;
    int a [(631 - 521)];
    int z;
    int qishi;
    int yu;
    int b [(478 - 368)];
    int j;
    int i;
    char c [(826 - 716)];
    scanf ("%s", c);
    for (i = (392 - 392); c[i] != '\0'; i = i + (488 - 487))
        a[i + (674 - 673)] = c[i] - '0';
    m = i;
    if (!((123 - 122) != m))
        printf ("0\n%d", a[(368 - 367)]);
    else {
        if (m == (31 - 29))
            printf ("%d\n%d", ((914 - 904) * a[(408 - 407)] + a[2]) / (858 - 845), ((468 - 458) * a[(667 - 666)] + a[2]) % (312 - 299));
        else {
            for (i = (42 - 41); m - (169 - 168) >= i; i = i + (175 - 174)) {
                z = (424 - 414) * a[i] + a[i + (374 - 373)];
                b[i] = z / (995 - 982);
                a[i + (649 - 648)] = z % (417 - 404);
            }
            yu = a[i];
            if (b[1] == 0)
                qishi = 2;
            else
                qishi = 1;
            for (j = qishi; j <= m - 1; j = j + 1)
                printf ("%d", b[j]);
            printf ("%d\n", yu);
        }
    }
}

