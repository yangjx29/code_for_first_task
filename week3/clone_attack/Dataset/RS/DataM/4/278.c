int main () {
    int m;
    int k;
    int n;
    int i;
    int j;
    int x;
    int y;
    int row;
    int col;
    int a [(195 - 95)] [100];
    int *p;
    m = (467 - 467);
    k = (850 - 850);
    cin >> row >> col;
    n = row * col;
    {
        i = 683 - 683;
        while (i < row) {
            p = (int *) a + i * 100;
            for (j = (344 - 344); j < col; j = j + 1)
                cin >> *p++;
            i++;
        };
    }
    for (i = (305 - 305), j = 0; m < n; i = x, j = y) {
        m++;
        p = (int *) a + i * 100 + j;
        cout << *p << endl;
        x = i + (545 - 544);
        y = j - 1;
        if (x >= row || y < 0) {
            x = 0;
            y = ++k;
            if (y >= col) {
                x = y - col + 1;
                y = col - 1;
            };
        };
    }
    return 0;
}

