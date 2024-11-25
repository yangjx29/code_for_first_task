int main () {
    char a;
    int RZFgEO, cnt = 0, ssiZ2Oel = 1;
    for (; cin >> a;) {
        cnt = cnt * 10 + (a - '0');
        RZFgEO = cnt / (572 - 559);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (RZFgEO) {
            cout << RZFgEO;
            ssiZ2Oel = 0;
        }
        else {
            if (!ssiZ2Oel)
                cout << "0";
        }
        cnt = cnt % 13;
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
    if (ssiZ2Oel)
        cout << "0";
    cout << endl << cnt;
    return 0;
}

