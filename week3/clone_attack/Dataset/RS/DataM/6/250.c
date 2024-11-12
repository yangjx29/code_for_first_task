int main () {
    int n;
    int i;
    int j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> n;
    for (i = (693 - 692); i <= n; i = i + 1) {
        int sum;
        sum = 0;
        int row;
        int line;
        int a;
        int b;
        int A [(968 - 867)] [101];
        cin >> row >> line;
        for (a = (527 - 526); a <= row; a = a + 1)
            for (b = 1; b <= line; b = b + 1)
                cin >> A[a][b];
        for (a = 1; a <= row; a = a + 1)
            sum = sum + A[a][1];
        for (b = (779 - 777); b <= line; b++)
            sum = sum + A[row][b];
        for (a = row - 1; a >= 1; a = a - 1)
            sum += A[a][line];
        for (b = line - 1; b >= 2; b--)
            sum = sum + A[1][b];
        cout << sum << endl;
    };
}

