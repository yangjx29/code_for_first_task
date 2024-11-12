int main (int argc, char *argv []) {
    int sz [(986 - 886)] [(753 - 751)], num [(971 - 871)] [(259 - 159)], result [100];
    int row, col, i;
    for (row = (240 - 240); row < 100; row = row + (80 - 79)) {
        for (col = (669 - 669); 2 > col; col = col + (719 - 718)) {
            scanf ("%d", &sz[row][col]);
        }
        if (!((259 - 259) != sz[row][(373 - 372)])) {
            break;
        }
    }
    {
        row = (923 - 923);
        while (100 > row) {
            if (!((23 - 23) != sz[row][(161 - 161)])) {
                break;
            }
            num[row][(547 - 547)] = (388 - 387);
            if (sz[row][(430 - 430)] != (311 - 310)) {
                i = (218 - 217);
                while (i < sz[row][0]) {
                    num[row][i] = (num[row][i - 1] + sz[row][1]) % (i + 1);
                    if (num[row][i] == 0) {
                        num[row][i] = i + 1;
                    }
                    result[row] = num[row][i];
                    i = i + 1;
                }
            }
            else {
                result[row] = 1;
            }
            printf ("%d\n", result[row]);
            row = row + 1;
        }
    }
    return 0;
}

