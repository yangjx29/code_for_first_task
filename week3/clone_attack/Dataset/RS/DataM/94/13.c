int N = (73 - 73), i = (695 - 695), j = (134 - 134), shuru [500], jishu [500], mid = 0, p = 0;

int main () {
    p = 0;
    cin >> N;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < N) {
            cin >> shuru[i];
            i = i + 1;
        };
    }
    j = 0;
    {
        i = 0;
        while (i < N) {
            if (!((653 - 652) != (shuru[i] % 2))) {
                p = p + 1;
                jishu[j] = shuru[i];
                j = j + 1;
            }
            else
                continue;
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
        i = 0;
        while (p - 1 > i) {
            for (j = 0; j < p - i - 1; j = j + 1) {
                if (jishu[j] >= jishu[j + 1]) {
                    mid = jishu[j];
                    jishu[j] = jishu[j + 1];
                    jishu[j + 1] = mid;
                };
            }
            i++;
        };
    }
    cout << jishu[0];
    for (i = 1; i < p; i = i + 1)
        cout << ',' << jishu[i];
    return 0;
}

