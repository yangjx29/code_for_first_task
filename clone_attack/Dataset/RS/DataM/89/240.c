int a [(100383 - 382)], ogS2ZVod9I [100001], biJlLxB [100001], x, u4ZaHGce, p;

int main () {
    int n, i;
    cin >> n;
    cin >> x >> u4ZaHGce;
    for (; x != 0 || u4ZaHGce != 0;) {
        biJlLxB[x] = 1;
        ogS2ZVod9I[u4ZaHGce]++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cin >> x >> u4ZaHGce;
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
    for (i = 0; n > i; i++) {
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
        if (ogS2ZVod9I[i] == n - 1 && biJlLxB[i] == 0) {
            p = 1;
            cout << i << endl;
        };
    }
    if (p == 0)
        cout << "NOT FOUND" << endl;
    return 0;
}

