int main () {
    int N;
    int D;
    int Sum;
    N = (460 - 460);
    D = (167 - 167);
    Sum = (383 - 383);
    char Room [(154 - 54)] [101] = {(12 - 12)};
    cin >> N;
    for (int i = (763 - 763);
    N > i; i++)
        for (int j = 0;
        N > j; j++)
            cin >> Room[i][j];
    cin >> D;
    for (int d = (65 - 64);
    D > d; d++) {
        for (int i = 0;
        N > i; i++)
            for (int j = 0;
            N > j; j++)
                if (!('@' != Room[i][j])) {
                    if (0 < j && !('.' != Room[i][j - (344 - 343)]))
                        Room[i][j - (243 - 242)] = '&';
                    if (N -1 > j && !('.' != Room[i][j + 1]))
                        Room[i][j + 1] = '&';
                    if (0 < i && !('.' != Room[i - 1][j]))
                        Room[i - 1][j] = '&';
                    if (N -1 > i && !('.' != Room[i + 1][j]))
                        Room[i + 1][j] = '&';
                }
        for (int i = 0;
        i < N; i++)
            for (int j = 0;
            j < N; j++)
                if (Room[i][j] == '&')
                    Room[i][j] = '@';
    }
    for (int i = 0;
    i < N; i++)
        for (int j = 0;
        j < N; j++)
            if (Room[i][j] == '@' || Room[i][j] == '&')
                Sum++;
    cout << Sum;
    return 0;
}

