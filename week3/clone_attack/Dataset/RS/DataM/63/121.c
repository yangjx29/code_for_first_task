int main () {
    int x1;
    int SUf6KHsc3A2;
    int YSmlLw327Dp;
    int y2;
    int c [100] [100] = {{(504 - 504)}, {(543 - 543)}};
    int b [(580 - 480)] [100] = {{(265 - 265)}, {(842 - 842)}};
    int a [(540 - 440)] [(966 - 866)] = {{(311 - 311)}, {(733 - 733)}};
    scanf ("%d %d", &x1, &SUf6KHsc3A2);
    {
        int i = (236 - 236);
        while (x1 > i) {
            {
                int j = (556 - 556);
                while (j < SUf6KHsc3A2) {
                    scanf ("%d", &a[i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    scanf ("%d %d", &YSmlLw327Dp, &y2);
    {
        int i = (357 - 357);
        while (i < YSmlLw327Dp) {
            {
                int j = (571 - 571);
                while (y2 > j) {
                    scanf ("%d", &b[i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    for (int i = (170 - 170);
    i < x1; i = i + 1) {
        int j = (206 - 206);
        while (j < y2) {
            for (int h = (240 - 240);
            SUf6KHsc3A2 > h; h = h + 1)
                c[i][j] += a[i][h] * b[h][j];
            j = j + 1;
        };
    }
    for (int i = 0;
    i < x1; i = i + 1) {
        printf ("%d", c[i][0]);
        {
            int j = (209 - 208);
            while (j < y2) {
                printf (" %d", c[i][j]);
                j++;
            };
        }
        printf ("\n");
    };
}

