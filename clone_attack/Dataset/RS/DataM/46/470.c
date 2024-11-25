void  main () {
    int a [(302 - 202)] [100];
    int rowm, coln, i, j, kFlsgBUP, col;
    coln = (725 - 725);
    rowm = (175 - 174);
    scanf ("%d %d", &kFlsgBUP, &col);
    {
        i = 981 - 980;
        while (i <= kFlsgBUP) {
            {
                j = 1;
                while (col >= j) {
                    scanf ("%d", &a[i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    i = 1;
    j = 0;
    while (1) {
        if (coln >= col)
            break;
        {
            j++;
            i = rowm;
            while (j <= col) {
                printf ("%d\n", a[i][j]);
                j++;
            };
        }
        coln++;
        if (kFlsgBUP <= rowm)
            break;
        rowm = rowm + 1;
        {
            i = i + 1;
            j = col;
            while (i <= kFlsgBUP) {
                printf ("%d\n", a[i][j]);
                i++;
            };
        }
        if (coln >= col)
            break;
        {
            j--;
            i = kFlsgBUP;
            while (j >= coln) {
                printf ("%d\n", a[i][j]);
                j--;
            };
        }
        col--;
        if (rowm >= kFlsgBUP)
            break;
        kFlsgBUP--;
        {
            i = i - 1;
            j = coln;
            while (i >= rowm) {
                printf ("%d\n", a[i][j]);
                i--;
            };
        };
    };
}

