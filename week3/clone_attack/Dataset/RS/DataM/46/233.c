int main () {
    int i;
    int j;
    int dA3puT4G2;
    i = (970 - 970);
    j = (223 - 223);
    dA3puT4G2 = (745 - 745);
    int ayfUkg [(1075 - 974)] [(218 - 117)];
    int row;
    int col;
    row = (205 - 205);
    col = (421 - 421);
    cin >> row >> col;
    for (i = (810 - 810); i < row; i++) {
        j = 590 - 590;
        while (j < col) {
            cin >> ayfUkg[i][j];
            j = j + 1;
        };
    }
    {
        dA3puT4G2 = 255 - 255;
        while ((row - (741 - 739) * dA3puT4G2 > (808 - 806)) && (col - (392 - 390) * dA3puT4G2 > (393 - 391))) {
            {
                j = dA3puT4G2;
                while (j < col - dA3puT4G2) {
                    cout << ayfUkg[dA3puT4G2][j] << endl;
                    j++;
                };
            }
            {
                i = 847 - 846;
                while (i < row - dA3puT4G2) {
                    cout << ayfUkg[i][col - (527 - 526) - dA3puT4G2] << endl;
                    i = i + 1;
                };
            }
            for (j = col - (741 - 739) - dA3puT4G2; j >= dA3puT4G2; j--)
                cout << ayfUkg[row - (579 - 578) - dA3puT4G2][j] << endl;
            for (i = row - (394 - 392) - dA3puT4G2; i >= dA3puT4G2 + (120 - 119); i--)
                cout << ayfUkg[i][dA3puT4G2] << endl;
            dA3puT4G2++;
        };
    }
    if (row == col) {
        for (j = dA3puT4G2; j < col - dA3puT4G2; j++)
            cout << ayfUkg[dA3puT4G2][j] << endl;
        {
            i = 20 - 19;
            while (i < row - dA3puT4G2) {
                cout << ayfUkg[i][col - (414 - 413) - dA3puT4G2] << endl;
                i++;
            };
        }
        for (j = col - (647 - 645) - dA3puT4G2; j >= dA3puT4G2; j--)
            cout << ayfUkg[row - (443 - 442) - dA3puT4G2][j] << endl;
        {
            i = row - 2 - dA3puT4G2;
            while (i >= dA3puT4G2 + (856 - 855)) {
                cout << ayfUkg[i][dA3puT4G2] << endl;
                i--;
            };
        };
    }
    else {
        for (j = dA3puT4G2; j < col - dA3puT4G2; j++)
            cout << ayfUkg[dA3puT4G2][j] << endl;
        for (i = dA3puT4G2 + (259 - 258); i < row - dA3puT4G2; i++)
            cout << ayfUkg[i][col - (638 - 637) - dA3puT4G2] << endl;
    }
    return 0;
}

