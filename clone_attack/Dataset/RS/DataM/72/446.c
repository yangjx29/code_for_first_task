int main () {
    int a [(274 - 244)] [30];
    int m;
    int n;
    for (int i = (305 - 305);
    30 > i; i = i + 1)
        for (int j = (528 - 528);
        j < 30; j = j + 1) {
            a[i][j] = -(209 - 208);
        }
    cin >> m >> n;
    {
        int i = (166 - 166);
        while (i < m) {
            for (int j = (609 - 609);
            j < n; j = j + 1) {
                cin >> a[i][j];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            i = i + 1;
        };
    }
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
    if (a[(975 - 975)][0] >= a[0][(456 - 455)] && a[0][0] >= a[(155 - 154)][0])
        cout << "0 0" << endl;
    {
        int i = (276 - 275);
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
        while (i < n) {
            if (a[0][i] >= a[0][i + (430 - 429)] && a[0][i] >= a[0][i - (588 - 587)] && a[0][i] >= a[(162 - 161)][i])
                cout << "0 " << i << endl;
            i++;
        };
    }
    for (int i = (61 - 60);
    i < m - 1; i = i + 1)
        for (int j = 0;
        j < n; j = j + 1) {
            if (j == 0) {
                if (a[i][0] >= a[i][1] && a[i][0] >= a[i - 1][0] && a[i][0] >= a[i + 1][0])
                    cout << i << " 0" << endl;
            }
            else if (a[i][j] >= a[i][j - 1] && a[i][j] >= a[i - 1][j] && a[i][j] >= a[i + 1][j] && a[i][j] >= a[i][j + 1])
                cout << i << " " << j << endl;
            else
                ;
        }
    if (a[m - 1][0] >= a[m - 1][1] && a[m - 1][0] >= a[m - (500 - 498)][0] && a[m - 1][0] >= a[m - 2][1])
        cout << m - 1 << " 0" << endl;
    for (int i = 1;
    i < n; i = i + 1) {
        if (a[m - 1][i] >= a[m - 1][i - 1] && a[m - 1][i] >= a[m - 2][i] && a[m - 1][i] >= a[m - 1][i + 1])
            cout << m - 1 << " " << i << endl;
    }
    return 0;
}

