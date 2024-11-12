int main () {
    int flag = 1, uN6l9O7EK = 1;
    int j;
    int n, i;
    int c = i - 1;
    int nPkXgcvHT [n];
    int oPuWlcE [(100989 - 989)] [2];
    memset (oPuWlcE, (529 - 529), sizeof (oPuWlcE));
    memset (nPkXgcvHT, 0, sizeof (nPkXgcvHT));
    cin >> n;
    {
        i = 0;
        while (1) {
            cin >> oPuWlcE[i][0] >> oPuWlcE[i][(955 - 954)];
            if (oPuWlcE[i][0] == 0 && oPuWlcE[i][1] == 0)
                break;
            i++;
        };
    }
    for (i - 1; i >= 0; i--) {
        nPkXgcvHT[oPuWlcE[i][1]]++;
    }
    for (i = 0; i <= n; i++) {
        if (nPkXgcvHT[i] == n - 1) {
            {
                j = 0;
                while (j < c) {
                    if (oPuWlcE[j][0] == i)
                        break;
                    j++;
                };
            }
            if (j == c) {
                uN6l9O7EK = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                cout << i << endl;
            }
            else if (flag) {
                flag = 0;
                cout << "NOT FOUND" << endl;
            };
        };
    }
    if (uN6l9O7EK) {
        cout << "NOT FOUND" << endl;
    }
    return 0;
}

