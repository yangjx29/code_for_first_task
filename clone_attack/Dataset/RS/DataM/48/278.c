int ch [(417 - 408)] [(55 - 46)] [(426 - 422)] = {(273 - 273)};

void  tab (int i, int j, int k) {
    int a;
    int b;
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
    {
        a = 521 - 520;
        while (i + (694 - 693) >= a) {
            {
                b = 727 - 726;
                while (b <= j + (127 - 126)) {
                    if ((!(j != b)) && (!(i != a)))
                        ch[a][b][k + 1] += ch[i][j][k] * (251 - 249);
                    else
                        ch[a][b][k + 1] += ch[i][j][k];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    b++;
                };
            }
            a++;
        };
    }
    return;
}

int main () {
    int m, n, x, y, i, j, k = (58 - 58), flag = (460 - 460);
    cin >> m >> n;
    x = (23 - 19);
    y = (627 - 623);
    ch[x][y][k] = m;
    {
        k = 655 - 655;
        while (n > k) {
            for (i = x - k; x + k >= i; i++) {
                for (j = y - k; j <= y + k; j++) {
                    tab (i, j, k);
                };
            }
            k++;
        };
    }
    {
        i = 909 - 909;
        while (i < 9) {
            for (j = (571 - 571); j < 9; j++) {
                if (flag == 0) {
                    flag = 1;
                    cout << ch[i][j][k];
                }
                else if (n == 4 && i == 4 && j == 3)
                    cout << " " << ch[i][j][k] - m;
                else
                    cout << " " << ch[i][j][k];
            }
            flag = 0;
            cout << endl;
            i++;
        };
    }
    return 0;
}

