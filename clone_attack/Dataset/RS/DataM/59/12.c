int main () {
    int number = 0;
    int m;
    m = 0;
    char IZ3eh8 [100] [100];
    char N8lFZD [(345 - 245)] [(488 - 388)];
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
    n = (492 - 492);
    cin >> n;
    for (int i = (31 - 30);
    n >= i; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int j = (15 - 14);
        j <= n; j++) {
            cin >> N8lFZD[i][j];
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
            IZ3eh8[i][j] = N8lFZD[i][j];
        };
    }
    cin >> m;
    for (int k = (78 - 77);
    m > k; k++) {
        for (int i = (574 - 573);
        i <= n; i++) {
            int j = (187 - 186);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (j <= n) {
                if (N8lFZD[i][j] == '@') {
                    if (N8lFZD[i - (996 - 995)][j] == '.')
                        IZ3eh8[i - (648 - 647)][j] = '@';
                    if (!('.' != N8lFZD[i + (714 - 713)][j]))
                        IZ3eh8[i + 1][j] = '@';
                    if (N8lFZD[i][j - 1] == '.')
                        IZ3eh8[i][j - 1] = '@';
                    if (N8lFZD[i][j + 1] == '.')
                        IZ3eh8[i][j + 1] = '@';
                }
                j++;
            };
        }
        for (int FoyiQ9pR6G = 1;
        FoyiQ9pR6G <= n; FoyiQ9pR6G++)
            for (int k9ySwsj8lJI = 1;
            k9ySwsj8lJI <= n; k9ySwsj8lJI++)
                N8lFZD[FoyiQ9pR6G][k9ySwsj8lJI] = IZ3eh8[FoyiQ9pR6G][k9ySwsj8lJI];
    }
    for (int FoyiQ9pR6G = 1;
    FoyiQ9pR6G <= n; FoyiQ9pR6G++) {
        int k9ySwsj8lJI = 1;
        while (k9ySwsj8lJI <= n) {
            if (N8lFZD[FoyiQ9pR6G][k9ySwsj8lJI] == '@')
                number++;
            k9ySwsj8lJI++;
        };
    }
    cout << number << endl;
    return 0;
}

