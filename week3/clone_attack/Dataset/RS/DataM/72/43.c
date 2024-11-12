int main () {
    int OTHf35UnV1E [20] [20];
    int i;
    int j;
    int m;
    int n;
    cin >> m >> n;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < m) {
            for (j = 0; j < n; j = j + 1)
                cin >> OTHf35UnV1E[i][j];
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
    if (OTHf35UnV1E[0][0] >= OTHf35UnV1E[0][(358 - 357)] && OTHf35UnV1E[0][0] >= OTHf35UnV1E[1][0])
        cout << "0 0" << endl;
    {
        i = 1;
        while (i < n - 1) {
            if (OTHf35UnV1E[0][i] >= OTHf35UnV1E[0][i - 1] && OTHf35UnV1E[0][i] >= OTHf35UnV1E[0][i + 1] && OTHf35UnV1E[0][i] >= OTHf35UnV1E[1][i])
                cout << 0 << " " << i << endl;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    if (OTHf35UnV1E[0][n - 1] >= OTHf35UnV1E[0][n - 2] && OTHf35UnV1E[0][n - 1] >= OTHf35UnV1E[1][n - 1])
        cout << 0 << " " << n - 1 << endl;
    for (i = 1; i < m - 1; i++) {
        if (OTHf35UnV1E[i][0] >= OTHf35UnV1E[i][1] && OTHf35UnV1E[i][0] >= OTHf35UnV1E[i + 1][0] && OTHf35UnV1E[i][0] >= OTHf35UnV1E[i - 1][0])
            cout << i << " 0" << endl;
        {
            j = 1;
            while (j <= n - 2) {
                if (OTHf35UnV1E[i][j] >= OTHf35UnV1E[i][j - 1] && OTHf35UnV1E[i][j] >= OTHf35UnV1E[i][j + 1] && OTHf35UnV1E[i][j] >= OTHf35UnV1E[i - 1][j] && OTHf35UnV1E[i][j] >= OTHf35UnV1E[i + 1][j])
                    cout << i << " " << j << endl;
                j++;
            };
        }
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
        if (OTHf35UnV1E[i][n - 1] >= OTHf35UnV1E[i][n - 2] && OTHf35UnV1E[i][n - 1] >= OTHf35UnV1E[i - 1][n - 1] && OTHf35UnV1E[i][n - 1] >= OTHf35UnV1E[i + 1][n - 1])
            cout << i << " " << n - 1 << endl;
    }
    if (OTHf35UnV1E[m - 1][0] >= OTHf35UnV1E[m - 1][1] && OTHf35UnV1E[m - 1][0] >= OTHf35UnV1E[m - 2][0])
        cout << m - 1 << " " << 0 << endl;
    for (i = 1; i < n - 1; i++) {
        if (OTHf35UnV1E[m - 1][i] >= OTHf35UnV1E[m - 1][i - 1] && OTHf35UnV1E[m - 1][i] >= OTHf35UnV1E[m - 1][i + 1] && OTHf35UnV1E[m - 1][i] >= OTHf35UnV1E[m - 2][i])
            cout << m - 1 << " " << i << endl;
    }
    if (OTHf35UnV1E[m - 1][n - 1] >= OTHf35UnV1E[m - 1][n - 2] && OTHf35UnV1E[m - 1][n - 1] >= OTHf35UnV1E[m - 2][n - 1])
        cout << m - 1 << " " << n - 1 << endl;
    return 0;
}

