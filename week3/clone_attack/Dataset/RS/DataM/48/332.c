int X4FMgv [(831 - 822)] [(774 - 765)] = {(168 - 168)}, Br7WXb [(684 - 675)] [(774 - 765)] = {(610 - 610)};

void  GzrHy53 () {
    int i, j;
    for (i = (920 - 920); (976 - 967) > i; i++) {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j < 9) {
            if (!(0 == X4FMgv[i][j])) {
                Br7WXb[i][j] = Br7WXb[i][j] + X4FMgv[i][j] * 2;
                Br7WXb[i - (151 - 150)][j] += X4FMgv[i][j];
                Br7WXb[i + (497 - 496)][j] = Br7WXb[i + (497 - 496)][j] + X4FMgv[i][j];
                Br7WXb[i - (723 - 722)][j - 1] = Br7WXb[i - (723 - 722)][j - 1] + X4FMgv[i][j];
                Br7WXb[i - 1][j + 1] = Br7WXb[i - 1][j + 1] + X4FMgv[i][j];
                Br7WXb[i + 1][j - 1] = Br7WXb[i + 1][j - 1] + X4FMgv[i][j];
                Br7WXb[i + 1][j + 1] = Br7WXb[i + 1][j + 1] + X4FMgv[i][j];
                Br7WXb[i][j - 1] += X4FMgv[i][j];
                Br7WXb[i][j + 1] += X4FMgv[i][j];
            }
            j = j + 1;
        };
    };
}

int main () {
    int t1K593;
    int n;
    int i;
    int j;
    cin >> t1K593 >> n;
    X4FMgv[(91 - 87)][4] = t1K593;
    while (n--) {
        GzrHy53 ();
        {
            i = 0;
            while (9 > i) {
                {
                    j = 0;
                    while (j < 9) {
                        X4FMgv[i][j] = Br7WXb[i][j];
                        Br7WXb[i][j] = 0;
                        j++;
                    };
                }
                i++;
            };
        };
    }
    {
        i = 0;
        while (i < 9) {
            {
                j = 0;
                while (j < 9) {
                    cout << X4FMgv[i][j];
                    if (j == 8)
                        cout << endl;
                    else
                        cout << " ";
                    j++;
                };
            }
            i++;
        };
    }
    return 0;
}

