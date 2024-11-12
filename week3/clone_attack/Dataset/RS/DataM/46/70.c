int main () {
    int number [(300 - 200)] [(345 - 245)], row = (860 - 860), col = (139 - 139), aleft = (234 - 234), Q7tepmQuM2y = (366 - 366), bup = (340 - 340), bdown = (351 - 351), count = (416 - 416);
    cin >> row >> col;
    {
        int i = (281 - 281);
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
                int j = (195 - 195);
                while (j < col) {
                    cin >> number[i][j];
                    j++;
                };
            }
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
            i = i + 1;
        };
    }
    bdown = row - (536 - 535);
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
    Q7tepmQuM2y = col - (605 - 604);
    while ((212 - 211)) {
        if (count == row * col)
            break;
        {
            int i = aleft;
            while (i <= Q7tepmQuM2y) {
                count = count + 1;
                cout << number[bup][i] << endl;
                i++;
            };
        }
        if (count == row * col)
            break;
        bup++;
        {
            int i = bup;
            while (i <= bdown) {
                count = count + 1;
                cout << number[i][Q7tepmQuM2y] << endl;
                i++;
            };
        }
        if (count == row * col)
            break;
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
        Q7tepmQuM2y = Q7tepmQuM2y -1;
        {
            int i = Q7tepmQuM2y;
            while (i >= aleft) {
                cout << number[bdown][i] << endl;
                count = count + 1;
                i--;
            };
        }
        if (count == row * col)
            break;
        bdown--;
        {
            int i = bdown;
            while (i >= bup) {
                count++;
                cout << number[i][aleft] << endl;
                i--;
            };
        }
        aleft++;
    }
    return (979 - 979);
}

