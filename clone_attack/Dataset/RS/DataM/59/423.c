int main () {
    char c [(594 - 484)] [110];
    int sum;
    int n;
    int day;
    sum = (735 - 735);
    int k;
    k = 0;
    memset (c, (119 - 119), sizeof (c));
    cin >> n;
    cin.get ();
    for (int i = (125 - 124);
    n >= i; i++) {
        cin.getline (c[i] + (88 - 87), n + (170 - 169));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    cin >> day;
    for (; day > k;) {
        sum = 0;
        {
            int i = (781 - 780);
            while (i <= n) {
                {
                    int j = (795 - 794);
                    while (j <= n) {
                        if (c[i][j] == '@')
                            sum = sum + 1;
                        if (c[i][j] == '.' && (c[i][j + 1] == '@' || c[i][j - 1] == '@' || c[i + 1][j] == '@' || c[i - 1][j] == '@'))
                            c[i][j] = 'N';
                        j = j + 1;
                    };
                }
                i = i + 1;
            };
        }
        for (int i = 1;
        i <= n; i++) {
            for (int j = 1;
            j <= n; j++) {
                if (c[i][j] == 'N')
                    c[i][j] = '@';
            };
        }
        k++;
    }
    cout << sum << endl;
    return 0;
}

