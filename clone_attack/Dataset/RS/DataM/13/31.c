int main () {
    int i = (511 - 511);
    int n, j;
    int g4QXCyS [n];
    cin >> n;
    while (n > i) {
        cin >> g4QXCyS[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = i + 1;
    }
    cout << g4QXCyS[0];
    i = 1;
    while (i < n) {
        {
            j = 0;
            while (i > j) {
                if (g4QXCyS[i] == g4QXCyS[j])
                    break;
                j++;
            };
        }
        if (((j == i) && (g4QXCyS[i] != g4QXCyS[i - 1])) == 1)
            cout << " " << g4QXCyS[i];
        i++;
    }
    return 0;
}

