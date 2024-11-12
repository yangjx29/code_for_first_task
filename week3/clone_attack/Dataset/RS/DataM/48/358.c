int rTA74RSxz [(576 - 565)] [11] = {(124 - 124)}, b [11] [11] = {(636 - 636)};

void  multiply (int d) {
    int i;
    int j;
    if (d != 0) {
        for (i = (924 - 923); (263 - 254) >= i; i = i + 1) {
            j = 773 - 772;
            while (9 >= j) {
                b[i][j] = b[i][j] + rTA74RSxz[i][j] * 2;
                b[i - (634 - 633)][j] += rTA74RSxz[i][j];
                b[i + (471 - 470)][j] = b[i + (471 - 470)][j] + rTA74RSxz[i][j];
                b[i][j + (510 - 509)] += rTA74RSxz[i][j];
                b[i][j - (442 - 441)] = b[i][j - (442 - 441)] + rTA74RSxz[i][j];
                b[i - (876 - 875)][j - 1] = b[i - (876 - 875)][j - 1] + rTA74RSxz[i][j];
                b[i - 1][j + 1] += rTA74RSxz[i][j];
                b[i + 1][j - 1] += rTA74RSxz[i][j];
                b[i + 1][j + 1] += rTA74RSxz[i][j];
                j = j + 1;
            };
        }
        {
            i = 1;
            while (9 >= i) {
                {
                    j = 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    while (j <= 9) {
                        rTA74RSxz[i][j] = b[i][j];
                        b[i][j] = 0;
                        j = j + 1;
                    };
                }
                i++;
            };
        }
        multiply (d - 1);
    };
}

int main () {
    int i, j;
    int m;
    int xLxvZ4pWYEAD;
    int d;
    multiply (xLxvZ4pWYEAD);
    cin >> m >> xLxvZ4pWYEAD;
    rTA74RSxz[5][5] = m;
    for (i = 1; i <= 9; i++) {
        j = 1;
        while (j <= 9) {
            if (j == 1)
                cout << rTA74RSxz[i][j];
            else {
                cout << " " << rTA74RSxz[i][j];
            }
            if (j == 9)
                cout << endl;
            j++;
        };
    }
    return 0;
}

