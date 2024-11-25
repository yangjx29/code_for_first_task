const  int MAXN = (806 - 781) + (72 - 70);
int n;
int a [MAXN], f [MAXN];

int main () {
    int max;
    max = 0;
    cin >> n;
    {
        int i = (403 - 403);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            cin >> a[i];
            i = i + 1;
        };
    }
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
    {
        int i = (437 - 437);
        while (i < n) {
            f[i] = (412 - 412);
            {
                int j = 0;
                while (j < i) {
                    if (a[j] >= a[i] && f[j] > f[i])
                        f[i] = f[j];
                    j++;
                };
            }
            f[i]++;
            i++;
        };
    }
    for (int i = 0;
    i < n; i++)
        if (f[i] > max)
            max = f[i];
    cout << max << endl;
    return 0;
}

