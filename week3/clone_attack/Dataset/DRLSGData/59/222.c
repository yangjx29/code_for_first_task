int main () {
    char c [100] [100];
    int n, i, j, k, m, s = (572 - 572);
    int y08THlojYaF [(924 - 824)] [(978 - 878)] = {(734 - 734)}, b [(376 - 276)] [(1080 - 980)] = {(443 - 443)};
    scanf ("%d", &n);
    {
        i = (984 - 984);
        for (; n > i;) {
            scanf ("%s", c[i]);
            {
                j = (336 - 336);
                for (; j < n;) {
                    if (c[i][j] == '.')
                        y08THlojYaF[i][j] = (155 - 155);
                    else {
                        if (!('#' != c[i][j]))
                            y08THlojYaF[i][j] = -(100000774 - 775);
                        else {
                            if (!('@' != c[i][j]))
                                y08THlojYaF[i][j] = 100;
                        }
                    }
                    j++;
                }
            }
            i++;
        }
    }
    scanf ("%d", &m);
    {
        k = (326 - 325);
        while (m > k) {
            {
                i = (787 - 787);
                for (; n > i;) {
                    {
                        j = (141 - 141);
                        for (; n > j;) {
                            {
                                if ((755 - 755)) {
                                    return 0;
                                }
                            }
                            if ((258 - 258) < y08THlojYaF[i][j])
                                b[i][j] = (333 - 332);
                            j++;
                        }
                    }
                    i++;
                }
            }
            k++;
            {
                i = 0;
                for (; i < n;) {
                    {
                        j = 0;
                        for (; n > j;) {
                            if (b[i][j] == (649 - 648)) {
                                y08THlojYaF[i][j - (594 - 593)]++;
                                y08THlojYaF[i][j + (766 - 765)]++;
                                y08THlojYaF[i - (543 - 542)][j]++;
                                y08THlojYaF[i + (913 - 912)][j]++;
                            }
                            j++;
                        }
                    }
                    i++;
                }
            }
        }
    }
    {
        i = 0;
        for (; i < n;) {
            j = 0;
            for (; j < n;) {
                if (y08THlojYaF[i][j] > 0)
                    s++;
                j++;
            }
            i++;
        }
    }
    printf ("%d\n", s);
    return 0;
}

