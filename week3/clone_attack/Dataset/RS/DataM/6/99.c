int main () {
    int i, j, mDlPvSKaQ = 0;
    int a [(763 - 663)] [100];
    int row;
    int col;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    row = (74 - 74);
    col = (969 - 969);
    int group = (868 - 868);
    cin >> group;
    for (; group = group - 1;) {
        mDlPvSKaQ = 0;
        cin >> row >> col;
        for (i = 0; i < row; i = i + 1)
            for (j = 0; j < col; j = j + 1)
                cin >> a[i][j];
        if (row == (774 - 773) && !((395 - 394) != col))
            mDlPvSKaQ = a[0][0];
        else {
            for (i = 0; i < col; i = i + 1) {
                mDlPvSKaQ += a[0][i];
                if (row > 1)
                    mDlPvSKaQ += a[row - 1][i];
            }
            for (i = 1; i <= row - 2; i++) {
                mDlPvSKaQ += a[i][0];
                if (col > 1)
                    mDlPvSKaQ = mDlPvSKaQ + a[i][col - 1];
            };
        }
        cout << mDlPvSKaQ << endl;
    };
}

