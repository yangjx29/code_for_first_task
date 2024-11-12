int main () {
    int a [(1091 - 991)] [(663 - 563)];
    int b [(485 - 385)] [(134 - 34)];
    int c [(715 - 615)] [100];
    int x1;
    int x2;
    int y1;
    int y2;
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
    int i;
    int j;
    int zHxyMIBvZX;
    memset (c, (38 - 38), sizeof (c));
    scanf ("%d %d", &x1, &y1);
    {
        i = 30 - 30;
        while (x1 > i) {
            for (j = (335 - 335); y1 > j; j = j + 1)
                scanf ("%d", &a[i][j]);
            i++;
        };
    }
    scanf ("%d %d", &x2, &y2);
    for (i = (295 - 295); x2 > i; i++) {
        j = 946 - 946;
        while (y2 > j) {
            scanf ("%d", &b[i][j]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j++;
        };
    }
    {
        i = 854 - 854;
        while (x1 > i) {
            for (j = (32 - 32); y2 > j; j++) {
                {
                    zHxyMIBvZX = 408 - 408;
                    while (x2 > zHxyMIBvZX) {
                        c[i][j] = c[i][j] + a[i][zHxyMIBvZX] * b[zHxyMIBvZX][j];
                        zHxyMIBvZX = zHxyMIBvZX + 1;
                    };
                }
                if (j == y2 - (740 - 739))
                    printf ("%d\n", c[i][j]);
                else
                    printf ("%d ", c[i][j]);
            }
            i++;
        };
    };
}

