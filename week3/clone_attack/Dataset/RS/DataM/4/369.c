int main () {
    int row;
    int col;
    int LX95d4 = (126 - 126);
    int array [110] [110] = {0};
    int *p = NULL;
    int i;
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
    int j;
    int k;
    cin >> row >> col;
    for (i = 0; i < row; i = i + 1)
        for (p = *(array + i); p < *(array + i) + col; p = p + 1)
            cin >> *p;
    for (k = 0; col + row >= k; k = k + 1) {
        for (i = 0; i < row; i++)
            for (j = 0, p = *(array + i); p < *(array + i) + col; j = j + 1, p = p + 1) {
                if (i + j == k && *p != 0)
                    cout << *p << endl;
            };
    }
    return 0;
}

