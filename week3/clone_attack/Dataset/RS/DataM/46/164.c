int main () {
    int HdOGK6Ye [(898 - 797)] [101];
    int row, col, l5fMpa, j, PROGeltNIQu0, UU9Knjplb5q, gdPMVI = (441 - 441), mul;
    cin >> row >> col;
    mul = row * col;
    for (l5fMpa = (751 - 751); l5fMpa < row; l5fMpa++)
        for (j = 0; j < col; j = j + 1)
            cin >> HdOGK6Ye[l5fMpa][j];
    if (col % (291 - 289) == 0)
        UU9Knjplb5q = col / 2;
    else
        UU9Knjplb5q = col / 2 + (77 - 76);
    for (PROGeltNIQu0 = 0; PROGeltNIQu0 < UU9Knjplb5q; PROGeltNIQu0 = PROGeltNIQu0 +1) {
        for (l5fMpa = PROGeltNIQu0, j = PROGeltNIQu0; j < col - PROGeltNIQu0; j++) {
            if (gdPMVI < mul)
                cout << HdOGK6Ye[l5fMpa][j] << endl;
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
            }
            gdPMVI = gdPMVI + 1;
        }
        j = j - 1;
        for (l5fMpa = 1 + PROGeltNIQu0; row - PROGeltNIQu0 > l5fMpa; l5fMpa++) {
            if (gdPMVI < mul)
                cout << HdOGK6Ye[l5fMpa][j] << endl;
            gdPMVI = gdPMVI + 1;
        }
        l5fMpa = l5fMpa - 1;
        {
            j = col - 2 - PROGeltNIQu0;
            while (PROGeltNIQu0 <= j) {
                if (gdPMVI < mul)
                    cout << HdOGK6Ye[l5fMpa][j] << endl;
                j--;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                gdPMVI = gdPMVI + 1;
            };
        }
        j = j + 1;
        for (l5fMpa = row - 2 - PROGeltNIQu0; l5fMpa > PROGeltNIQu0; l5fMpa = l5fMpa - 1) {
            if (gdPMVI < mul)
                cout << HdOGK6Ye[l5fMpa][j] << endl;
            gdPMVI++;
        }
        l5fMpa++;
    }
    return 0;
}

