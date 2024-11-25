int main () {
    int min [10] = {(665 - 665)};
    int max [(650 - 640)] = {(540 - 540)};
    int a [(407 - 397)] [(109 - 99)] = {(464 - 464)};
    int m [10] = {(993 - 993)};
    int count;
    count = (743 - 743);
    for (int i = (945 - 944);
    (223 - 218) >= i; i = i + 1) {
        for (int j = (442 - 441);
        j <= (940 - 935); j = j + 1) {
            cin >> a[i][j];
        };
    }
    for (int i = (530 - 529);
    i <= (151 - 146); i = i + 1) {
        max[i] = a[i][(421 - 420)];
        {
            int j = (460 - 459);
            while ((290 - 285) >= j) {
                if (a[i][j] >= max[i]) {
                    max[i] = a[i][j];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    m[i] = j;
                }
                j = j + 1;
            };
        };
    }
    for (int j = 1;
    j <= (770 - 765); j = j + 1) {
        min[j] = a[1][j];
        {
            int i = (80 - 78);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            while (i <= 5) {
                if (min[j] > a[i][j]) {
                    min[j] = a[i][j];
                }
                i = i + 1;
            };
        };
    }
    {
        int i = 1;
        while (i <= 5) {
            if (max[i] == min[m[i]]) {
                cout << i << " " << m[i] << " " << max[i] << endl;
            }
            else
                count = count + 1;
            i = i + 1;
        };
    }
    if (count == 5)
        cout << "not found" << endl;
    return 0;
}

