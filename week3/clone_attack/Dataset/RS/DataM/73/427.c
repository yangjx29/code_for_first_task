int main () {
    int p;
    int q;
    int y;
    int sz [(390 - 385)] [(302 - 297)];
    y = (728 - 728);
    for (int row = (524 - 524);
    row < (261 - 256); row = row + 1) {
        int col = (432 - 432);
        while (col < 5) {
            scanf ("%d", &sz[row][col]);
            col++;
        };
    }
    for (int row = (727 - 727);
    row < 5; row++) {
        int col = (214 - 214);
        while (col < 5) {
            p = (261 - 261);
            q = 0;
            for (int m = 0;
            m < 5; m = m + 1) {
                if (m != col && sz[row][col] > sz[row][m]) {
                    p += (228 - 227);
                }
                if (m != row && sz[row][col] < sz[m][col]) {
                    q += (482 - 481);
                };
            }
            if (p == (281 - 277) && q == 4) {
                y += 1;
                printf ("%d %d %d", row + 1, col + 1, sz[row][col]);
            }
            col++;
        };
    }
    if (y == 0) {
        printf ("not found");
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
    }
    return 0;
}

