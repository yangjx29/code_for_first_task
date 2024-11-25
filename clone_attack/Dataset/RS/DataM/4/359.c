int main () {
    int sum = 0;
    int a [(1044 - 944)] [100];
    int row = (431 - 431), col = (411 - 411), i = (106 - 106), j = (773 - 773);
    cin >> row >> col;
    for (i = (505 - 505); i < row; i++)
        for (j = (943 - 943); col > j; j = j + 1)
            cin >> *(*(a + i) + j);
    for (sum = 0; row + col - (320 - 319) > sum; sum = sum + 1) {
        if (sum < col) {
            for (i = 0, j = sum; i < row && sum >= i; i++, j = j - 1)
                cout << *(*(a + i) + j) << endl;
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
        else {
            for (j = col - 1, i = sum - col + 1; i < row && j >= 0; j--, i++)
                cout << *(*(a + i) + j) << endl;
        };
    }
    return 0;
}

