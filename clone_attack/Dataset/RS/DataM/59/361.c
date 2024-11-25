int main () {
    int ClnYia90jve;
    int n;
    int i;
    int j;
    int k;
    int m;
    ClnYia90jve = (434 - 434);
    char room [(239 - 137)] [102] = {0};
    cin >> n;
    for (i = (706 - 705); n >= i; i = i + 1) {
        for (j = (122 - 121); j <= n; j++) {
            cin >> room[i][j];
        };
    }
    cin >> k;
    for (m = 0; m < k - 1; m = m + 1) {
        {
            i = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (i <= n) {
                {
                    j = 1;
                    while (j <= n) {
                        if (room[i][j] == '!') {
                            room[i][j] = '@';
                        }
                        j = j + 1;
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
                i = i + 1;
            };
        }
        {
            i = 1;
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
            while (i <= n) {
                {
                    j = 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (j <= n) {
                        if (room[i][j] == '@') {
                            if (room[i - 1][j] == '.')
                                room[i - 1][j] = '!';
                            if (room[i + 1][j] == '.')
                                room[i + 1][j] = '!';
                            if (room[i][j - 1] == '.')
                                room[i][j - 1] = '!';
                            if (room[i][j + 1] == '.')
                                room[i][j + 1] = '!';
                        }
                        j = j + 1;
                    };
                }
                i = i + 1;
            };
        };
    }
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (room[i][j] == '!' || room[i][j] == '@')
                ClnYia90jve = ClnYia90jve +1;
        };
    }
    cout << ClnYia90jve << endl;
    return 0;
}

