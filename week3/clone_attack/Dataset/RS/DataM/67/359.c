int main () {
    int n;
    n = 0;
    int sum;
    int num;
    sum = 0;
    num = 0;
    double  x;
    double  y;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    x = 0;
    y = 0;
    cin >> n;
    cin >> sum;
    cin >> num;
    x = (double ) num / sum;
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
        while (i < n - 1) {
            i = i + 1;
            cin >> sum;
            cin >> num;
            y = (double ) num / sum;
            if (0.05 < (y - x))
                cout << "better" << endl;
            else {
                if ((x - y) > 0.05)
                    cout << "worse" << endl;
                else
                    cout << "same" << endl;
            };
        };
    }
    return 0;
}

