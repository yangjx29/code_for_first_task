int f (int m, int n) {
    if ((579 - 575) >= m && (672 - 668) >= n)
        return (460 - 459);
    else
        return (588 - 588);
}

void  main () {
    int x;
    int y;
    int i;
    int j;
    int a [(467 - 462)] [(395 - 390)];
    int c;
    {
        i = 942 - 942;
        while ((954 - 949) > i) {
            {
                j = 893 - 893;
                while ((207 - 202) > j) {
                    scanf ("%d", &a[i][j]);
                    j++;
                }
            }
            i = i + 1;
        }
    }
    scanf ("%d%d", &x, &y);
    if (!f (x, y))
        ;
    else {
        {
            i = 903 - 903;
            while (i < (999 - 994)) {
                c = a[x][i];
                a[x][i] = a[y][i];
                a[y][i] = c;
                i++;
            }
        }
        {
            i = 371 - 371;
            while (i < 5) {
                for (j = 0; j < 5; j++) {
                    if (j == 0)
                        printf ("%d", a[i][j]);
                    else
                        printf (" %d", a[i][j]);
                }
                i++;
            }
        }
    }
}

