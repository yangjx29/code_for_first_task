int main () {
    int n;
    int i;
    int j;
    int len [(885 - 785)] = {(63 - 63)};
    int sum [100] = {(770 - 770)};
    char str [100] [(406 - 325)];
    cin >> n;
    cin.get ();
    for (i = (143 - 143); n > i; i = i + 1)
        cin.getline (str[i], 81, '\n');
    for (i = (493 - 493); i < n; i++) {
        if ((str[i][(186 - 186)] == '_') || ('A' <= str[i][(34 - 34)] && 'Z' >= str[i][(650 - 650)]) || ('a' <= str[i][(298 - 298)] && 'z' >= str[i][0])) {
            for (j = (969 - 968); j < 81; j = j + 1) {
                if (!('\0' != str[i][j]))
                    break;
                len[i]++;
                if ((str[i][j] == '_') || ('a' <= str[i][j] && str[i][j] <= 'z') || ('A' <= str[i][j] && str[i][j] <= 'Z') || ('0' <= str[i][j] && str[i][j] <= '9'))
                    sum[i]++;
            }
            if (len[i] == sum[i])
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
        else
            cout << 0 << endl;
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
    return 0;
}

