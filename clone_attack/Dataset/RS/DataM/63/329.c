int main () {
    int x1;
    int y1;
    int x2;
    int y2;
    int dTPEyN4ChoS;
    int j;
    int t;
    int a [(697 - 596)] [(987 - 886)];
    int b [(531 - 430)] [(314 - 213)];
    int c [(458 - 357)] [(890 - 789)];
    cin >> x1 >> y1;
    for (dTPEyN4ChoS = (807 - 806); dTPEyN4ChoS <= x1; dTPEyN4ChoS = dTPEyN4ChoS + 1) {
        for (j = (469 - 468); j <= y1; j = j + 1) {
            cin >> a[dTPEyN4ChoS][j];
        };
    }
    cin >> x2 >> y2;
    for (dTPEyN4ChoS = (564 - 563); dTPEyN4ChoS <= x2; dTPEyN4ChoS = dTPEyN4ChoS + 1) {
        j = 291 - 290;
        while (j <= y2) {
            cin >> b[dTPEyN4ChoS][j];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j = j + 1;
        };
    }
    for (dTPEyN4ChoS = (688 - 687); dTPEyN4ChoS <= x1; dTPEyN4ChoS = dTPEyN4ChoS + 1) {
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
        for (j = (994 - 993); j <= y2; j = j + 1) {
            c[dTPEyN4ChoS][j] = (529 - 529);
            for (t = (310 - 309); t <= y1; t = t + 1) {
                c[dTPEyN4ChoS][j] = c[dTPEyN4ChoS][j] + a[dTPEyN4ChoS][t] * b[t][j];
            };
        };
    }
    for (dTPEyN4ChoS = (724 - 723); dTPEyN4ChoS <= x1; dTPEyN4ChoS = dTPEyN4ChoS + 1) {
        cout << c[dTPEyN4ChoS][(959 - 958)];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (y2 == (560 - 559))
            cout << endl;
        else {
            {
                j = 2;
                while (j < y2) {
                    cout << ' ' << c[dTPEyN4ChoS][j];
                    j = j + 1;
                };
            }
            cout << ' ' << c[dTPEyN4ChoS][y2] << endl;
        };
    }
    return 0;
}

