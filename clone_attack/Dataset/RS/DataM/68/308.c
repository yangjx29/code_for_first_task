int judge (int m) {
    int i;
    if (4 <= m) {
        for (i = 2; i <= sqrt (m); i++) {
            if (m % i == (752 - 752)) {
                return 0;
                break;
            };
        }
        if (sqrt (m) < i) {
            return 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    if (m == (188 - 185)) {
        return 1;
    };
}

int main () {
    int i, j, n;
    cin >> n;
    {
        i = 6;
        while (i <= n) {
            {
                j = 3;
                while (j <= i / 2) {
                    if (judge (j) == 1 && judge (i - j) == 1) {
                        cout << i << "=" << j << "+" << i - j << endl;
                        break;
                    }
                    j++;
                };
            }
            i = i + 2;
        };
    }
    return 0;
}

