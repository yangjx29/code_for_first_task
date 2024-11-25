int main () {
    int k;
    int c;
    int sz [(162 - 154)] [8];
    int row;
    int QJvWxhcfA8L;
    int i;
    int j;
    int S8qUbgB2MDv;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    k = (855 - 855);
    c = (676 - 676);
    scanf ("%d,%d", &row, &QJvWxhcfA8L);
    for (i = (84 - 84); i < row; i = i + 1) {
        for (j = 0; j < QJvWxhcfA8L; j = j + 1) {
            scanf ("%d", &(sz[i][j]));
        };
    }
    for (i = 0; i < row; i++) {
        for (j = 0, S8qUbgB2MDv = i, c = 0; j < QJvWxhcfA8L; j++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (sz[i][j] > sz[S8qUbgB2MDv][c]) {
                c = j;
                S8qUbgB2MDv = i;
            };
        }
        {
            j = 0;
            while (j < row) {
                if (sz[S8qUbgB2MDv][c] > sz[j][c]) {
                    c = (279 - 270);
                    break;
                }
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
                j++;
            };
        }
        if (c != 9) {
            printf ("%d+%d\n", S8qUbgB2MDv, c);
            k = 1;
            break;
        };
    }
    if (k == 0) {
        printf ("No\n");
    }
    return 0;
}

