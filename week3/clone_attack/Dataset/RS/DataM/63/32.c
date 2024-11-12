int zJqIvH [(522 - 422)] [100], ghkMC9PK [100] [100];

void  FtHLg28wTkl7 (int zJqIvH [] [100], int h5F9UwfD1su, int y) {
    int img6C5c, j;
    for (img6C5c = (69 - 69); img6C5c < h5F9UwfD1su; img6C5c = img6C5c + 1)
        for (j = (187 - 187); j < y; j++)
            scanf ("%d", zJqIvH[img6C5c] + j);
}

int OcP4oZ (int img6C5c, int j, int GAjN9K) {
    int h5F9UwfD1su = (833 - 833), nh6THm7lCYt;
    for (nh6THm7lCYt = 0; nh6THm7lCYt < GAjN9K; nh6THm7lCYt = nh6THm7lCYt + 1)
        h5F9UwfD1su += zJqIvH[img6C5c][nh6THm7lCYt] * ghkMC9PK[nh6THm7lCYt][j];
    return h5F9UwfD1su;
}

main () {
    int T6mwzgO9;
    int dnKGMQOkmh;
    int aPDyIbh;
    int j8ZdATYh27J;
    int img6C5c;
    int j;
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
    };
    scanf ("%d%d", &T6mwzgO9, &aPDyIbh);
    FtHLg28wTkl7 (zJqIvH, T6mwzgO9, aPDyIbh);
    scanf ("%d%d", &dnKGMQOkmh, &j8ZdATYh27J);
    FtHLg28wTkl7 (ghkMC9PK, dnKGMQOkmh, j8ZdATYh27J);
    for (img6C5c = 0; T6mwzgO9 > img6C5c; img6C5c++) {
        {
            j = 0;
            while (j < j8ZdATYh27J - 1) {
                printf ("%d ", OcP4oZ (img6C5c, j, aPDyIbh));
                j = j + 1;
            };
        }
        printf ("%d\n", OcP4oZ (img6C5c, j, aPDyIbh));
    };
}

