int main () {
    int TKdreZW, m, xZkyzxf5, IUlJcKs, i, count;
    cin >> TKdreZW >> xZkyzxf5;
    m = TKdreZW +xZkyzxf5;
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
    while (true) {
        count = 0;
        IUlJcKs = m;
        {
            i = 1;
            while (TKdreZW >= i) {
                IUlJcKs = IUlJcKs -xZkyzxf5;
                if ((IUlJcKs % TKdreZW == 0) && (IUlJcKs != 0)) {
                    count = count + 1;
                    IUlJcKs = IUlJcKs *(TKdreZW -1) / TKdreZW;
                    continue;
                }
                break;
                i = i + 1;
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
        if (count == TKdreZW) {
            cout << m << endl;
            break;
        }
        m = m + TKdreZW;
    }
    return 0;
}

