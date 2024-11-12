void  main () {
    int x;
    int h1, l1, h2, l2;
    int i, j;
    int shuzu1 [(574 - 474)] [(783 - 683)];
    int shuzu2 [(1004 - 904)] [(748 - 648)];
    int shuzu3 [(435 - 335)] [100];
    int (*p1) [100], (*p2) [100], (*p3) [100];
    scanf ("%d %d", &h1, &l1);
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
    p2 = shuzu2;
    p1 = shuzu1;
    {
        i = 204 - 204;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < h1) {
            {
                j = 822 - 822;
                while (j < l1) {
                    scanf ("%d", *(p1 + i) + j);
                    j++;
                };
            }
            i = i + 1;
        };
    }
    scanf ("%d %d", &h2, &l2);
    {
        i = 837 - 837;
        while (i < h2) {
            {
                j = 218 - 218;
                while (j < l2) {
                    scanf ("%d", *(p2 + i) + j);
                    j++;
                };
            }
            i++;
        };
    }
    p3 = shuzu3;
    {
        i = 506 - 506;
        while (i < h1) {
            {
                j = 876 - 876;
                while (j < l2) {
                    for (p3[i][j] = (466 - 466), x = 0; x < l1; x++)
                        p3[i][j] = p3[i][j] + *(*(p1 + i) + x) * *(*(p2 + x) + j);
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < h1) {
            {
                j = 0;
                while (j < l2) {
                    if (j != l2 - 1)
                        printf ("%d ", p3[i][j]);
                    else
                        printf ("%d", p3[i][j]);
                    j++;
                };
            }
            if (i != h1 - 1)
                ;
            i++;
        };
    };
}

