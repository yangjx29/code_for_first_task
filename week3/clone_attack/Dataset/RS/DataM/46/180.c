int main () {
    int row, col, CKzBrG5, obMFYED, RYeTspzgX, l = 1, WhApf8vqP2G;
    int Wgk4vz [104] [104] = {(139 - 139)}, y [(10388 - 387)] = {0}, N;
    cin >> row >> col;
    {
        CKzBrG5 = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (CKzBrG5 <= row) {
            {
                obMFYED = 1;
                while (obMFYED <= col) {
                    cin >> Wgk4vz[CKzBrG5][obMFYED];
                    obMFYED = obMFYED + 1;
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
            CKzBrG5 = CKzBrG5 +1;
        };
    }
    N = row * col;
    if (row > col)
        WhApf8vqP2G = col;
    else
        WhApf8vqP2G = row;
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
    CKzBrG5 = 1, obMFYED = 1;
    {
        RYeTspzgX = 1;
        while (RYeTspzgX <= WhApf8vqP2G) {
            {
                obMFYED = RYeTspzgX;
                while (obMFYED <= col - RYeTspzgX) {
                    if (l > N)
                        break;
                    y[l] = Wgk4vz[RYeTspzgX][obMFYED];
                    obMFYED++;
                    l = l + 1;
                };
            }
            {
                CKzBrG5 = RYeTspzgX;
                while (CKzBrG5 <= row - RYeTspzgX) {
                    if (l > N)
                        break;
                    y[l] = Wgk4vz[CKzBrG5][col - RYeTspzgX +1];
                    CKzBrG5++;
                    l = l + 1;
                };
            }
            {
                obMFYED = col - RYeTspzgX +1;
                while (obMFYED >= RYeTspzgX +1) {
                    if (l > N)
                        break;
                    y[l] = Wgk4vz[row - RYeTspzgX +1][obMFYED];
                    obMFYED = obMFYED - 1;
                    l = l + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            {
                CKzBrG5 = row - RYeTspzgX +1;
                while (CKzBrG5 >= RYeTspzgX +1) {
                    if (l > N)
                        break;
                    y[l] = Wgk4vz[CKzBrG5][RYeTspzgX];
                    CKzBrG5 = CKzBrG5 -1;
                    l++;
                };
            }
            RYeTspzgX = RYeTspzgX +1;
        };
    }
    if (col == row && col % 2 != 0)
        y[N] = Wgk4vz[(col + 1) / 2][(col + 1) / 2];
    {
        l = 1;
        while (l <= N) {
            cout << y[l] << endl;
            l++;
        };
    }
    return 0;
}

