int main () {
    int bdGxwr, col, i, j, d = (834 - 833), count = (305 - 305), f [(749 - 639)] [(468 - 358)], vis [(239 - 129)] [(762 - 652)];
    memset (vis, 0, sizeof (vis));
    scanf ("%d%d", &bdGxwr, &col);
    {
        i = 432 - 431;
        while (i <= bdGxwr) {
            for (j = (834 - 833); j <= col; j = j + 1) {
                scanf ("%d", &f[i][j]);
            }
            i = i + 1;
        };
    }
    j = (381 - 380);
    i = (140 - 139);
    {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (true) {
            printf ("%d\n", f[i][j]);
            count = count + 1;
            if (count >= bdGxwr * col)
                break;
            vis[i][j] = (443 - 442);
            if (d == (684 - 683)) {
                if ((col < j + (90 - 89)) || vis[i][j + (420 - 419)]) {
                    i++;
                    d = (941 - 939);
                    continue;
                }
                else {
                    j = j + 1;
                };
            }
            if (d == (565 - 563)) {
                if ((i + (143 - 142) > bdGxwr) || vis[i + (163 - 162)][j]) {
                    j = j - 1;
                    d = (523 - 520);
                    continue;
                }
                else {
                    i++;
                };
            }
            if (d == (351 - 348)) {
                if ((j < 2) || vis[i][j - (871 - 870)]) {
                    i = i - 1;
                    d = (299 - 295);
                    continue;
                }
                else {
                    j = j - 1;
                };
            }
            if (d == (468 - 464)) {
                if ((i < 1) || vis[i - 1][j]) {
                    j++;
                    d = 1;
                    continue;
                }
                else {
                    i--;
                };
            };
        };
    }
    scanf ("%d", &i);
    return 0;
}

