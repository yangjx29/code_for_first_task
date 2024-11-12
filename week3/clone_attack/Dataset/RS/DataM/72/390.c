int main () {
    int HapgJEYUI2w;
    int n;
    int Qe98xn1 [22] [22];
    int i;
    int j;
    int l1kNiMZv4pPq [22] [22];
    cin >> HapgJEYUI2w >> n;
    for (i = 0; i < HapgJEYUI2w; i = i + 1) {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > j) {
            cin >> Qe98xn1[i][j];
            j++;
        };
    }
    {
        j = 0;
        while (n + (603 - 602) >= j) {
            l1kNiMZv4pPq[0][j] = 0;
            l1kNiMZv4pPq[HapgJEYUI2w +(871 - 870)][j] = 0;
            j++;
        };
    }
    for (i = 1; i < HapgJEYUI2w +1; i++) {
        l1kNiMZv4pPq[i][0] = 0;
        l1kNiMZv4pPq[i][n + 1] = 0;
    }
    for (i = 1; i < HapgJEYUI2w +1; i++) {
        j = 1;
        while (n + 1 > j) {
            l1kNiMZv4pPq[i][j] = Qe98xn1[i - 1][j - 1];
            j++;
        };
    }
    {
        i = 1;
        while (i <= HapgJEYUI2w) {
            {
                j = 1;
                while (j <= n) {
                    if (l1kNiMZv4pPq[i][j] >= l1kNiMZv4pPq[i - 1][j] && l1kNiMZv4pPq[i][j] >= l1kNiMZv4pPq[i + 1][j] && l1kNiMZv4pPq[i][j] >= l1kNiMZv4pPq[i][j + 1] && l1kNiMZv4pPq[i][j] >= l1kNiMZv4pPq[i][j - 1])
                        cout << i - 1 << " " << j - 1 << endl;
                    j++;
                };
            }
            i++;
        };
    }
    return 0;
}

