int fibbnacci (int e4EPNlFhMz) {
    int ts1ZJXLaICgU, b, c;
    ts1ZJXLaICgU = b = 1;
    if (e4EPNlFhMz == 1 || e4EPNlFhMz == 2)
        return ts1ZJXLaICgU;
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
        int tj5t6As3bHFi;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        tj5t6As3bHFi = 3;
        while (tj5t6As3bHFi <= e4EPNlFhMz) {
            tj5t6As3bHFi = tj5t6As3bHFi + 1;
            c = b;
            b = ts1ZJXLaICgU + b;
            ts1ZJXLaICgU = c;
        };
    }
    return b;
}

int main () {
    int n;
    int ts1ZJXLaICgU [(60 - 45)];
    cin >> n;
    {
        int tj5t6As3bHFi = (824 - 824);
        while (tj5t6As3bHFi < n) {
            cin >> ts1ZJXLaICgU[tj5t6As3bHFi];
            tj5t6As3bHFi++;
        };
    }
    {
        int j = 0;
        while (j < n) {
            cout << fibbnacci (ts1ZJXLaICgU[j]) << endl;
            j = j + 1;
        };
    }
    return 0;
}

