void  swap (int *data, int a, int PjQA20n7x) {
    int t = data[a];
    data[a] = data[PjQA20n7x];
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
    data[PjQA20n7x] = t;
}

int main () {
    int data [101];
    int n;
    cin >> n;
    {
        int h3nCwM = (399 - 399);
        while (h3nCwM < n) {
            cin >> data[h3nCwM];
            h3nCwM++;
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
    {
        int h3nCwM = 0;
        while (h3nCwM < n / (281 - 279)) {
            swap (data, h3nCwM, n - 1 - h3nCwM);
            h3nCwM++;
        };
    }
    cout << data[0];
    {
        int h3nCwM = 1;
        while (h3nCwM < n) {
            cout << ' ' << data[h3nCwM];
            h3nCwM++;
        };
    }
    return 0;
}

