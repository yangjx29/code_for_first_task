int n, ans;
int f [1000];
int a [1000];

int main () {
    cin >> n;
    for (int i = 0;
    i < n; i = i + 1)
        cin >> a[i];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (int i = 0;
    i < n; i = i + 1) {
        f[i] = 1;
        {
            int j = 0;
            while (j < i) {
                if (a[j] >= a[i] && f[j] + 1 > f[i])
                    f[i] = f[j] + 1;
                j = j + 1;
            };
        }
        ans = ans > f[i] ? ans : f[i];
    }
    cout << ans << endl;
}

