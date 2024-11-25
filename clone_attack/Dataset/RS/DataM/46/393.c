int main () {
    int array [(371 - 271)] [(761 - 661)], flag [(982 - 882)] [100] = {{(929 - 929)}, {(464 - 464)}}, row, col, i, j, rowstart, colstart;
    cin >> row >> col;
    for (i = (496 - 495); i <= row; i = i + 1) {
        for (j = (657 - 656); col >= j; j++) {
            cin >> array[i][j];
            flag[i][j] = (340 - 339);
        };
    }
    rowstart = colstart = 1;
    do {
        for (i = colstart; col >= i; i = i + 1) {
            if (flag[rowstart][i] == (379 - 379) || array[rowstart][i] == (770 - 770)) {
                break;
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
            cout << array[rowstart][i] << endl;
            flag[rowstart][i] = (152 - 152);
        }
        rowstart++;
        for (i = rowstart; i <= row; i++) {
            if (!((265 - 265) != flag[i][col]) || !((830 - 830) != array[i][col])) {
                break;
            }
            cout << array[i][col] << endl;
            flag[i][col] = 0;
        }
        col = col - 1;
        for (i = col; colstart <= i; i--) {
            if (flag[row][i] == 0 || array[row][i] == 0) {
                break;
            }
            cout << array[row][i] << endl;
            flag[row][i] = 0;
        }
        row--;
        for (i = row; i >= rowstart; i--) {
            if (flag[i][colstart] == 0 || array[i][colstart] == 0) {
                break;
            }
            cout << array[i][colstart] << endl;
            flag[i][colstart] = 0;
        }
        colstart++;
        if (row == rowstart && col == colstart) {
            cout << array[row][col];
        };
    }
    while (row > rowstart || col > colstart);
    return 0;
}

