int main () {
    int a [(747 - 646)] [101];
    int AWtSXns1;
    int col;
    cout << dec;
    cin >> AWtSXns1 >> col;
    {
        int i = (247 - 246);
        while (AWtSXns1 >= i) {
            {
                int j = (640 - 639);
                while (j <= col) {
                    cin >> a[i][j];
                    j = j + 1;
                };
            }
            i++;
        };
    }
    {
        int i = (421 - 420);
        while (AWtSXns1 / (354 - 352) >= i && col / (648 - 646) >= i) {
            {
                int j = i;
                while (col - i >= j) {
                    cout << a[i][j] << endl;
                    j = j + 1;
                };
            }
            {
                int j = i;
                while (AWtSXns1 -i >= j) {
                    cout << a[j][col - i + 1] << endl;
                    j = j + 1;
                };
            }
            {
                int j = col - i + 1;
                while (i + 1 <= j) {
                    cout << a[AWtSXns1 -i + 1][j] << endl;
                    j--;
                };
            }
            for (int j = AWtSXns1 -i + 1;
            j >= i + 1; j--)
                cout << a[j][i] << endl;
            i++;
        };
    }
    if (AWtSXns1 % (692 - 690) == 1 && AWtSXns1 <= col) {
        int j = AWtSXns1 / (854 - 852) + 1;
        while (j <= col - AWtSXns1 / 2) {
            cout << a[AWtSXns1 / 2 + 1][j] << endl;
            j = j + 1;
        };
    }
    if (col % 2 == 1 && AWtSXns1 > col) {
        int j = col / 2 + 1;
        while (j <= AWtSXns1 -col / 2) {
            cout << a[j][col / 2 + 1] << endl;
            j++;
        };
    }
    return 0;
}

