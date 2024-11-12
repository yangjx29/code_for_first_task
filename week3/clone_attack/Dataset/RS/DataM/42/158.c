int main () {
    int count = 0;
    int k;
    int n;
    int num;
    int eoN8Ow [100000];
    cin >> n;
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
        int i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            cin >> eoN8Ow[i];
            i = i + 1;
        };
    }
    cin >> k;
    for (int s = 0;
    s < n; s = s + 1) {
        if (!(k != eoN8Ow[s])) {
            {
                int j = s;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                while (n > j) {
                    eoN8Ow[j] = eoN8Ow[j + 1];
                    j = j + 1;
                };
            }
            s--;
            count = count + 1;
        };
    }
    cout << eoN8Ow[0];
    num = n - count;
    for (int l = 1;
    l < num; l = l + 1) {
        cout << ' ' << eoN8Ow[l];
    }
    return 0;
}

