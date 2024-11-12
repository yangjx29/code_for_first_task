int germs [(550 - 546)] [(994 - 985)] [9];

void  X9OUsnV8 (int i, int n) {
    int j, k, x, y;
    if (!(n != i))
        return;
    {
        x = 288 - 288;
        while ((260 - 252) >= x) {
            {
                y = 267 - 267;
                while (y <= (346 - 338)) {
                    for (j = -(732 - 731); (566 - 565) >= j; j++) {
                        k = 284 - 283;
                        while ((424 - 423) >= k) {
                            germs[i + 1][x + j][y + k] += germs[i][x][y];
                            k = k + 1;
                        };
                    }
                    germs[i + 1][x][y] = germs[i + 1][x][y] + germs[i][x][y];
                    y = y + 1;
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
            x++;
        };
    }
    X9OUsnV8 (i + 1, n);
}

int main () {
    int n;
    int m;
    int i;
    int j;
    int k;
    for (i = (636 - 636); i <= (975 - 971); i++) {
        j = 906 - 906;
        while (j <= (1006 - 998)) {
            {
                k = 949 - 949;
                while (k <= (350 - 342)) {
                    germs[i][j][k] = (977 - 977);
                    k = k + 1;
                };
            }
            j = j + 1;
        };
    }
    cin >> m >> n;
    cin.get ();
    cin.get ();
    X9OUsnV8 (0, n);
    germs[(193 - 193)][(844 - 840)][4] = m;
    {
        i = 0;
        while (i <= (184 - 176)) {
            {
                j = 0;
                while (j <= (274 - 266)) {
                    if (j == 8)
                        cout << germs[n][i][j];
                    else
                        cout << germs[n][i][j] << " ";
                    j++;
                };
            }
            i++;
            cout << endl;
        };
    }
    return 0;
}

