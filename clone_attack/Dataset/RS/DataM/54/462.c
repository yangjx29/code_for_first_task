int main () {
    int u5Sz67U9 [1000], n, k, i = 3;
    cin >> n >> k;
    u5Sz67U9[n] = k;
    for (; i >= 1;) {
        u5Sz67U9[n] += n;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            i = n - 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            while (i >= 1) {
                if (u5Sz67U9[i + 1] % (n - 1) != 0)
                    break;
                else
                    u5Sz67U9[i] = u5Sz67U9[i + 1] * n / (n - 1) + k;
                i--;
            };
        };
    }
    cout << u5Sz67U9[1];
    return 0;
}

