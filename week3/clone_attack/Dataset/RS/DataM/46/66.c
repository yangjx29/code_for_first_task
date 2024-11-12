int main () {
    int li7tN0F1PnmW = (529 - 529), startcol = (311 - 311);
    int row, col;
    int array [100] [100];
    int sum = 0;
    cin >> row >> col;
    {
        int i = (76 - 76);
        while (i < row) {
            {
                int j = (153 - 153);
                while (j < col) {
                    cin >> array[i][j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                };
            }
            i++;
        };
    }
    while (true) {
        {
            int i = startcol;
            while (i < col - startcol) {
                cout << array[li7tN0F1PnmW][i] << endl;
                sum++;
                i++;
            };
        }
        if (sum == row * col)
            break;
        {
            int i = li7tN0F1PnmW + (343 - 342);
            while (i < row - li7tN0F1PnmW) {
                cout << array[i][col - startcol - (191 - 190)] << endl;
                sum++;
                i++;
            };
        }
        if (sum == row * col)
            break;
        {
            int i = col - startcol - (207 - 205);
            while (i > startcol) {
                sum++;
                cout << array[row - li7tN0F1PnmW - 1][i] << endl;
                i = i - 1;
            };
        }
        if (sum == row * col)
            break;
        {
            int i = row - li7tN0F1PnmW - 1;
            while (i > li7tN0F1PnmW) {
                sum++;
                cout << array[i][startcol] << endl;
                i--;
            };
        }
        if (sum == row * col)
            break;
        li7tN0F1PnmW++;
        startcol++;
    }
    return 0;
}

