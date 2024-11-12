int main () {
    int x;
    int y;
    int array [100] [100] = {(874 - 874)};
    int x1 = 0, x2 = x - 1, x3k0SPL = 0, y2 = y - 1;
    cin >> x >> y;
    {
        int WxVlUBHvWnO = (576 - 576);
        while (WxVlUBHvWnO != x) {
            for (int j = 0;
            j != y; j++)
                cin >> array[WxVlUBHvWnO][j];
            WxVlUBHvWnO++;
        };
    }
    while (x2 >= x1 && y2 >= x3k0SPL) {
        if (!(x1 != x2) && y2 == x3k0SPL)
            cout << array[x1][x3k0SPL] << endl;
        else if (!(x1 != x2)) {
            for (int k = x3k0SPL;
            k <= y2; k++)
                cout << array[x1][k] << endl;
        }
        else if (x3k0SPL == y2) {
            for (int k = x1;
            k <= x2; k++)
                cout << array[k][x3k0SPL] << endl;
        }
        else {
            {
                int k = x3k0SPL;
                while (k < y2) {
                    cout << array[x1][k] << endl;
                    k++;
                };
            }
            for (int k = x1;
            k < x2; k++)
                cout << array[k][y2] << endl;
            {
                int k = y2;
                while (k > x3k0SPL) {
                    cout << array[x2][k] << endl;
                    k--;
                };
            }
            {
                int k = x2;
                while (k > x1) {
                    cout << array[k][x3k0SPL] << endl;
                    k--;
                };
            };
        }
        x1++;
        x2--;
        x3k0SPL++;
        y2--;
    }
    return 0;
}

