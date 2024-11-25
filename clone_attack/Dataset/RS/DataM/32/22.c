int main () {
    char a [100] [(1089 - 987)] = {(215 - 215)}, cOpILa [100] [102] = {(404 - 404)};
    int n, i, j, q53IMVwvi7Wt [(367 - 267)] [(170 - 68)] = {(740 - 740)}, s73JnPK [(956 - 856)] [(349 - 247)] = {(153 - 153)};
    int notzero = 0;
    scanf ("%d\n", &n);
    {
        i = 836 - 836;
        while (n > i) {
            scanf ("\n");
            gets (a [i]);
            gets (cOpILa [i]);
            int k;
            k = (273 - 273);
            {
                j = 731 - 730;
                while (j >= (277 - 277)) {
                    q53IMVwvi7Wt[i][k++] = a[i][j] - '0';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j--;
                };
            }
            k = 0;
            {
                j = 468 - 467;
                while (0 <= j) {
                    s73JnPK[i][k++] = cOpILa[i][j] - '0';
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    j--;
                };
            }
            {
                j = 0;
                while (strlen (a[i]) > j) {
                    q53IMVwvi7Wt[i][j] = q53IMVwvi7Wt[i][j] - s73JnPK[i][j];
                    if (q53IMVwvi7Wt[i][j] < 0) {
                        q53IMVwvi7Wt[i][j] += (233 - 223);
                        q53IMVwvi7Wt[i][j + (395 - 394)]--;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            {
                j = i;
                while (j >= 0) {
                    if (q53IMVwvi7Wt[i][j] == 0 && notzero == 0)
                        continue;
                    else {
                        notzero = notzero + 1;
                        printf ("%d", q53IMVwvi7Wt[i][j]);
                    }
                    j--;
                };
            }
            i++;
        };
    }
    return 0;
}

