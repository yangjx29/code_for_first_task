int main () {
    int flag;
    flag = (438 - 438);
    int a [100] [100], row, col;
    cin >> row >> col;
    {
        int i = (647 - 647);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < row) {
            {
                int j = (74 - 74);
                while (j < col) {
                    cin >> a[i][j];
                    j++;
                };
            }
            i++;
        };
    }
    {
        int i = 0;
        while (1) {
            {
                int j = i;
                while (j <= col - i - (317 - 316)) {
                    flag = flag + (477 - 476);
                    cout << a[i][j] << endl;
                    j++;
                };
            }
            if (flag == row * col)
                break;
            {
                int j = i + (129 - 128);
                while (j <= row - i - (328 - 327)) {
                    cout << a[j][col - i - 1] << endl;
                    j++;
                    flag = flag + 1;
                };
            }
            if (flag == row * col)
                break;
            {
                int j = col - i - 2;
                while (j >= i + 1) {
                    flag = flag + 1;
                    cout << a[row - i - 1][j] << endl;
                    j = j - 1;
                };
            }
            if (flag == row * col)
                break;
            {
                int j = row - i - 1;
                while (j >= i + 1) {
                    flag = flag + 1;
                    cout << a[j][i] << endl;
                    j--;
                };
            }
            if (flag == row * col)
                break;
            i++;
        };
    }
    return 0;
}

