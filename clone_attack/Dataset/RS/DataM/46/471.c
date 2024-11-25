void  main () {
    int m2hlZTvY63, jGy6fvST, i, yrzS5ao;
    int s_row;
    int NPnlmp;
    int e_row;
    int e_col;
    s_row = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    NPnlmp = 0;
    e_row = m2hlZTvY63 - 1;
    e_col = jGy6fvST - 1;
    int a [100] [100];
    scanf ("%d %d", &m2hlZTvY63, &jGy6fvST);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m2hlZTvY63 > i) {
            for (yrzS5ao = 0; jGy6fvST > yrzS5ao; yrzS5ao = yrzS5ao + 1)
                scanf ("%d", &a[i][yrzS5ao]);
            i = i + 1;
        };
    }
    while (1) {
        if (e_row < s_row)
            break;
        for (i = NPnlmp; e_col >= i; i = i + 1)
            printf ("%d\n", a[s_row][i]);
        if (e_col < NPnlmp)
            break;
        s_row = s_row + 1;
        {
            i = s_row;
            while (e_row >= i) {
                printf ("%d\n", a[i][e_col]);
                i++;
            };
        }
        e_col = e_col - 1;
        if (s_row > e_row)
            break;
        {
            i = e_col;
            while (i >= NPnlmp) {
                printf ("%d\n", a[e_row][i]);
                i = i - 1;
            };
        }
        e_row = e_row - 1;
        if (NPnlmp > e_col)
            break;
        {
            i = e_row;
            while (i >= s_row) {
                printf ("%d\n", a[i][NPnlmp]);
                i--;
            };
        }
        NPnlmp++;
    };
}

