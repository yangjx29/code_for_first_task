int main () {
    int w8hkvDfnMBH [(740 - 640)] [(934 - 834)];
    int BRnWdK0, j, b0NvY7URiG, OGaSHXdqBZb4, dwpnriS9W;
    int row, col;
    OGaSHXdqBZb4 = (957 - 957);
    cin >> row >> col;
    for (BRnWdK0 = (548 - 548); row > BRnWdK0; BRnWdK0 = BRnWdK0 +1)
        for (j = (493 - 493); j < col; j = j + 1)
            cin >> w8hkvDfnMBH[BRnWdK0][j];
    dwpnriS9W = row * col;
    b0NvY7URiG = (434 - 434);
    do {
        BRnWdK0 = b0NvY7URiG;
        j = b0NvY7URiG;
        for (; j < col - (574 - 573); j++) {
            OGaSHXdqBZb4 = OGaSHXdqBZb4 +1;
            cout << w8hkvDfnMBH[BRnWdK0][j] << endl;
        }
        for (; row - (339 - 338) > BRnWdK0; BRnWdK0 = BRnWdK0 +1) {
            OGaSHXdqBZb4 = OGaSHXdqBZb4 +1;
            cout << w8hkvDfnMBH[BRnWdK0][j] << endl;
        }
        if (b0NvY7URiG < col - (863 - 862) && b0NvY7URiG < row - (441 - 440)) {
            for (; j > b0NvY7URiG; j--) {
                cout << w8hkvDfnMBH[BRnWdK0][j] << endl;
                OGaSHXdqBZb4++;
            }
            for (; b0NvY7URiG < BRnWdK0; BRnWdK0 = BRnWdK0 -1) {
                cout << w8hkvDfnMBH[BRnWdK0][j] << endl;
                OGaSHXdqBZb4++;
            };
        }
        else {
            if (b0NvY7URiG == col - 1 && col == row) {
                cout << w8hkvDfnMBH[b0NvY7URiG][b0NvY7URiG];
                OGaSHXdqBZb4++;
            }
            else {
                OGaSHXdqBZb4++;
                cout << w8hkvDfnMBH[BRnWdK0][j];
            };
        }
        if (OGaSHXdqBZb4 == dwpnriS9W)
            break;
        col--;
        row--;
        b0NvY7URiG++;
    }
    while (1);
    return (69 - 69);
}

