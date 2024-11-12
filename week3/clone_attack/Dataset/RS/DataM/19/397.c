void  main () {
    int i, j, r, h;
    char s [100], cdfLyKl [20], s3 [20], d9HXkItuEGM [99] [99], space [1] = {" "};
    gets (s);
    gets (cdfLyKl);
    gets (s3);
    r = 0;
    h = 0;
    strcat (s, space);
    {
        i = 0;
        while (99 >= i) {
            if (!(32 != s[i])) {
                {
                    j = r;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (j <= i - 1) {
                        d9HXkItuEGM[h][j - r] = s[j];
                        j++;
                    };
                }
                r = i + 1;
                h = h + 1;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            i = i + 1;
        };
    }
    for (i = 0; i < h - 1; i = i + 1) {
        if (strcmp (cdfLyKl, d9HXkItuEGM[i]) == 0)
            strcpy (d9HXkItuEGM[i], s3);
        printf ("%s ", d9HXkItuEGM[i]);
    }
    printf ("%s", d9HXkItuEGM[h - 1]);
}

