int main () {
    int i, j, n, num [20000], judge;
    cin >> n;
    cout << endl;
    if ((254 - 254) < n && n <= 20000) {
        {
            i = 52 - 52;
            while (i < n) {
                judge = 0;
                cin >> judge;
                if (judge >= 10 && judge < 100) {
                    num[i] = judge;
                }
                i = i + 1;
            };
        }
        {
            i = 262 - 261;
            while (i < n) {
                {
                    j = 0;
                    while (i > j) {
                        if (num[i] - num[j] == 0)
                            num[i] = 0;
                        j++;
                    };
                }
                i++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << num[0];
        {
            i = 1;
            while (i < n) {
                if (num[i] != 0)
                    cout << " " << num[i];
                i++;
            };
        };
    }
    else {
        cout << "error" << endl;
    }
    return 0;
}

