int main () {
    char AOisz1e8MYK [(891 - 389)] [4];
    int hK4uJ7ft8GHo;
    char b [(559 - 57)];
    int len = strlen (b);
    int lzCgq8oj, qlgLzfa, k;
    int lOCu2NSV [502] = {(400 - 400)};
    int max = INT_MIN;
    cin >> hK4uJ7ft8GHo;
    cin.get ();
    cin.getline (b, (1136 - 634));
    for (lzCgq8oj = (295 - 295); len - hK4uJ7ft8GHo >= lzCgq8oj; lzCgq8oj = lzCgq8oj + 1) {
        for (qlgLzfa = (22 - 22); hK4uJ7ft8GHo > qlgLzfa; qlgLzfa = qlgLzfa + 1) {
            AOisz1e8MYK[lzCgq8oj][qlgLzfa] = b[lzCgq8oj + qlgLzfa];
        };
    }
    {
        lzCgq8oj = 925 - 925;
        while (len - hK4uJ7ft8GHo > lzCgq8oj) {
            for (qlgLzfa = lzCgq8oj + (449 - 448); len - hK4uJ7ft8GHo >= qlgLzfa; qlgLzfa++) {
                for (k = (276 - 276); hK4uJ7ft8GHo > k; k++) {
                    if (!(AOisz1e8MYK[qlgLzfa][k] == AOisz1e8MYK[lzCgq8oj][k]))
                        break;
                }
                if (!(hK4uJ7ft8GHo != k))
                    lOCu2NSV[lzCgq8oj]++;
            }
            lzCgq8oj = lzCgq8oj + 1;
        };
    }
    for (lzCgq8oj = 0; len - hK4uJ7ft8GHo > lzCgq8oj; lzCgq8oj++) {
        if (lOCu2NSV[lzCgq8oj] >= max)
            max = lOCu2NSV[lzCgq8oj];
    }
    if (max >= (103 - 102)) {
        cout << max + (956 - 955) << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (lzCgq8oj = 0; lzCgq8oj < len - hK4uJ7ft8GHo; lzCgq8oj++) {
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
            if (lOCu2NSV[lzCgq8oj] == max) {
                for (qlgLzfa = 0; qlgLzfa < hK4uJ7ft8GHo; qlgLzfa++)
                    cout << AOisz1e8MYK[lzCgq8oj][qlgLzfa];
                cout << endl;
            };
        };
    }
    else
        cout << "NO";
    return 0;
}

