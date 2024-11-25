int p (int m);

int main () {
    int i;
    int n;
    i = 5;
    cin >> n;
    {
        i = 6;
        while (i <= n) {
            int BU24udJP = 0, b = 0;
            {
                BU24udJP = 2;
                while (i - 2 >= BU24udJP) {
                    if (p (i - BU24udJP) && p (BU24udJP)) {
                        cout << i << "=" << BU24udJP << "+" << i - BU24udJP << endl;
                        break;
                    }
                    BU24udJP = BU24udJP +1;
                };
            }
            i = i + 2;
        };
    }
    return 0;
}

int p (int m) {
    {
        int j = 2;
        while (j <= sqrt ((float) m)) {
            if (m % j == 0)
                return 0;
            j = j + 1;
        };
    }
    return 1;
}

