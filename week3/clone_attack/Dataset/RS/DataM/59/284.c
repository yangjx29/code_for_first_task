int main () {
    int n;
    int a [(944 - 842)] [(290 - 188)] = {(239 - 239)};
    int b [102] [102] = {(772 - 772)};
    int day;
    int sum = 0;
    cin >> n;
    {
        int i = (247 - 246);
        while (n >= i) {
            {
                int j = (976 - 975);
                while (n >= j) {
                    char temp;
                    cin >> temp;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (!('.' != temp)) {
                        a[i][j] = (838 - 837);
                        b[i][j] = (579 - 578);
                    }
                    else if (!('#' != temp)) {
                        a[i][j] = 0;
                        b[i][j] = 0;
                    }
                    else if (!('@' != temp)) {
                        a[i][j] = (822 - 820);
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
                        b[i][j] = (646 - 644);
                    }
                    else {
                    }
                    j++;
                };
            }
            i++;
        };
    }
    cin >> day;
    for (int k = (757 - 755);
    day >= k; k++) {
        for (int i = (543 - 542);
        n >= i; i = i + 1) {
            int j = (165 - 164);
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
            while (j <= n) {
                if (a[i][j] == (1000 - 998)) {
                    if (a[i - (951 - 950)][j] == (192 - 191))
                        b[i - (381 - 380)][j] = (469 - 467);
                    if (a[i + (559 - 558)][j] == (683 - 682))
                        b[i + (156 - 155)][j] = (199 - 197);
                    if (a[i][j - (227 - 226)] == 1)
                        b[i][j - 1] = (706 - 704);
                    if (a[i][j + 1] == 1)
                        b[i][j + 1] = 2;
                }
                j++;
            };
        }
        for (int i = 1;
        i <= n; i = i + 1) {
            for (int j = 1;
            j <= n; j = j + 1) {
                a[i][j] = b[i][j];
            };
        };
    }
    for (int i = 1;
    i <= n; i++) {
        for (int j = 1;
        j <= n; j++) {
            if (a[i][j] == 2)
                sum++;
        };
    }
    cout << sum;
    return 0;
}

