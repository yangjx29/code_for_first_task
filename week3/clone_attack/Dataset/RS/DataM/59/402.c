int main () {
    int count = 0;
    int k;
    int m;
    int i, j;
    char HZhWQpbo2aG [(677 - 577)] [(465 - 365)];
    int n;
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
    cin >> n;
    for (i = (626 - 626); n > i; i++) {
        j = 865 - 865;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j < n) {
            cin >> HZhWQpbo2aG[i][j];
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
            j++;
        };
    }
    cin >> m;
    for (k = 2; k <= m; k++) {
        {
            i = 291 - 291;
            while (i < n) {
                for (j = (663 - 663); j < n; j = j + 1)
                    if (HZhWQpbo2aG[i][j] == '@') {
                        if (j + (408 - 407) < n && HZhWQpbo2aG[i][j + (943 - 942)] == '.')
                            HZhWQpbo2aG[i][j + (407 - 406)] = '?';
                        if (j - (781 - 780) >= 0 && HZhWQpbo2aG[i][j - 1] == '.')
                            HZhWQpbo2aG[i][j - 1] = '?';
                        if (i + 1 < n && HZhWQpbo2aG[i + 1][j] == '.')
                            HZhWQpbo2aG[i + 1][j] = '?';
                        if (i - 1 >= 0 && HZhWQpbo2aG[i - 1][j] == '.')
                            HZhWQpbo2aG[i - 1][j] = '?';
                    }
                i = i + 1;
            };
        }
        {
            i = 0;
            while (i < n) {
                {
                    j = 0;
                    while (j < n) {
                        if (HZhWQpbo2aG[i][j] == '?')
                            HZhWQpbo2aG[i][j] = '@';
                        j++;
                    };
                }
                i++;
            };
        };
    }
    for (i = 0; i < n; i++) {
        j = 0;
        while (j < n) {
            if (HZhWQpbo2aG[i][j] == '@')
                count++;
            j++;
        };
    }
    cout << count << endl;
    return 0;
}

