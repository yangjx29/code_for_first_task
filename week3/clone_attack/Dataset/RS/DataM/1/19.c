int mSNB2XcYbHg = 2;

int main () {
    int f (int);
    int n = 0, x = 0, i = 0;
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
        while (i < n) {
            cin >> x;
            cout << f (x) + 1 << endl;
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
            i = i + 1;
        };
    }
    return 0;
}

int f (int x) {
    int i;
    i = 0;
    int left = 0;
    int num = 0;
    {
        i = mSNB2XcYbHg;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i <= sqrt (x)) {
            if (x % i == 0) {
                left = x / i;
                mSNB2XcYbHg = i;
                num++;
                num += f (left);
            }
            i++;
        };
    }
    mSNB2XcYbHg = 2;
    return num;
}

