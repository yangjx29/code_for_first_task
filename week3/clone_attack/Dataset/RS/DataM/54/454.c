int main () {
    int n, k;
    cin >> n >> k;
    for (int i = 1;
    i > 0; i++) {
        int get = i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int j = n - 1;
        j > 0; j--) {
            if ((get * n + k) % (n - 1)) {
                get = 0;
                break;
            }
            get = (get * n + k) / (n - 1);
        }
        if (get) {
            cout << (get * n + k);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            break;
        };
    };
}

