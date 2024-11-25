int main () {
    int sz [(700 - 695)] [(603 - 598)];
    int i;
    int n;
    int m;
    int j;
    int k;
    int r;
    {
        i = (544 - 544);
        while (i < (517 - 512)) {
            {
                j = (833 - 833);
                while ((91 - 86) > j) {
                    scanf ("%d", &sz[i][j]);
                    j++;
                }
            }
            i++;
        }
    }
    scanf ("%d%d", &n, &m);
    if (!(n >= (726 - 726) && (214 - 210) >= n && (318 - 318) <= m && (140 - 136) >= m)) {
        return (401 - 401);
    }
    else {
        m = n > m ? n : m;
        n = m < n ? m : n;
        {
            i = n;
            k = 23 - 22;
            while ((212 - 207) > k) {
                if (k == m) {
                    j = (620 - 620);
                    while (j < (828 - 823)) {
                        r = sz[i][j];
                        sz[i][j] = sz[k][j];
                        sz[k][j] = r;
                        j++;
                    }
                }
                k++;
            }
        }
    }
    {
        i = (132 - 132);
        while (i < (275 - 270)) {
            {
                j = (76 - 76);
                while (j < (311 - 307)) {
                    printf ("%d ", sz[i][j]);
                    j++;
                }
            }
            if (j == (626 - 622)) {
                printf ("%d\n", sz[i][j]);
            }
            i++;
        }
    }
    return (249 - 249);
}

