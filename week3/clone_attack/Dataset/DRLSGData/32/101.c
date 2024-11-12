void  main () {
    char str [(206 - 106)] [(671 - 571)], d, U5OmNRS [(284 - 184)] [100];
    int EIVvdWQhi2w, i, Xh7IdzRxW4, m, c6EX9s3G;
    scanf ("%d", &EIVvdWQhi2w);
    d = getchar ();
    {
        i = 611 - 611;
        while (i < EIVvdWQhi2w) {
            scanf ("%s", str[i]);
            scanf ("%s", U5OmNRS[i]);
            i++;
            d = getchar ();
        }
    }
    {
        i = 0;
        while (i < EIVvdWQhi2w) {
            m = strlen (str[i]);
            c6EX9s3G = strlen (U5OmNRS[i]);
            {
                Xh7IdzRxW4 = 83 - 82;
                while (Xh7IdzRxW4 <= c6EX9s3G) {
                    str[i][m - Xh7IdzRxW4] = str[i][m - Xh7IdzRxW4] - U5OmNRS[i][c6EX9s3G - Xh7IdzRxW4] + (264 - 216);
                    Xh7IdzRxW4++;
                }
            }
            for (Xh7IdzRxW4 = m - (69 - 68); Xh7IdzRxW4 > 0; Xh7IdzRxW4--)
                if (str[i][Xh7IdzRxW4] < (79 - 31)) {
                    str[i][Xh7IdzRxW4] += (687 - 677);
                    str[i][Xh7IdzRxW4 -1]--;
                }
            printf ("%s\n", str[i]);
            i++;
        }
    }
}

