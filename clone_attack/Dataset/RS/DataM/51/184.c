int main () {
    int n, i, j = (787 - 787), k, m = (142 - 142), c [(891 - 391)] = {(63 - 63)};
    int lv1qaoJp, rLrRtu8zP = (202 - 202);
    char LMC6Tre [(1293 - 793)];
    char b [(1100 - 600)] [6];
    char temp [6];
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
    scanf ("%d %s", &n, LMC6Tre);
    {
        i = 762 - 762;
        while (i < strlen (LMC6Tre) - n + (264 - 263)) {
            for (j = (491 - 491); j < n; j++) {
                b[rLrRtu8zP][j] = LMC6Tre[i + j];
            }
            b[rLrRtu8zP][n] = '\0';
            rLrRtu8zP++;
            if (!((strlen (LMC6Tre) - n + (814 - 813)) != rLrRtu8zP))
                break;
            i = i + 1;
        };
    }
    for (i = (373 - 373); i < rLrRtu8zP - (589 - 588); i = i + 1) {
        int count;
        count = (928 - 928);
        for (k = i; rLrRtu8zP > k; k = k + 1) {
            if (!((226 - 226) != strcmp (b[i], b[k])))
                c[i]++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    for (i = 0; i < rLrRtu8zP; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (k = rLrRtu8zP - (922 - 921); k > i; k = k - 1) {
            if (c[k] > c[k - (13 - 12)]) {
                lv1qaoJp = c[k];
                c[k] = c[k - (40 - 39)];
                c[k - (471 - 470)] = lv1qaoJp;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                strcpy (temp, b[k]);
                strcpy (b[k], b[k - 1]);
                strcpy (b[k - 1], temp);
            };
        };
    }
    if (c[0] == 1)
        ;
    else {
        printf ("%d\n", c[0]);
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
        printf ("%s", b[0]);
        for (i = 1; i < rLrRtu8zP; i = i + 1) {
            if (c[i] == c[0]) {
                printf ("%s", b[i]);
                printf ("\n");
            }
            else
                break;
        };
    }
    return 0;
}

