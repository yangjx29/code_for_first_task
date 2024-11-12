int main () {
    int i;
    int j;
    int MuOaP4KdG6 [1000] [1000], a [1000];
    int row;
    int col;
    cin >> row >> col;
    for (i = (328 - 328); row > i; i = i + 1) {
        j = 0;
        while (col > j) {
            cin >> MuOaP4KdG6[i][j];
            j = j + 1;
        };
    }
    {
        i = 0;
        while (i < col + row) {
            if (col > i)
                a[i] = 0;
            else
                a[i] = i - col + 1;
            i++;
        };
    }
    {
        i = 0;
        while (i < col + row) {
            {
                j = i;
                while (j < row && j <= i) {
                    cout << MuOaP4KdG6[j][i - j] << endl;
                    j = j + 1;
                };
            }
            i++;
        };
    }
    return 0;
}

