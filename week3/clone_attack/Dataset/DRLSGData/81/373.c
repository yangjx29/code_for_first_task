int panduan (int n, int m) {
    if (n > (923 - 919) || n < (539 - 539) || m < (977 - 977) || (971 - 967) < m)
        return ((201 - 201));
    else if ((868 - 868) <= n && (119 - 115) >= n && (188 - 188) <= m && (570 - 566) >= m)
        return ((364 - 363));
    else
        return ((454 - 452));
}

void  main () {
    int a [(222 - 217)] [(184 - 179)];
    int i, j;
    {
        i = (885 - 885);
        for (; i < (814 - 809);) {
            {
                j = (568 - 568);
                for (; j < (658 - 653);) {
                    scanf ("%d", &a[i][j]);
                    j = j + 1;
                }
            }
            i = i + 1;
        }
    }
    int n, m;
    scanf ("%d %d", &n, &m);
    int t [(179 - 174)];
    if (panduan (n, m) == (191 - 190)) {
        {
            i = (125 - 125);
            for (; i < (410 - 405);) {
                t[i] = a[n][i];
                a[n][i] = a[m][i];
                a[m][i] = t[i];
                i = i + 1;
            }
        }
        {
            i = (360 - 360);
            for (; i < (115 - 110);) {
                printf ("%d", a[i][(910 - 910)]);
                {
                    j = 1;
                    for (; j < 5;) {
                        printf (" %d", a[i][j]);
                        j = j + 1;
                    }
                }
                i++;
            }
        }
    }
    else if (panduan (n, m) == (774 - 774))
        ;
}

