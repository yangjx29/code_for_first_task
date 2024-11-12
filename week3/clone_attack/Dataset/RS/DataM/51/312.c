void  main () {
    int t4AGt2hCQ0 = 0;
    char Xk6fbBpT4 [501];
    gets (Xk6fbBpT4);
    int MNFsOZ5;
    char DbhBrnlZo [500] [(458 - 452)];
    int og5DZvbfNtiW, xGSVIW2 = strlen (Xk6fbBpT4), nbwX417dI, a [501];
    scanf ("%d\n", &MNFsOZ5);
    for (og5DZvbfNtiW = (571 - 571); og5DZvbfNtiW <= xGSVIW2 - MNFsOZ5; og5DZvbfNtiW = og5DZvbfNtiW + 1) {
        {
            nbwX417dI = 815 - 815;
            while (nbwX417dI < MNFsOZ5) {
                DbhBrnlZo[og5DZvbfNtiW][nbwX417dI] = Xk6fbBpT4[og5DZvbfNtiW + nbwX417dI];
                nbwX417dI = nbwX417dI + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        DbhBrnlZo[og5DZvbfNtiW][nbwX417dI] = 0;
    }
    {
        og5DZvbfNtiW = 0;
        while (og5DZvbfNtiW <= xGSVIW2 - MNFsOZ5) {
            a[og5DZvbfNtiW] = 1;
            og5DZvbfNtiW++;
        };
    }
    for (og5DZvbfNtiW = 0; og5DZvbfNtiW <= xGSVIW2 - MNFsOZ5; og5DZvbfNtiW++)
        for (nbwX417dI = og5DZvbfNtiW + 1; xGSVIW2 - MNFsOZ5 >= nbwX417dI; nbwX417dI++) {
            if (strcmp (DbhBrnlZo[og5DZvbfNtiW], DbhBrnlZo[nbwX417dI]) == 0)
                a[og5DZvbfNtiW]++;
        }
    for (og5DZvbfNtiW = 0; og5DZvbfNtiW <= xGSVIW2 - MNFsOZ5; og5DZvbfNtiW++)
        if (a[og5DZvbfNtiW] > t4AGt2hCQ0)
            t4AGt2hCQ0 = a[og5DZvbfNtiW];
    if (t4AGt2hCQ0 <= 1)
        printf ("NO");
    else {
        printf ("%d\n", t4AGt2hCQ0);
        for (og5DZvbfNtiW = 0; og5DZvbfNtiW < xGSVIW2 - MNFsOZ5; og5DZvbfNtiW++)
            if (a[og5DZvbfNtiW] == t4AGt2hCQ0)
                puts (DbhBrnlZo[og5DZvbfNtiW]);
    };
}

