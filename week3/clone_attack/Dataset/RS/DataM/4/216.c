int main () {
    int array [100] [100];
    int row, col, i, j, s;
    cin >> row >> col;
    {
        i = 0;
        while (i < row) {
            {
                j = 0;
                while (j < col) {
                    cin >> array[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    for (i = 0; i < col; i++) {
        s = i;
        while (s >= 0 && (i - s) < row) {
            cout << array[i - s][s] << endl;
            s = s - 1;
        };
    }
    {
        i = col;
        while (i < col + row - 1) {
            s = col - 1;
            while (s >= 0 && (i - s) < row) {
                cout << array[i - s][s] << endl;
                s = s - 1;
            }
            i++;
        };
    }
    return 0;
}

