int main () {
    int n;
    int s;
    int k;
    int array [(114 - 14)] [100];
    int i;
    int j;
    int a;
    int ZvrHcB1fpyU;
    int b1;
    int c;
    int HjiqGOFEB;
    int d;
    int Jix8UBTGKlLE;
    int f;
    int WX5BLJPTgep;
    int g;
    int g1;
    int h;
    int row;
    int col;
    int sz [(10221 - 221)] = {(671 - 671)};
    int ocN4Yu;
    n = (284 - 284);
    s = (655 - 655);
    k = 0;
    scanf ("%d %d", &row, &col);
    for (i = 0; row > i; i++) {
        for (j = 0; j < col; j = j + 1) {
            scanf ("%d", &array[i][j]);
            s = s + 1;
        };
    }
    for (; n <= s;) {
        for (k = 0; k < col; k = k + 1) {
            a = k;
            b1 = k;
            for (ZvrHcB1fpyU = b1; ZvrHcB1fpyU < col - k; ZvrHcB1fpyU = ZvrHcB1fpyU +1) {
                sz[n] = array[a][ZvrHcB1fpyU];
                n++;
            }
            d = col - k - 1;
            for (c = k + 1; c < row - k; c++) {
                sz[n] = array[c][d];
                n++;
            }
            Jix8UBTGKlLE = row - k - 1;
            WX5BLJPTgep = col - 2 - k;
            for (f = WX5BLJPTgep; k <= f; f = f - 1) {
                sz[n] = array[Jix8UBTGKlLE][f];
                n++;
            }
            h = k;
            g1 = row - 2 - k;
            for (g = g1; g >= 1 + k; g--) {
                sz[n] = array[g][h];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                n++;
            };
        };
    }
    {
        ocN4Yu = 0;
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
        while (ocN4Yu < s) {
            printf ("%d\n", sz[ocN4Yu]);
            ocN4Yu = ocN4Yu + 1;
        };
    }
    return 0;
}

