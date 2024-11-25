int wCBUZY = 1;

void  abc (int a, int eBGAgFfH3pe0) {
    int i;
    {
        i = eBGAgFfH3pe0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= a) {
            if (a % i == 0 && (a / i) >= i) {
                wCBUZY++;
                abc (a / i, i);
            }
            i = i + 1;
        };
    };
}

int main () {
    int t, x;
    cin >> t;
    {
        x = 1;
        while (x <= t) {
            int m;
            x++;
            cin >> m;
            wCBUZY = 1;
            abc (m, 2);
            cout << wCBUZY << endl;
        };
    }
    return 0;
}

