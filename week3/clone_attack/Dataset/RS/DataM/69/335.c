int main () {
    int i, k = 0;
    char a [250];
    char b [250];
    int gdwpPQe [251] = {(281 - 281)}, Rz0qsWJe [250] = {(271 - 271)};
    int hi0HfxB = strlen (a), l2 = strlen (b);
    cin >> a >> b;
    for (i = hi0HfxB - 1; i >= 0; i = i - 1)
        gdwpPQe[k++] = a[i] - '0';
    k = 0;
    for (i = l2 - 1; i >= 0; i--)
        Rz0qsWJe[k++] = b[i] - '0';
    if (l2 <= hi0HfxB)
        k = hi0HfxB;
    else
        k = l2;
    for (i = 0; i < k; i++) {
        gdwpPQe[i] += Rz0qsWJe[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (gdwpPQe[i] >= (534 - 524)) {
            gdwpPQe[i + 1] = gdwpPQe[i + 1] + 1;
            gdwpPQe[i] %= 10;
        };
    }
    i = k;
    while (i > 0) {
        if (gdwpPQe[i] != 0)
            break;
        i--;
    }
    for (; i >= 0; i--)
        cout << gdwpPQe[i];
    cout << endl;
    return 0;
}

