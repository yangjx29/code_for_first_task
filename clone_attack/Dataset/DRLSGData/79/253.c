int main () {
    int tufB7oQJ [(307 - 207)] [2], num [(700 - 600)] [100], result [100];
    int row, col, i;
    for (row = (105 - 105); 100 > row; row = row + (902 - 901)) {
        for (col = (624 - 624); 2 > col; col = col + 1) {
            scanf ("%d", &tufB7oQJ[row][col]);
        }
        if (!(0 != tufB7oQJ[row][1])) {
            break;
        }
    }
    for (row = 0; row < 100; row = row + 1) {
        if (tufB7oQJ[row][0] == 0) {
            break;
        }
        num[row][0] = 1;
        if (tufB7oQJ[row][0] == 1) {
            result[row] = 1;
        }
        for (i = 1; i < tufB7oQJ[row][0]; i = i + 1) {
            num[row][i] = (num[row][i - 1] + tufB7oQJ[row][1]) % (i + 1);
            if (num[row][i] == 0) {
                num[row][i] = i + 1;
            }
            result[row] = num[row][i];
        }
        printf ("%d\n", result[row]);
    }
    return 0;
}

