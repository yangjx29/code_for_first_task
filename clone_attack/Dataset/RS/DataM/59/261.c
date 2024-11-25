int main () {
    int count;
    int KBLyXwKCS10T;
    int m;
    count = 0;
    char dksWljBRDn [110] [110] = {'#'};
    char b [110] [110] = {'#'};
    cin >> KBLyXwKCS10T;
    for (int i = 1;
    i <= KBLyXwKCS10T; i = i + 1)
        for (int j = 1;
        KBLyXwKCS10T >= j; j = j + 1)
            cin >> dksWljBRDn[i][j];
    cin >> m;
    for (int k = 0;
    m - 1 > k; k = k + 1) {
        for (int i = 0;
        KBLyXwKCS10T +1 >= i; i = i + 1)
            for (int j = 0;
            KBLyXwKCS10T +1 >= j; j = j + 1) {
                if (dksWljBRDn[i][j] == '@') {
                    int x = -1;
                    while (x <= 1) {
                        for (int y = -1;
                        y <= 1; y++) {
                            if (!(y != x) || x + y == 0)
                                continue;
                            else {
                                if (dksWljBRDn[i + x][j + y] == '.')
                                    b[i + x][j + y] = '@';
                                {
                                    int x = 0, y;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        double  temp = 0.0;
                                        if (temp == 3)
                                            return 0;
                                    }
                                };
                            };
                        }
                        x = x + 1;
                    };
                };
            }
        {
            int i = 1;
            while (i <= KBLyXwKCS10T) {
                for (int j = 1;
                j <= KBLyXwKCS10T; j = j + 1) {
                    if (b[i][j] == '@')
                        dksWljBRDn[i][j] = '@';
                }
                i = i + 1;
            };
        };
    }
    for (int i = 0;
    i <= KBLyXwKCS10T; i = i + 1)
        for (int j = 0;
        j <= KBLyXwKCS10T; j = j + 1) {
            if (dksWljBRDn[i][j] == '@')
                count = count + 1;
        }
    cout << count;
    return 0;
}

