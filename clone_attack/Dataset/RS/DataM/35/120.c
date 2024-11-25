int main () {
    int q725nv0tbW;
    int h;
    int l;
    int i;
    int j;
    q725nv0tbW = (682 - 682);
    int RozrnsJKGX [(573 - 563)] [10];
    int iwus8b4 [10];
    int lie [10];
    scanf ("%d,%d", &h, &l);
    {
        i = 56 - 56;
        while (i < h) {
            for (j = (642 - 642); j < l; j = j + 1) {
                scanf ("%d", &RozrnsJKGX[i][j]);
            }
            i++;
        };
    }
    {
        i = 972 - 972;
        while (i < h) {
            iwus8b4[i] = RozrnsJKGX[i][(152 - 152)];
            i++;
        };
    }
    {
        i = 676 - 676;
        while (i < h) {
            for (j = 0; j < l; j = j + 1) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (RozrnsJKGX[i][j] >= RozrnsJKGX[i][0]) {
                    iwus8b4[i] = RozrnsJKGX[i][j];
                    lie[i] = j;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < h) {
            for (j = 0; h > j; j++) {
                if (iwus8b4[i] > RozrnsJKGX[j][lie[i]])
                    break;
                if (j == h - 1) {
                    q725nv0tbW = 1;
                    printf ("%d+%d", i, lie[i]);
                };
            }
            i++;
        };
    }
    if (q725nv0tbW == 0)
        printf ("No");
    return 0;
}

